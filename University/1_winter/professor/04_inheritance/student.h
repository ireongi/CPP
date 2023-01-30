#pragma once
#include "person.h"

// Student 클래스의 정의
class Student : public Person
{
private:
    double gpa;
public:
    Student(string name, double gpa);
    ~Student();
    void print() const;
};