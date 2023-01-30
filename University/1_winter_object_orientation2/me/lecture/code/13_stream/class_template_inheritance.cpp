#include <iostream>
using namespace std;

template<class T>
class Test{
protected:
    T* ptr;
    int length;
public:
    Test(int len) : length(len){}

};

template<class T>
class Base{
protected:
    T m_base;
public:
    Base(){
        cout << "기본생성자\n";
    }
    virtual ~Base(){
        cout << "소멸됨\n";
    }
    void set(const T& mb){
        m_base = mb;
        cout << "set함수 실행\n";
    }
    virtual void print() = 0; ///pure virtual function
};

class Exam : public Test<T>{
protected:
    T m_base;
public:
    Exam(T* arr, int len) : length(len){
        ptr = new T[len];
        }
    };

int main(){

    return 0;
}


