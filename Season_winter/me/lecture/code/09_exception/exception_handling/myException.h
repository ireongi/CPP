/// 예외 만들기

#include <iostream>
#include <string>
using namespace std;
#pragma once


class MyException{
public:
    string description; /// 경고문구
    int codeInfo; /// 코드번호

    MyException(int codeInfo, string description) : codeInfo(codeInfo), description(description){

    }

};

class OutofRangeException : public MyException{
public:
    OutofRangeException(int index) : MyException(index, "인덱스 범위를 벗어났습니다\n"){

    }
};

class MemoryException : public MyException{
public:
    MemoryException(int bytes) : MyException(bytes, "메모리 오류 발생\n"){

    }
};
