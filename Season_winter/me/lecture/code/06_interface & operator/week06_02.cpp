/// 연산자 오버로딩
#include <iostream>
#include <string>
using namespace std;

class Complex{
    ///fields
private:
    int real;      /// 실수부
    int imaginary; /// 허수부
    ///constructors
public: ///매개변수 생성자 초기화(this 키워드 써도 상관 ㄴ)
    Complex(int real, int imaginary) : real(real), imaginary(imaginary){
    }
    ///getter
    int getReal() const{
        return real;
    }
    int getImaginary() const{
        return imaginary;
    }
    ///setter
    int setReal(int real) { ///값을 바꾸는 용도라 const있으면 안됨
        this -> real = real;
    }
    int setImaginary(int imaginary) {
        this -> imaginary = imaginary;
    }

    /// 연산자 오버로드 : operator 씀, 매개변수에 const 붙여 read only로 사용
    Complex operator+(const Complex& right){
        int r = this -> real + right.real;  /// this: 주체_c1, right: 주체에 더해질 오른쪽 값_c2
        int i = this -> imaginary + right.imaginary;

        return Complex(r, i); /// 복소수 개체 생성
    }
};


int main()
{
    Complex c1(9, 7); /// 실수부 9 , 허수부 7인 복소수 개체 생성
    cout << c1.getImaginary() << "\n"; /// 허수부만 출력

    Complex c2(1, 15);
    Complex c3(0, 0);

//    c3 = c1 + c2; /// error + 연산기호에 대한 오버로드가 필요함, c언어는 오버로딩을 해줘야 연산자 사용 가능(java는 int타입이 + 좌우에 오면 자동인식
//    c3 = c1 + c2; /// 연산자 오버로딩 끝난 후 사용가능
    c3 = c1.operator+(c2); /// 'this_주체_c1' operator+ 'right_c2'
    cout << c3.getReal() << "+" << c3.getImaginary() << "i\n";

    return 0;
}