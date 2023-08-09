#include "Vector.hpp"
#include <cassert>
#include "math.h"

using namespace std;

// Constructor1
Vector::Vector(){
  size = 0;
  Data = new double [0];
}

// Constructor2
Vector::Vector(int numElems){
  size = numElems;
  Data = new double[size];
}

// Constructor3
Vector::Vector(int numElems, double* content){
  size = size;
  Data = new double[size];
  for(int i=0; i<size; i++){
    Data[i] = content[i];
  }
}



// Overloading the addition-operator
Vector Vector::operator+(Vector const otherVector){
  assert(size==otherVector.size);
  Vector sum(size);

  for (int i=0; i<size; i++){
    sum.Data[i] = Data[i] + otherVector.Data[i];
  }
  return sum;
}


// Overloading the square-bracket operator that enables access and assignment of new elements
double &Vector::operator[](int index) const{
  return Data[index];
}

// Overloading the round-bracket operator that enables access and assignment of new elements
double &Vector::operator()(int index) const{
  return Data[index];
}

// Overloading the multiplicative operator to inner-product
double Vector::operator*(Vector const otherVector){
  assert(otherVector.size == size);
  double scalar = 0;
  for(int k=0; k<size;k++){
    scalar+=Data[k]*otherVector.Data[k];
  }
  return scalar;
}


// L2 norm
double Vector::norm(){
  double norm = 0.0;
  for(int k=0; k<size;k++){
    norm += pow(Data[k],2);
  }
  return sqrt(norm);
}


// Another element-access function
double Vector::get(int index){
  return Data[index];
}


void Vector::print(){
  cout << "[ " << Data[0];
  for(int i=1; i<size; i++){
    cout << " , " << Data[i];
  }
  cout << " ]\n\n\n";
  return;
}
