#include "Matrix.hpp"
#include "Vector.hpp"
#include <cassert>

using namespace std;

Matrix::Matrix(int rows, int columns){
  Data = new double* [rows];
  for(int i=0; i<rows; i++){
    Data[i] = new double[columns];
  }
}

Matrix Matrix::operator+(Matrix const otherMatrix){
  //assert here
  Matrix sum(rows,columns);
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      sum.Data[i][j] = otherMatrix.Data[i][j] + Data[i][j];
    }
  }
  return sum;
}

double &Matrix::operator()(int row, int column){
  return Data[row][column];
}

// double* &Matrix::operator[](int index){
//   return Data[index];
// }
//
// double &Matrix::operator[](int column){
//   return Data[index];
// }


// Matrix Matrix::operator*(Matrix const otherMatrix){
//   //assert here
//   Matrix product(rows, columns);
//   for(int i=0; i<rows; i++){
//     for(int j=0; j<columns; j++){
//       product.Data[i][j] =
//     }
//   }
// }
