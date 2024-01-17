#include "Vector.hpp"

using namespace std;


class Matrix{

public:
  Matrix(int numRows, int numColumns); //Constructor

  int rows;
  int columns;


  Matrix operator+(Matrix const otherMatrix); // Addition
  Matrix operator-(Matrix const otherMatrix); // Subtraction
  Matrix operator*(Matrix const otherMatrix); //Matrix-Matrix Multiplication
  Vector operator*(Vector const x); // Matrix-vector Multiplication
  double &operator()(int row, int column) const; //Element Access
  Matrix& operator=(const Matrix original); // Assignment Operator

  Vector solve(Vector const b); //Solver for linear system with square invertible matrix of coefficients
  Vector eigenValues(Matrix const A); //Unresolved issue: returns eigenValues
  void printMatrixInfo(); // Prints rows and columns
  Matrix transpose(); // Returns the transpose of Matrix
  double determinant(); // Returns determinant of Matrix
  void swapRows(int row1, int row2, int width); // Exchange two rows of choice within matrix
  void swapColumns(int col1, int col2, int height); // Exchange two columns of choice within matrix

  void LU_Decomposition(Matrix* L, Matrix* U, int n); //accepts pointers to L and U and populates them with the elements of the L and U- factors off the callee-matrix.
  Vector getRow(int k); //Returns the k'th row vector of the callee-matrix.

  void print(); //Prints the matrix in a Human-readable format
private:
  double** Data; //Array of Arrays of the matrix elements.
};
