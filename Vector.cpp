#include "Vector.hpp"
#include <cassert>
#include "math.h"

using namespace std;

Vector::Vector(){
  dim = 0;
  Data = new double [0];
}


Vector::Vector(int size){
  dim = size;
  Data = new double [size];
}

Vector::Vector(int size, double* content){
  dim = size;
  Data = new double[size];
  for(int i=0; i<size; i++){
    Data[i] = content[i];
  }
}

double Vector::norm(){
  double norm = 0.0;
  for(int k=0; k<dim;k++){
    norm += pow(Data[k],2);
  }
  return sqrt(norm);
}

double Vector::get(int index){
  return Data[index];
}

Vector Vector::operator+(Vector const otherVector){
  assert(dim==otherVector.dim);
  Vector sum(dim);

  for (int i=0; i<dim; i++){
    sum.Data[i] = Data[i] + otherVector.Data[i];
  }
  return sum;
}

double Vector::operator[](int index){
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
