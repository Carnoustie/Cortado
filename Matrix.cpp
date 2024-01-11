#include "Matrix.hpp"
// #include "Vector.hpp"
#include <cassert>
#include "math.h"

using namespace std;


//Contructor
Matrix::Matrix(int numRows, int numColumns){
  rows = numRows;
  columns = numColumns;
  Data = new double* [rows];
  for(int i=0; i<rows; i++){
    Data[i] = new double[columns];
  }
}

//Addition
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

//Subtraction
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



//Matrix-Matrix Multiplication
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

//Matrix-Vector Multiplication
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

//Element Access
double &Matrix::operator()(int row, int column) const{
  return Data[row][column];
}




//Transpose
Matrix Matrix::transpose(){
  Matrix transposed(columns, rows);
  for(int i=0; i<columns; i++){
    for(int j=0; j<rows; j++){
      transposed.Data[i][j] = Data[j][i];
    }
  }
  return transposed;
}

double Matrix::determinant(){
  // cout << "\n\n\nSubmatrix:";
  print();
  if(rows==2 && columns==2){
    return Data[0][0]*Data[1][1] - Data[0][1]*Data[1][0];
  }
  double sum=0.0;
    for(int i=0; i<columns; i++){
      double k = Data[0][i]*(pow(-1,i));
      // cout << "\n\n\nk:" << k;
      Matrix minorMatrix(columns-1,rows-1);
      for(int j=0;j<columns-1;j++){
        for(int u=0;u<rows-1;u++){
          int skip = (int) j>=i;
          minorMatrix.Data[u][j] = Data[u+1][j+skip];
        }
      }
      sum+=k*minorMatrix.determinant();
    }
    return sum;
  }




Vector Matrix::solve(Vector b){
  assert(rows==columns); //Solver only for square matrices for now
  double det = abs((*this).determinant());
  assert(rows==columns && det >= 0.00001); //Solver only for square matrices for now

  Matrix tempMatrix = *this;

  return b;
}




void Matrix::print(){
  cout << "\n\n\n";
  for(int i=0; i<rows; i++){
    cout << "[";
    for(int j=0; j<columns; j++){
    cout << "    " << Data[i][j] ;
  }
  cout << "   ]\n\n";
}
  return;
}


void Matrix::printMatrixInfo(){
  cout <<"\n\nNumber of rows: " << rows;
  cout <<"\n\nNumber of columns: " << columns;
}
