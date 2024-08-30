CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = Rock,Paper,Scissor_Game
SOURCES = main.cpp rps.cpp strcmp.cpp draw.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
