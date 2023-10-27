#include "Vector.hpp"

using namespace std;


class Matrix{

public:
  Matrix(int numRows, int numColumns);
  int size[2];
  int rows;
  int columns;
  Matrix operator+(Matrix const otherMatrix);
  Matrix operator-(Matrix const otherMatrix);
  Matrix operator*(Matrix const otherMatrix);
  Vector operator*(Vector const x);
  double &operator()(int row, int column) const;

  Vector solve(Vector const b);
  Vector eigenValues(Matrix const A);
  void printMatrixInfo();
  Matrix transpose();
  void print();
private:
  double** Data;
};
