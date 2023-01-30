//#include <iostream>
//using namespace std;
//
//class Circle
//{
//private:
//    // mutable double radius;
//    double radius;
//public:
//    Circle() { ///기본 생성자
//        radius = 1.0;
//    }
//    //Circle(double radius) {
//    //    radius = radius;
//    //}
//    Circle(double radius); ///매개변수 생성자
//    Circle(const Circle& circle) {
//        cout << "복사생성자 실행\n";
//        //radius = circle.getRadius();
//        radius = circle.radius;
//    }
//
//
//    double getRadius() const {
//        return radius;  // inline member function
//    }
//    double getArea() const;
//    double getPerimeter() const;
//    void setRadius(double value);
//};
//
////double Circle::getRadius() const
////{
////    //radius = 9.0; // const 멤버함수는 멤버변수의 값을 변경할 수 없다.
////    //k = 8;
////    return radius;
////}
//inline double Circle::getArea() const
//{
//    const double PI = 3.14;
//    return (PI * radius * radius);
//}
//
//Circle::Circle(double radius) : radius(radius) {
//
//}
//double Circle::getPerimeter() const
//{
//    const double PI = 3.14;
//    return (2 * PI * radius);
//}
//void Circle::setRadius(double value)
//{
//    radius = value;
//}
//
//int main()
//{
//    // 레지스터 키워드를 써서 컴파일러에게 a변수를 메모리가 아닌 레지스터에 할당을 요구
//    // 결정은 컴파일러와 운영체제가 상황에 따라 결정
//    //register int a;
//    //a = 10;
//    //cout << a << "\n";
//
//    cout << "Circle 4" << endl;
//    Circle circle4(15.0); // parameter constructor
//
//    cout << "반지름: " << circle4.getRadius() << endl;
//    cout << "넓이: " << circle4.getArea() << endl;
//    cout << "둘레: " << circle4.getPerimeter() << endl << endl;
//
//    cout << "Circle 5" << endl;
//    Circle circle5(circle4); // copy constructor
//
//    cout << "반지름: " << circle5.getRadius() << endl;
//    cout << "넓이: " << circle5.getArea() << endl;
//    cout << "둘레: " << circle5.getPerimeter() << endl << endl;
//
//
//    cout << "Circle 3" << endl;
//    Circle circle3; // default constructor
//
//    //circle1.setRadius(10.0);
//    cout << "반지름: " << circle3.getRadius() << endl;
//    cout << "넓이: " << circle3.getArea() << endl;
//    cout << "둘레: " << circle3.getPerimeter() << endl << endl;
//
//
//    cout << "Circle 1" << endl;
//    Circle circle1;
//
//    circle1.setRadius(10.0);
//    cout << "반지름: " << circle1.getRadius() << endl;
//    cout << "넓이: " << circle1.getArea() << endl;
//    cout << "둘레: " << circle1.getPerimeter() << endl << endl;
//
//    cout << "Circle 2" << endl;
//    Circle circle2;
//    circle2.setRadius(20.0);
//    cout << "반지름: " << circle2.getRadius() << endl;
//    cout << "넓이: " << circle2.getArea() << endl;
//    cout << "둘레: " << circle2.getPerimeter();
//    return 0;
//}