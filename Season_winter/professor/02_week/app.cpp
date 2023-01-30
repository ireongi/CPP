#include "circle.h"
using namespace std;

void test() {
    cout << "테스트 함수\n";
    Circle c6;
    Circle c7(9.1);
}
int main()
{
    cout << "Circle 4" << endl;
    Circle circle4(15.0); // parameter constructor

    cout << "반지름: " << circle4.getRadius() << endl;
    cout << "넓이: " << circle4.getArea() << endl;
    cout << "둘레: " << circle4.getPerimeter() << endl << endl;

    cout << "Circle 5" << endl;
    Circle circle5(circle4); // copy constructor

    cout << "반지름: " << circle5.getRadius() << endl;
    cout << "넓이: " << circle5.getArea() << endl;
    cout << "둘레: " << circle5.getPerimeter() << endl << endl;


    cout << "Circle 3" << endl;
    Circle circle3; // default constructor

    cout << "반지름: " << circle3.getRadius() << endl;
    cout << "넓이: " << circle3.getArea() << endl;
    cout << "둘레: " << circle3.getPerimeter() << endl << endl;

    test();

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
    cout << "둘레: " << circle2.getPerimeter() << endl;
    return 0;
}