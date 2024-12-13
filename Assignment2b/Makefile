CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -std=c++17

TARGET = rpn_calculator

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean