//
//  week02_01 소멸자 외.cpp
//  winter
//
//  Created by hui-ryung on 2022/12/20.
//

#include "../week02_01 소멸자 외.hpp"

#include <iostream>
using namespace std;

class Circle
{
private:
    // mutable double radius;
    double radius;
public:
    Circle() {
        radius = 1.0;
    }
    //Circle(double radius) {
    //    radius = radius;
    //}
    Circle(double radius);
    Circle(const Circle& circle) {
        cout << "∫πªÁª˝º∫¿⁄ Ω««‡\n";
        //radius = circle.getRadius();
        radius = circle.radius;
    }


    double getRadius() const {
        return radius;  // inline member function
    }
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
};


//double Circle::getRadius() const
//{
//    //radius = 9.0; // const ∏‚πˆ«‘ºˆ¥¬ ∏‚πˆ∫Øºˆ¿« ∞™¿ª ∫Ø∞Ê«“ ºˆ æ¯¥Ÿ.
//    //k = 8;
//    return radius;
//}
inline double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}

Circle::Circle(double radius) : radius(radius) {

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

int main()
{
    // ∑π¡ˆΩ∫≈Õ ≈∞øˆµÂ∏¶ Ω·º≠ ƒƒ∆ƒ¿œ∑Øø°∞‘ a∫Øºˆ∏¶ ∏ﬁ∏∏Æ∞° æ∆¥— ∑π¡ˆΩ∫≈Õø° «“¥Á¿ª ø‰±∏
    // ∞·¡§¿∫ ƒƒ∆ƒ¿œ∑ØøÕ øÓøµ√º¡¶∞° ªÛ»≤ø° µ˚∂Û ∞·¡§
    //register int a;
    //a = 10;
    //cout << a << "\n";

    cout << "Circle 4" << endl;
    Circle circle4(15.0); // parameter constructor

    cout << "π›¡ˆ∏ß: " << circle4.getRadius() << endl;
    cout << "≥–¿Ã: " << circle4.getArea() << endl;
    cout << "µ—∑π: " << circle4.getPerimeter() << endl << endl;

    cout << "Circle 5" << endl;
    Circle circle5(circle4); // copy constructor

    cout << "π›¡ˆ∏ß: " << circle5.getRadius() << endl;
    cout << "≥–¿Ã: " << circle5.getArea() << endl;
    cout << "µ—∑π: " << circle5.getPerimeter() << endl << endl;


    cout << "Circle 3" << endl;
    Circle circle3; // default constructor

    //circle1.setRadius(10.0);
    cout << "π›¡ˆ∏ß: " << circle3.getRadius() << endl;
    cout << "≥–¿Ã: " << circle3.getArea() << endl;
    cout << "µ—∑π: " << circle3.getPerimeter() << endl << endl;


    cout << "Circle 1" << endl;
    Circle circle1;

    circle1.setRadius(10.0);
    cout << "π›¡ˆ∏ß: " << circle1.getRadius() << endl;
    cout << "≥–¿Ã: " << circle1.getArea() << endl;
    cout << "µ—∑π: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "π›¡ˆ∏ß: " << circle2.getRadius() << endl;
    cout << "≥–¿Ã: " << circle2.getArea() << endl;
    cout << "µ—∑π: " << circle2.getPerimeter();
    return 0;
}
