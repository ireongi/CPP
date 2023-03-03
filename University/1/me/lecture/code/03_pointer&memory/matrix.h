//
// Created by hui-ryung on 2022/12/21.
//

#ifndef WINTER_C_MATRIX_H
#define WINTER_C_MATRIX_H

#endif //WINTER_C_MATRIX_H

#include <iostream>
#ifndef MATRIX_H
#define MATRIX_H
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
#include <ctime>
using namespace std;

// Matrix 클래스 정의
class Matrix
{
private:
    int rowSize;
    int colSize;
    int** ptr;
public:
    Matrix(int rowSize, int colSize);
    ~Matrix();
    void setup();
    void add(const Matrix& second, Matrix& result) const;
    void subtract(const Matrix& second, Matrix& result) const;
    void multiply(const Matrix& second, Matrix& result) const;
    void print() const;
};
#endif