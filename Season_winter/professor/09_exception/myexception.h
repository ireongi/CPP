#include <string>
using namespace std;
#pragma once

class MyException {
public:
    string description;
    int codeInfo;

    MyException(int codeInfo, string description) : codeInfo(codeInfo), description(description) {

    }
};

class OutOfRangeException : public MyException {
public :
    OutOfRangeException(int index) : MyException(index, "인덱스 범위를 벗어났습니다\n") {

    };
};
class MemoryException : public MyException {
public:
    MemoryException(int bytes) : MyException(bytes, "메모리 오류 발생\n") {

    };
};