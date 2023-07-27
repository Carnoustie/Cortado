#include "Vector.hpp"
#include <cassert>
#include "math.h"

using namespace std;

// Constructor1
Vector::Vector(){
  dim = 0;
  Data = new double [0];
}

// Constructor2
Vector::Vector(int size){
  dim = size;
  Data = new double [size];
}

// Constructor3
Vector::Vector(int size, double* content){
  dim = size;
  Data = new double[size];
  for(int i=0; i<size; i++){
    Data[i] = content[i];
  }
}



// Overloading the addition-operator
Vector Vector::operator+(Vector const otherVector){
  assert(dim==otherVector.dim);
  Vector sum(dim);

  for (int i=0; i<dim; i++){
    sum.Data[i] = Data[i] + otherVector.Data[i];
  }
  return sum;
}


// Overloading the square-bracket operator that enables access and assignment of new elements
double &Vector::operator[](int index){
  return Data[index];
}

// Overloading the multiplicative operator to inner-product
double Vector::operator*(Vector const otherVector){
  assert(otherVector.dim == dim);
  double scalar = 0;
  for(int k=0; k<dim;k++){
    scalar+=Data[k]*otherVector.Data[k];
  }
  return scalar;
}


// L2 norm
double Vector::norm(){
  double norm = 0.0;
  for(int k=0; k<dim;k++){
    norm += pow(Data[k],2);
  }
  return sqrt(norm);
}


// Another element-access function
double Vector::get(int index){
  return Data[index];
}


void Vector::print(){
  cout << "[" <<Data[0];
  for(int i=1; i<dim; i++){
    cout << "," << Data[i] ;
  }
  cout << "]";

  return;
}
