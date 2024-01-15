#include "Vector.hpp"

using namespace std;


class Matrix{

public:
  Matrix(int numRows, int numColumns); //Constructor
  Matrix(const Matrix& A); //Constructor for deep copy (to new memory adress)

  int size[2];
  int rows;
  int columns;

  Matrix operator+(Matrix const otherMatrix); // Addition
  Matrix operator-(Matrix const otherMatrix); // Subtraction
  Matrix operator*(Matrix const otherMatrix); //Matrix-Matrix Multiplication
  Vector operator*(Vector const x); // Matrix-vector Multiplication
  double &operator()(int row, int column) const; //Element Access
  Matrix& operator=(const Matrix original);

  Vector solve(Vector const b);
  Vector eigenValues(Matrix const A);
  void printMatrixInfo();
  Matrix transpose();
  double determinant();
  void swapRows(int row1, int row2, int width);
  void swapColumns(int col1, int col2, int height);

  Matrix copy(Matrix A);

  void LU_Decomposition(Matrix* L, Matrix* U, int n);
  Vector getRow(int k);

  void print();
private:
  double** Data;
};
