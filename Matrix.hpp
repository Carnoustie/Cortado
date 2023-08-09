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

  void printMatrixInfo();
  Matrix transpose();
  void print();
private:
  double** Data;
};
