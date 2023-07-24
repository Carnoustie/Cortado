#include <iostream>

using namespace std;

class Vector{

public:
  Vector();
  Vector(int size);
  Vector(int size,double* content);

  Vector operator+(Vector const otherVector);
  Vector operator-(Vector const otherVector);
  Vector operator*(Vector const otherVector);


  void print();
  double norm();
  double get(int index);

private:
  int dim;
  double* Data;
};
