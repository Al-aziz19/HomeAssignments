
CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -std=c++17

SRCS = main.cpp transformer.cpp autobot.cpp decepticon.cpp maximal.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cpp transformer.h autobot.h decepticon.h maximal.h
	$(CXX) $(CXXFLAGS) -c main.cpp

transformer.o: transformer.cpp transformer.h
	$(CXX) $(CXXFLAGS) -c transformer.cpp

autobot.o: autobot.cpp autobot.h transformer.h
	$(CXX) $(CXXFLAGS) -c autobot.cpp

decepticon.o: decepticon.cpp decepticon.h transformer.h
	$(CXX) $(CXXFLAGS) -c decepticon.cpp

maximal.o: maximal.cpp maximal.h transformer.h
	$(CXX) $(CXXFLAGS) -c maximal.cpp

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
