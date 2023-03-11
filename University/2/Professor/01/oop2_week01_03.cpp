#include <iostream>
using namespace std;

class Circle
{
private:
    // mutable 사용시 const로 선언된 멤버함수안에서 필드의 값을 수정할 수 있다
    double radius;
public:
    //Circle();
    Circle(double r); // 매개변수 생성자를 만들면 기본 생성자도 만들어야 한다.
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);

    Circle();
};

//Circle::Circle() {
//    cout << this <<"객체 생성됨(기본 생성자)!\n";
//}
Circle::Circle(double r) {
    radius = r;
    cout << this << "객체 생성됨(매개변수 생성자)!\n";
}
double Circle::getRadius() const
{
    int a = 9;
    //radius = 5.0;  // const member function
    return radius;
}

double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}

double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}

void Circle::setRadius(double value)
{
    radius = value;
}

Circle::Circle() {

}

int main()
{
    cout << "Circle 3" << endl;
    Circle circle3(5.0);

    cout << "Circle 1" << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter();
    return 0;
}