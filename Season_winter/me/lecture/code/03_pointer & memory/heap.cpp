//
// Created by hui-ryung on 2022/12/21.
//
#include <iostream>
using namespace std;
//힙 메모리 동적할당(런타임시 값 제시) 및 해제
int main()
{
    int size;
    int* parr = nullptr;

    cout << "몇 분이세요?";
    cin >> size;
    parr = new int[size]; // 힙 메모리 동적할당(메인에 없음) //!!중요

    for(int i=0; i<size; i++){
        cout << "나이는? ";
        cin >> *(parr + i); //parr[i]에 cin으로 값을 받음 cin >> parr[i]로 써도 됨
    }

    for(int i=0; i<size; i++){
        cout << *(parr + i);
    }
    delete[] parr; //!!중요 꼭 딜리트 해줘야함
    parr = nullptr; // 해제 free heap memory

    return 0;
}