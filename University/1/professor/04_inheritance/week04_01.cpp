#include <iostream>

class Animal {
private:
	int a;
protected:
	int b;
public:
	int c;
};
class Mammal : private Animal {
public:
	void test() {
		std::cout << a << "\n";
		b = 9;
		std::cout << b << "\n";
		std::cout << c << "\n";
	}
};
class Horse : public Mammal {
public:
	void test() {
		std::cout << a << "\n";
		b = -99;
		std::cout << b << "\n";
		std::cout << c << "\n";
	}
};
int main() {
	Animal a1;
	Mammal m1;
	Horse h1;

	//m1.c = 100;
	//m1.test();

	//a1.a = 1;
	//a1.b = 2;
	//a1.c = 3;

	return 0;
}