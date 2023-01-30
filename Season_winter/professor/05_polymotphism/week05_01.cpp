#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
	virtual void print() const { cout << "베이스 클래스" << endl; }
};

class Derived : public Base
{
public:
	virtual void print() const { cout << "파생 클래스" << endl; }
};
int main()
{
	// 베이스 클래스에 대한 포인터(소켓) 생성
	Base* ptr;
	// ptr 포인터로 베이스 클래스의 객체 가리키기
	ptr = new Base();
	ptr->print();
	delete ptr;
	// ptr 포인터로 파생 클래스의 객체 가리키기
	ptr = new Derived();
	ptr->print();
	delete ptr;
	return 0;
}