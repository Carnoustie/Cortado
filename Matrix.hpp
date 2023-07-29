using namespace std;

class Matrix{

public:
  Matrix(int rows, int columns);
  int size[2];
  int rows;
  int columns;
  Matrix operator+(Matrix const otherMatrix);
  Matrix operator*(Matrix const otherMatrix);
  // Matrix &operator=(int row, int column);
  double &operator()(int row, int column);
     // row);
  // double &operator[](int column);

private:
  double** Data;
};
