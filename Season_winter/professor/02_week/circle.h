#pragma once;
#define CIRCLE_H
#include <iostream>
using namespace std;
class Circle
{
private:
    // mutable double radius;
    double radius;
public:
    Circle(); ///기본 생성자
    Circle(double radius); ///매개변수 생성자
    Circle(const Circle& circle); ///복사 생성자
    ~Circle(); ///소멸자

    void setRadius(double value);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
};
