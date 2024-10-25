TEST_TARGET = test_transformers

CXX = g++
CXXFLAGS = -Wall -std=c++11 -I/usr/include/gtest

LIBS = -lgtest -lgtest_main -pthread

SRCS = test_transformers.cpp transformer.cpp autobot.cpp decepticon.cpp maximal.cpp
OBJS = test_transformers.o transformer.o autobot.o decepticon.o maximal.o

all: $(TEST_TARGET)

$(TEST_TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

test_transformers.o: test_transformers.cpp transformer.h autobot.h decepticon.h maximal.h
	$(CXX) $(CXXFLAGS) -c test_transformers.cpp

transformer.o: transformer.cpp transformer.h
	$(CXX) $(CXXFLAGS) -c transformer.cpp

autobot.o: autobot.cpp autobot.h transformer.h
	$(CXX) $(CXXFLAGS) -c autobot.cpp

decepticon.o: decepticon.cpp decepticon.h transformer.h
	$(CXX) $(CXXFLAGS) -c decepticon.cpp

maximal.o: maximal.cpp maximal.h transformer.h
	$(CXX) $(CXXFLAGS) -c maximal.cpp

clean:
	rm *.o $(TEST_TARGET)