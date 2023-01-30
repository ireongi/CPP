/// 연산자 오버로딩
#include <iostream> ///input stream, out stream 약자
#include <string>
using namespace std;

class Complex{
    friend Complex operator+(const Complex& i, const Complex& r); /// private 캡슐화된 변수도 외부에서 접근가능하게 해줌

private:
    int real;      /// 실수부
    int imaginary; /// 허수부
public:
    Complex(int real, int imaginary) : real(real), imaginary(imaginary){
    }
    int getReal() const{
        return real;
    }
    int getImaginary() const{
        return imaginary;
    }
    int setReal(int real) { ///값을 바꾸는 용도라 const있으면 안됨
        this -> real = real;
    }
    int setImaginary(int imaginary) {
        this -> imaginary = imaginary;
    }

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

/// Complex 클래스와 상관 x,
//Complex operator+(const Complex& left, const Complex& right){ /// left(c1), right(c2)
//    int r = left.getReal() + right.getReal();
//    int i = left.getImaginary() + right.getImaginary();
//    return Complex(r, i);
//} /// 이 방법이 좋은것

Complex operator+(const Complex& left, const Complex& right){
    int r = left.real + right.real;            ///Complex 클래스 밖, 직접접근 불가 but friend 키워드로 접근 가능
    int i = left.imaginary + right.imaginary;
    return Complex(r, i);
}

ostream&operator<<(ostream& o, const Complex& right){ ///o:outstream_cout, right:오른쪽 매개변수 ///java의 toString 오버로딩 개념
    o << right.getReal() << showpos << right.getImaginary() << "i" << noshowpos << "\n";
    /// showpos : positive 양수일때 + 표기, "+"과 같음
    /// noshowpos : +를 안보이게 해라
    return o;
}

int main(){
    Complex c1(9, 7);
    Complex c2(1, 15);
    Complex c3(0, 0);


    c3 = operator+(c1,c2);

    cout << c3.getReal() << "+" << c3.getImaginary() << "i\n";
    cout << c1.getReal() << "+" << c1.getImaginary() << "i\n";

    /// 편하게 출력하고 싶음, <<도 오버로딩 해버리자
    /// 왼쪽 : 출력 스트림 객체, 오른쪽 : 피연산자 외
    cout << c3;
    cout << c1;

    return 0;
}