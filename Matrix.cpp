#include "Matrix.hpp"
// #include "Vector.hpp"
#include <cassert>
#include "math.h"

using namespace std;

Matrix::Matrix(int numRows, int numColumns){
  rows = numRows;
  columns = numColumns;
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


Matrix Matrix::operator-(Matrix const otherMatrix){
  //assert here
  Matrix difference(rows,columns);
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      difference.Data[i][j] =  Data[i][j] - otherMatrix.Data[i][j];
    }
  }
  return difference;
}




Matrix Matrix::operator*(Matrix const M){
  Matrix matrixProduct(rows, M.columns);
  for(int i=0; i<rows; i++){
    for(int j=0; j<M.columns; j++){
      double element = 0;
      for(int k=0; k<columns; k++){
        element+= Data[i][k]*M.Data[k][j];
      }
      matrixProduct.Data[i][j] = element;
      element=0;
    }
  }
  return matrixProduct;
}

Vector Matrix::operator*(Vector const x){
  Vector product(rows);
  double productElement;
  for(int i=0; i<rows; i++){
    productElement = 0;
    for(int j=0; j<columns; j++){
      productElement+=Data[i][j]*x[j];
    }
    product[i] = productElement;
  }
  return product;
}


double &Matrix::operator()(int row, int column) const{
  return Data[row][column];
}


Matrix Matrix::transpose(){
  Matrix transposed(columns, rows);
  for(int i=0; i<columns; i++){
    for(int j=0; j<rows; j++){
      transposed.Data[i][j] = Data[j][i];
    }
  }
  return transposed;
}




void Matrix::print(){
  cout << "\n\n";
  for(int i=0; i<rows; i++){
    cout << "[ ";
    for(int j=0; j<columns; j++){
    cout << "    " << Data[i][j] ;
  }
  cout << "  ]\n\n";
}
  return;
}


void Matrix::printMatrixInfo(){
  cout <<"\n\nNumber of rows: " << rows;
  cout <<"\n\nNumber of columns: " << columns;
}
