#include <iostream>

using namespace std;

class Vector{

public:

  // Constructors. The first constructor creates an empty Vector. The second two create vectors
  Vector(); //creates an empty Vector.
  Vector(int size); //Allocates memory for vector of 'size' elements
  Vector(int size,double* content); //Allocates memory for vector of 'size' elements and assigns the elements of 'content' into the Vector.

  // Overloading operators
  Vector operator+(Vector const otherVector); //Vector addition
  Vector operator-(Vector const otherVector); //Vector Subtraction
  double operator*(Vector const otherVector); //dot-product
  double &operator[](int const index) const; //Element access via square brackets
  double &operator()(int const index) const; //Element access via round brackets


  void print(); //Print Vector in a bracket-format
  double norm(); // Returns the L2-norm
  double get(int index); // Yet another element access method

private:
  int size;
  double* Data;
};
