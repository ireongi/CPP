#include <iostream>
using namespace std;

class Complex {
private:
	int real;			// 실수부
	int imaginary;  // 허수부
public:
	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {

	}
	void setReal(int real)  {
		this->real = real;
	}
	int getReal() const {
		return real;
	}
	void setImaginary(int imaginary) {
		this->imaginary = imaginary;
	}
	int getImaginary() const {
		return imaginary;
	}

	Complex operator+(const Complex& right) {
		int r = this->real + right.real;
		int i = this->imaginary + right.imaginary;
		return Complex(r,  i);
	}
};
int main() {
	Complex c1(9, 7);
	Complex c2(1, 15);
	Complex c3(0, 0);

	//c3 = c1 + c2;  // 연산자 오버로딩인 끝난 후 사용 가능
	c3 = c1.operator+(c2);
	cout << c3.getReal() << "+" << c3.getImaginary() << "i\n";
	// c3 = c1 + c2;  // + 연산 기호에 대한 오버로드가 필요함.
	//cout << c1.getImaginary() << '\n';

	return 0;
}