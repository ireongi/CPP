#include "circle.h"
//Circle::Circle() {
//    cout << "기본생성자로 생성\n";
//    radius = 1.0;
//}
Circle::Circle()
: radius(1.0) {
    cout << "기본생성자로 생성\n";
}
//Circle::Circle(double radius) {
//    this->radius = radius;
//    //(*this).radius = radius;
//    cout << this << " 매개변수생성자로 생성\n";
//}
Circle::Circle(double radius)
: radius(radius) {
    cout << this << " 매개변수생성자로 생성\n";
}
//Circle::Circle(const Circle& circle) {
//    cout << "복사생성자로 생성\n";
//    //radius = circle.getRadius();
//    radius = circle.radius;
//}
Circle::Circle(const Circle& circle)
: radius(circle.radius) {
    cout << "복사생성자로 생성\n";
}
Circle::~Circle() {
    cout << this << " / " << radius << " RIP!\n";
}

double Circle::getRadius() const
{
    //radius = 9.0; // const 멤버함수는 멤버변수의 값을 변경할 수 없다.
    //k = 8;
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