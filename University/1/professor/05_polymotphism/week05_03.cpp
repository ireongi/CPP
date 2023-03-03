#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Animal { /// 하나 이상의 순수 가상함수가 존재하므로 Animal은 추상클래스. 추상클래스는 객체 생성 불가.
public:
    //virtual void print(){}
    virtual void print() = 0;  /// pure virtual function (virtual 키워드가 앞에 붙고, 값을 0으로 줌)
    void sleep();


};
class Horse : public Animal {
public:
    void print() {}
};
class Cat : public Animal {
public:
    void print() {}
};
class Rose {
public:
    void print() {}
};

int main()
{
    ///Animal a1;  // 추상클래스는 인스턴스 생성 불가

    Animal* someAnimalPtr = new Horse();  /// Upcast 부모 객체 선택(프로그램의 다형성 위해)
    cout << someAnimalPtr << '\n';
    Horse* someAnimalPtr2 = dynamic_cast<Horse*>(someAnimalPtr);  /// Downcast 성공. 같은 주소할당
    //Horse* someAnimalPtr2 = dynamic_cast<Rose*>(someAnimalPtr); /// Error
    //Cat* someAnimalPtr2 = dynamic_cast<Cat*>(someAnimalPtr);    /// NULL 값 할당. 원본이 고양이인데 어떻게 말을 가져옴?
    //Cat* someAnimalPtr2 = (Cat*)(someAnimalPtr);  // C언어 스타일의 캐스팅. 상속관계에서는 가져오지 말아야 할 주소를 획득
    cout << someAnimalPtr2 << '\n';

    delete someAnimalPtr2;

    double d;
    string s;
//    Animal a;
    Horse h;
    //cout << typeid(4.99).name() << endl;
      cout << typeid(d).name() << endl;
    //cout << typeid(static_cast<int>(d)).name() << endl;
    cout << typeid(s).name() << endl;
//    cout << typeid(a).name() << endl;
    cout << typeid(h).name();
    return 0;
}
