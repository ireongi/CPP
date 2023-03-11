#include <iostream>
using namespace std;

int main(){

    double d = 9.7;
    double d2 = 2.91;

    const double* pd; /// const int* a -> (값 x) (가르키는 대상의 '주소' 변경 가능)
    double* const cd = &d; /// int* const a -> (주소 x) (가르키는 대상의 '값' 변경 가능)

    pd = &d;
    pd = &d2;
    // *pd = 3.13;  //error 값 변경 x pd가 가르키는 값(*pd)을 변경할 수 없음

    *cd = d2; /// &d의 값을 d2로 변경
    cout << d << endl; /// d2 값이 출력됨
    // cd = &d;  //error 주소 변경 x

    return 0;
}