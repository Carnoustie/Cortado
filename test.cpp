#include <iostream>
// #include "Vector.hpp"
#include "Matrix.hpp"
#include "math.h"

using namespace std;

int main(int argc, char* argv[]){
  double k[4] = {1,3,2,4};
  cout << "\n\n\n" << "testing of Matrix and Vector Modules\n\n\n";
  Matrix A(2,3);
  Matrix B(2,3);
  Matrix D(3,3);

  D(0,0) = 3.44;  D(0,1) = 6.88;  D(0,2) = 15.48;  D(1,0) = 17.2;  D(1,1) = 3.44;  D(1,2) = 4.644;  D(2,0) = -172.0;  D(2,1) = 49.88;  D(2,2) = 5.332;

  Vector v(3);
  v(0) = 1.1;
  v(1) = 2.1;
  v(2) = 3.1;






  for(int i=0; i<A.rows; i++){
    for(int j=0;j<A.columns; j++){
      A(i,j) = exp(i+j);
    }
  }



  for(int i=0; i<A.rows; i++){
    for(int j=0;j<A.columns; j++){
      B(i,j) = exp(i+j+2);
    }
  }

  Matrix C = B-A;

  Vector matrix_vector_product = A*v;


  Matrix At = A.transpose();
  Matrix matrixProduct = A*At;

  cout << "\n\n\nA:\n\n\n";
  A.print();
  Matrix copy = A;
  cout << "\n\n\nA:\n\n\n";

  // cout << "\n\n\nD:\n\n\n";
  // D.print();


  cout << "\n\n\nTranspose of A:\n\n\n";
  At.print();
  matrixProduct.print();
  matrix_vector_product.print();

  double det = D.determinant();
  cout << "\n\n\n Test determinant: " << det << "  for the following matrix:\n";



  int n = D.columns;

  Matrix L(n,n);
  Matrix U(n,n);
  cout << "\n\n\n\n\n\nD before: ";
  D.print();
  D.LU_Decomposition(&L,&U,n);

  Matrix P = L*U;
  cout << "\n\n\n\n\n\nP: ";
  P.print();

  cout << "\n\n\n\n\n\nD after: ";
  D.print();

  cout << "\n\n\n\n\n\nL after: ";
  L.print();

  cout << "\n\n\n\n\n\nU after: ";
  U.print();


  Vector solution = D.solve(v);
  cout << "\n\n\nSolution:";
  solution.print();

  // cout << "\n\n\n";
  // L.print();
  // cout << "\n\n\n";
  // U.print();

  // D.solve(v);

}
