#include <iostream>

using namespace std;

class Vector{

public:

  // Constructors
  Vector();
  Vector(int size);
  Vector(int size,double* content);

  // Overloading operators
  Vector operator+(Vector const otherVector);
  Vector operator-(Vector const otherVector);
  double operator*(Vector const otherVector);
  double &operator[](int const index);

  // void operator[]=(double const element);

  void print();
  double norm();
  double get(int index);

private:
  int dim;
  double* Data;
};
