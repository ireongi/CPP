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
    ///피연산자 2개
    Complex operator+(const Complex& right){
        int r = this -> real + right.real;  /// this: 주체_c1, right: 주체에 더해질 매개변수_c2
        int i = this -> imaginary + right.imaginary;

        return Complex(r, i); /// 복소수 개체 생성
    }
    ///피연산자 1개
    Complex operator++(){ /// 전위 연산(전체 연산)_인수x
        this -> real++;
        return *this; ///this가 가르키는 객체를 리턴해야하므로 * 붙여야함
    }
    Complex operator++(int){ /// 후위 연산_인수o (매개값 받은것 x, 전/후위 구분용으로 쓴 것)
        Complex pre(this->real, this->imaginary); /// 실수, 허수 받음
        this->real++; /// 실수만 플러스
        return pre;
    }
};

/// 06_02와 달리 피연산자 1개로 빼고 더하는 : --, ++
/// ++a : 더하고 출력_전위연산, a++ : 출력 후 더함_후위연산
int main(){
    Complex c1(9, 7);
    Complex c2(1, 15);
    Complex c3(0, 0);

    //c3 = ++c2;
    c3 = c2++;
    cout << c3.getReal() << "+" << c3.getImaginary() << "i\n"; /// 후위연산_++안된값 출력
    cout << c2.getReal() << "+" << c2.getImaginary() << "i\n"; /// 후위연산 완료 후 ++된 값 출력

//    int a = 1;
//    cout << a++ << "\n";
//    cout << a << "\n";


    return 0;
}