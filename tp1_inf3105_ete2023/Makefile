CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

SRCS = tp1.cpp
OBJS = $(SRCS:.cpp=.o)
EXECUTABLE = tp1

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXECUTABLE)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
