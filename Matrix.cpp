#include "Matrix.hpp"
#include <cassert>

using namespace std;

Matrix::Matrix(int rows, int columns){
  Data = new double* [rows];
  for(int i=0; i<rows; i++){
    Data[i] = new double[columns];
  }
}

Matrix Matrix::operator+(Matrix otherMatrix){
  //assert here
  Matrix sum(rows,columns);
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      sum.Data[i][j] =otherMatrix.Data[i][j] + Data[i][j];
    }
  }
  return sum;
}
