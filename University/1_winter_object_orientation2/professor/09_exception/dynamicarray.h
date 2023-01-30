#include <iostream>
#include "myexception.h"
using namespace std;
#pragma once
class DynamicArray {
protected:
    int* arr;  // 동적할당된 힙메모리 번지 저장용
    int size;  // 배열의 길이

public:
    DynamicArray(int arraySize);
    virtual ~DynamicArray();

    void setAt(int index, int value);
    //bool setAt(int index, int value);
    int getAt(int index) const;
    int getSize() const;
};