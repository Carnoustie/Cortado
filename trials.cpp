#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <typeinfo>

using namespace std;

int main(int argc, char const * argv[]){
  int x = 10;

  // type_info ti = ;

  cout << "\n\n\nType of x:\n\n\n" << typeid(x).name()<< "\n\n\n";


  return 0;
}
