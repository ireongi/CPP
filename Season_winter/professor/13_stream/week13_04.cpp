#include <iostream>
#include <numbers>
#include <string>
using namespace std;

template<typename T>
class Base {
protected:
    T m_base;
public:
    Base() {
        cout << "부모클래스 기본생성자\n";
    };
    virtual ~Base() {
        cout << m_base << " 부모 클래스 소멸자\n";
    };
    void set(const T& mb) {
        m_base = mb;
        cout << "set함수 실행\n";
    };
    virtual void print() = 0; // pure virtual function
};
template<typename T>
class Derived : public Base<T>{
public:
    ~Derived() {
        cout << Base<T>::m_base << " 자식 클래스 소멸자\n";
    };
    virtual void print() {
        cout << Base<T>::m_base << '\n';
    };
    const T& get() {
        return Base<T>::m_base;
    };
};
int main() {
    string test;

    Derived<string> d1;
    Derived<double> d2;
    d2.set(numbers::pi);
    d1.set("기말고사");
    cout << d2.get() << '\n';
    cout << d1.get() << '\n';

    return 0;
}