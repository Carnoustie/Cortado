#include <iostream>
#include "Vector.hpp"
#include "Matrix.hpp"

using namespace std;

int main(int argc, char* argv[]){
  cout << "\n\n\nTesting Class Vector\n\n";

  double testContent[2] = {3.0 , 4.0};

  Vector testVector1();
  Vector testVector2(2);
  Vector testVector3(2,testContent);

  Vector testSum = testVector3+testVector3;

  cout << "\n\nNorm of the test Vector(Should be five):\n\n" << testVector3.norm();

  cout << "\n\nTest addition operator:\n\n";
  cout << "[";
  for(int k=0; k<2; k++){
    cout << " " << testSum.get(k);
  }
  cout << " ]";

  cout << "\n\n\n\n";
  testSum.print();


  cout << "\n\n\n\n\n";

  double row1[3] = {2.2 , 3.3, 4.4};
  double row2[3] = {9.9 , 6.6, 5.5};

  Matrix testMatrix1(2,3);

  cout << "Element access:   " << testVector3[1];
  cout <<"\n\n\n";

}
