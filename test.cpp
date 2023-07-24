#include <iostream>
#include "Vector.hpp"

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


  cout <<"\n\n\n";

}
