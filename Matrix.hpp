#include "Vector.hpp"

using namespace std;


class Matrix{

public:
  Matrix(int numRows, int numColumns); //Constructor
  int size[2];
  int rows;
  int columns;
  Matrix operator+(Matrix const otherMatrix); // Addition
  Matrix operator-(Matrix const otherMatrix); // Subtraction
  Matrix operator*(Matrix const otherMatrix); //Matrix-Matrix Multiplication
  Vector operator*(Vector const x); // Matrix-vector Multiplication
  double &operator()(int row, int column) const; //Element Access

  Vector solve(Vector const b);
  Vector eigenValues(Matrix const A);
  void printMatrixInfo();
  Matrix transpose();
  double determinant();

  void print();
private:
  double** Data;
};
