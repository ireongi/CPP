//
// Created by hui-ryung on 2022/12/22.
//
#include <iostream>
class Animal{
private:
    int a;
protected:
    int b;
public:
    int c;
};
class Mammal : public Animal{
public:
    void test(){
       // std::cout << a << "\n";  //private 실행불가
        std::cout << b << "\n";
        std::cout << c << "\n";
    }
};
class Horse : public Mammal{ //상속
public:
    void test(){
       // std::cout << a << "\n";  //private 실행불가
        std::cout << b << "\n";
        std::cout << c << "\n";
    }
};
int main(){
    Animal a1;
    Mammal m1;
    Horse h1;
    m1.c = 100;
    m1.test();

//    a1.a = 1;  private는 못 씀
//    a1.b = 2;  protected는 못 씀 getter setter로 접근 가능
//    a1.c = 3;
    return 0;
}