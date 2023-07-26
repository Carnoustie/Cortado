using namespace std;

class Matrix{

public:
  Matrix(int rows, int columns);
  int size[2];
  int rows;
  int columns;
  Matrix operator+(Matrix const otherMatrix);

private:
  double** Data;
};
