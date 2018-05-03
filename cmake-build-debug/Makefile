CXX=g++
CXXFLAGS=-Wall -Werror -Wvla

all: Board.o IllegalCharException.o IllegalCoordinateException.o Index.o Element.o
	$(CXX) $(CXXFLAGS) Board.o IllegalCharException.o IllegalCoordinateException.o Index.o Element.o

Board.o: Board.cpp Board.hpp
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o

IllegalCharException.o: IllegalCharException.cpp IllegalCharException.hpp
	$(CXX) $(CXXFLAGS) -c IllegalCharException.cpp -o IllegalCharException.o

IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.hpp
	$(CXX) $(CXXFLAGS) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o

Index.o: Index.cpp Index.hpp
	$(CXX) $(CXXFLAGS) -c Index.cpp -o Index.o

Element.o: Element.cpp Element.hpp
	$(CXX) $(CXXFLAGS) -c Element.cpp -o Element.o
clean:
	rm *.o 
