//#include <iostream>
//using namespace std;
//
//class Complex {
//	friend Complex operator+(const Complex& l, const Complex& r);
//private:
//	int real;			// 실수부
//	int imaginary;  // 허수부
//public:
//	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
//
//	}
//	void setReal(int real) {
//		this->real = real;
//	}
//	int getReal() const {
//		return real;
//	}
//	void setImaginary(int imaginary) {
//		this->imaginary = imaginary;
//	}
//	int getImaginary() const {
//		return imaginary;
//	}
//	// 일반함수 사용을 위해 멤버함수 삭제 operator+
//	Complex operator++() {    // 전위 연산
//		this->real++;
//		return *this;
//	}
//	Complex operator++(int) { // 후위 연산
//		Complex pre(this->real, this->imaginary);
//		this->real++;
//		return pre;
//	}
//};
//
//Complex operator+(const Complex& left, const Complex& right) {
//	//int r = left.getReal() + right.getReal();
//	//int i = left.getImaginary() + right.getImaginary();
//	int r = left.real + right.real;
//	int i = left.imaginary + right.imaginary;
//	return Complex(r, i);
//}
//int main() {
//	Complex c1(9, 7);
//	Complex c2(1, 15);
//	Complex c3(0, 0);
//
//	// c3 = c1 + c2;
//	c3 = operator+(c1, c2);
//	// c3 = c1.operator+(c2); // 복소수 클래스 안에 + 연산기호에 대한 오버로드가 없어서 오류 발생
//	cout << c3.getReal() << "+" << c3.getImaginary() << "i\n";
//
//
//	return 0;
//}
//
////#include <iostream>
////using namespace std;
////
////class Complex {
////private:
////	int real;			// 실수부
////	int imaginary;  // 허수부
////public:
////	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
////
////	}
////	void setReal(int real) {
////		this->real = real;
////	}
////	int getReal() const {
////		return real;
////	}
////	void setImaginary(int imaginary) {
////		this->imaginary = imaginary;
////	}
////	int getImaginary() const {
////		return imaginary;
////	}
////
////	Complex operator+(const Complex& right) {
////		int r = this->real + right.real;
////		int i = this->imaginary + right.imaginary;
////		return Complex(r, i);
////	}
////	Complex operator++() {    // 전위 연산
////		this->real++;
////		return *this;
////	}
////	Complex operator++(int) { // 후위 연산
////		Complex pre(this->real, this->imaginary);
////		this->real++;
////		return pre;
////	}
////};
////int main() {
////	Complex c1(9, 7);
////	Complex c2(1, 15);
////	Complex c3(0, 0);
////
////	//c3 = ++c2;
////	c3 = c2++;
////	cout << c3.getReal() << "+" << c3.getImaginary() << "i\n";
////	cout << c2.getReal() << "+" << c2.getImaginary() << "i\n";
////
////	return 0;
////}