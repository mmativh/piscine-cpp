CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
NAME = phonebook
SRC = phonebook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<
	
