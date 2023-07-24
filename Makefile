Vector.o : Vector.hpp Vector.cpp
				g++ -c -O Vector.cpp

test.o : test.cpp Vector.hpp
			g++ -c -O test.cpp

test : Vector.o test.o
			g++ -O -o test Vector.o test.o
