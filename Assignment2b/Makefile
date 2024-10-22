CXX = g++
CXXFLAGS = -Wall -std=c++11 
BINARY = postfix

.PHONY: all clean

all: $(BINARY)

$(BINARY): main.cpp
	$(CXX) $(CXXFLAGS) -o $(BINARY) main.cpp

clean:
	rm -f $(BINARY)