#pragma once
#include <iostream>
#include <string>
using namespace std;

// Person 클래스의 정의
class Person
{
//protected:
private:
    string name;
public:
    Person(string nme);
    ~Person();
    void print() const;
    string getName() const {
        return name;
    }
};