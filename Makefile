Vector.o : Vector.hpp Vector.cpp
				g++ -c -O Vector.cpp

Matrix.o : Vector.hpp Matrix.hpp Matrix.cpp
				g++ -c -O Matrix.cpp

test.o : test.cpp Vector.hpp Matrix.hpp
			g++ -c -O test.cpp

test : Vector.o Matrix.o test.o
			g++ -O -o test Vector.o Matrix.o test.o
