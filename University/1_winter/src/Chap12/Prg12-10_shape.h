/**************************************************************
 * Shape 클래스의 인터페이스 파일                             *
 **************************************************************/
#pragma once

#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

// 클래스 정의
class Shape
{
  protected:
    virtual bool isValid() const = 0; 
  public: 
    virtual void print() const = 0 ;
    virtual double getArea() const = 0 ;
    virtual double getPerimeter() const = 0;  
};
