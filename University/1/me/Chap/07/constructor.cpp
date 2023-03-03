/// 생성자 종류
#include <iostream>
using namespace std;

class Coffee{
private:
    double coffeeBean;
public:
    Coffee(double coffeeBean);        /// 매개변수 생성자
    Coffee();                         /// 기본 생성자
    ~Coffee();                        /// 소멸자
    Coffee(const Coffee& coffee);     /// 복사 생성자(매개변수 생성자의 값을 복사함)

    void setCoffee(double coffeeBean); ///설정자
    double getCoffee() const;          ///접근자
    double getPrice() const;
    double getTemperature() const;
};

Coffee::Coffee(double cfb)
: coffeeBean(cfb){
    cout << "매개변수 생성자 호출\n";
}
Coffee::Coffee()
: coffeeBean(0.0){
    cout << "기본 생성자 호출\n";
}
Coffee::Coffee(const Coffee &coffee)
: coffeeBean(coffee.coffeeBean){
    cout << "복사 생성자 호출\n";
}
Coffee::~Coffee(){
    cout << "소멸자 호출" << coffeeBean << endl;
}

void Coffee::setCoffee(double value){
    coffeeBean = value;
}
double Coffee::getCoffee() const {
    return coffeeBean;
}
double Coffee::getPrice() const {
    const double CUP = 4500.00;
    return(CUP * coffeeBean);
}
double Coffee::getTemperature() const {
    const double NOW = 55.0;
    return NOW;
}

int main(){
    Coffee coffee1(5.0);
    cout << "커피 값은 " << coffee1.getPrice() << endl;
    cout << "커피 온도는 " << coffee1.getTemperature() << endl;
    cout << "커피는 " << coffee1.getCoffee() << endl << endl;

    Coffee coffee2(coffee1);
    cout << "커피 값은 " << coffee2.getPrice() << endl;
    cout << "커피 온도는 " << coffee2.getTemperature() << endl;
    cout << "커피는 " << coffee2.getCoffee() << endl << endl;

    Coffee coffee3;
    cout << "커피 값은 " << coffee3.getPrice() << endl;
    cout << "커피 온도는 " << coffee3.getTemperature() << endl;
    cout << "커피는 " << coffee3.getCoffee() << endl << endl;

}
