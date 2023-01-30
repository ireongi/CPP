//
// Created by hui-ryung on 2022/12/21.
//const 위치에 따라 대상변경 불가 or 값 변경 불가
#include <iostream>
using namespace std;

//int main()
//{
//    const int a = 1;
//    int b=2;
//    const int* pa = &a;
//    //*pa = 3; //실행불가
//    pa = &b; //가르키는 대상 자체는 변경불가, 가르키는 대상의 값은 변경 가능 ex)사람 사상 개조 ok but 그 사람이 다른 사람이 될순없음
//
//    cout << *pa << "/" << a << "/" << b << endl; //값
//    cout << pa << "/" << &a << "/" << &b << endl;  //주소
//
//    return 0;
//}

// void 포인터
int main()
{
    int i = 1;
    double d = 2.7;
    float f = 3.9f;

    void*pi = &i;
    cout << (int*)pi << endl; // 16진수
    cout << *(int*)pi << endl; // 10진수(간접참조연산자 활용)    <-d 쓸 경우 double, f 쓸 경우 float 명시
    // ieee 754 bit 규격 검색할수있음

    // cout << *pi << endl; // 에러, 할당 받을때는 타입 상관없지만, 쓰는 시점에 명시해줘야함

    return 0;
}