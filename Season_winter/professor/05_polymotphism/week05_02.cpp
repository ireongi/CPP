#include <iostream>
using namespace std;
class Shape {
public:
    double getArea() const {
        cout << this << "\n";
        return 0.0;
    }
    virtual ~Shape() {
        cout << "Shape 소멸자 동작\n";
    }
};
class Circle : public Shape
{
private:
    double radius;
public:
    Circle() {

    }
    Circle(double radius) {
        //cout << this << " 매개변수생성자로 생성\n";
        this->radius = radius;
    }
    double getArea() const {
        //cout << this << "\n";
        const double PI = 3.14;
        return (PI * radius * radius);
    }
    ~Circle() {
        cout << "Circle 소멸자 동작\n";
    }

};
class Rectangle : public Shape
{
private:
    double length;
    double height;
public:
    Rectangle(double length, double height) : length(length), height(height) {

    }
    ~Rectangle() {
        cout << "Rectangle 소멸자 동작\n";
    }

    double getArea() const {
        return length * height;
    }
};
//int main() {
//    Shape* shapePtr[3];
//    shapePtr[0] = new Rectangle(5.0, 2.0);
//    shapePtr[1] = new Circle(10.0);
//    shapePtr[2] = new Rectangle(11.0, 3.0);
//
//    for (int i = 0; i < 3; i++)
//        cout << shapePtr[i]->getArea() << '\n'; /// 전부 출력
//    for (int i = 0; i < 3; i++) {  /// 전부 소멸
//        delete shapePtr[i];
//        shapePtr[i] = nullptr; /// 포인터도 소멸
//    }
//    return 0;
//}


int main() {
    Shape* sPtr = nullptr;
    sPtr = new Shape();
    cout <<  sPtr->getArea() << '\n';
    delete sPtr;

    sPtr = new Rectangle(2.0, 5.0);
    cout << sPtr->getArea() << '\n';
    delete sPtr;

    sPtr = new Circle(10.0); // 부모클래스의 포인터가 자식클래스 객체의 주소를 받을 수 있다
    cout << sPtr->getArea() << '\n';
    delete sPtr;

    Circle* c1 = new Circle(5.0); // heap memory에 객체 생성, c1은 포인터 변수
   // cout << c1->getArea();
    Circle c2;  // stack memory에 객체 생성, c2는 객체
    delete c1;

    return 0;
}