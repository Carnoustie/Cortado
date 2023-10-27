#include <iostream>
// #include "Vector.hpp"
#include "Matrix.hpp"
#include "math.h"

using namespace std;

int main(int argc, char* argv[]){

  cout << "\n\n\n" << "testing of Matrix and Vector Modules\n\n\n";
  Matrix A(2,3);
  Matrix B(2,3);

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
  cout << "\n\n\nTranspose of A:\n\n\n";
  At.print();
  matrixProduct.print();
  matrix_vector_product.print();

  // C.print();

  cout <<"\n\n\n";

}
