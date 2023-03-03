/*************************************************************
 * 객체 지향 프로그래밍에서 클래스를 사용하는 프로그램       *
 *************************************************************/
#include <iostream>
using namespace std;

/************************************************************
 * 클래스 정의                                              *
 * 데이터 멤버와 멤버 함수를 선언                           *
 ************************************************************/
class Circle
{
  private: //클래스 안에서만 접근(기재 안 할 경우 기본값이 private지만 가독성, 명확성을 위해 굳이 기재)
    double radius;               // 예외처리 - 앞에 mutable 붙이면 const 메서드에 있는 값도 변경 가능, 특수한 경우만 사용                                           
  public: //클래스 밖에서도 접근
    Circle(){
      radius = 1.0; //default constructor 기본
    }
    Circle::Circle(double radius) : radius(radius){} //가독성 높이면서 멤버변수 매개변수 구분 가능 <- 이 형식도 쓸줄 알아야함
    // Circle(double radius){
    //   radius = radius; //parameter constructor 매개변수
    // }
    Circle(const Circle& circle){
      cout << "복사생성자 실행\n";
      //radius = circle.getRadius();
      radius = circle.radius; //같은 클래스 안, get메서드 안 불러와도 됨
    }
    //Circle circle5(circle4); // copy constructor 복사, circle4 만든적 없어도 컴파일러가 만들어줌, 다른 객체를 이용하기 위해 만듦

    double getRadius() const;
    double getArea() const;               
    double getPerimeter() const;  
    void setRadius(double value);
};
/**************************************************************
 * 멤버 함수 정의 부분                                        *
 * 멤버 함수들은 클래스 선언 부분에서 선언                    *
 **************************************************************/
// getRadius 멤버 함수의 정의
double Circle::getRadius() const
{
  // radius=9.0; 불가
  return radius; // inline member function; //call이 아닌 옆에서 호출시킴 //but 컴파일러가 애초에 밖으로 꺼냄 so low레벨에서 많이 씀
}
// getArea 멤버 함수의 정의
double Circle::getArea() const
{
  const double PI  = 3.14; 
  return (PI * radius * radius);
}
// getPerimeter 멤버 함수의 정의
double Circle::getPerimeter() const
{
  const double PI = 3.14; 
  return (2 * PI * radius);
}
// setRadius 멤버 함수의 정의
void Circle::setRadius(double value)
{
  radius = value;
}
/********************************************************
 * 애플리케이션 부분                                    *
 * 클래스를 인스턴스화해서 객체를 만들고 활용           *
*********************************************************/
int main()
{
  // 레지스터 키워드를 써서 컴파일러에게 a변수를 메모리가 아닌 레지스터에 할당을 요구
  // 결정은 컴파일러와 운영체제가 상황에 따라 결정
  //register int a;
  //a = 0;
  //cout << a << "\n";

  // 첫 번째 circle 객체를 만들고 멤버 함수 호출
  cout << "Circle 1" << endl;
  Circle circle1;    //태어나고
  circle1.setRadius(10.0);  //나중에 반지름 값
  cout << "반지름: " << circle1.getRadius() << endl; 
  cout << "넓이: " << circle1.getArea() << endl; 
  cout << "둘레: " << circle1.getPerimeter() << endl << endl;
  // 두 번째 circle 객체를 만들고 멤버 함수 호출  
  cout << "Circle 2" << endl;
  Circle circle2;  
  circle2.setRadius(20.0); 
  cout << "반지름: " << circle2.getRadius() << endl; 
  cout << "넓이: " <<  circle2.getArea() << endl;
  cout << "둘레: " << circle2.getPerimeter(); 
  return 0;
}