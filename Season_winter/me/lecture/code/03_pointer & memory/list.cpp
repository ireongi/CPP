//
// Created by hui-ryung on 2022/12/21.
//
#include <iostream>
using namespace std;
// 배열과 포인터 함께 쓸 수 있음
// bool 1씩 증가, int 4씩 증가, double 8씩 증가

int main()
{
    // 5개의 int 자료형을 갖는 배열 선언
    int arr[5];
    int* parr = &arr[0]; //int* parr = arr; 동일함
    // 포인터 연산과 & 연산자로 주소 출력
    for(int i = 0; i < 5; i++)
    {
        cout << "포인터 연산을 사용한 주소: " << i;
        cout << arr + i << endl;
        cout << "& 연산자를 사용한 주소: " << i;
        cout << &arr[i] << endl;
        cout << "parr을 사용한 주소: " << i;
        cout << parr + i << endl << endl;
    }
    return 0;
}