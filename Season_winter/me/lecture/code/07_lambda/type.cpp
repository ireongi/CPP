#include <iostream>
#include <functional>
using namespace std;

int main() {

    /// []캡처블럭 안 특정변수에 & 붙임 : 특정 외부변수 원본값 람다에서 수정
    short c = 5, d = 7;
    auto Capture = [&c, d](float a, int b) -> int {
        // d = -11;  지역변수로 수정 불가
        c = -5; /// [&c] 레퍼런스로 인해 수정 가능해짐
        return a + b + c + d;
    };
    cout << Capture(1.9f, 2) << endl;
    cout << c << endl; /// 람다 안에서 수정했지만 원본의 값을 변경시킴


    /// [=]로 모든 바깥변수 사용가능(수정은 불가)
    short c2 = 5, d2 = 7;
    auto Capture2 = [=](float a, int b) -> int {
        return a + b + c2 + d2;
    }(1.9f, 2);
    cout << typeid(Capture2).name() << endl; /// int의 i 출력
    cout << Capture2<< endl;
    cout << typeid(Capture2).name() << endl; /// 매개변수 값 주기 전에 출력해보면 객체 자체가 나옴


    /// 거듭제곱
    auto power = [](int b , int e) -> int{
        int r = 1;
        for(auto i = 1; i<=e; i++)
            r = r * b; ///1*2, 2*2, 4*2, 8*2,,,
        return r;
    }; /// 여기에 바로 매개변수 지정하면 일회성 사용에 가까움
       /// 바로 뒤에 매개변수 지정 후, auto를 int로, -> int 생략도 가능함
    cout << power(2 ,8) << endl;
    cout << power(4 ,3) << endl;

    /// 재귀함수(자기 안에 자기자신 호출)
    /// 람다에서 재귀 구현시 auto 추론 불가
    /// #include <functional> 과 반드시 대입하려하는 함수의 타입을 <int(int)>와 같이 명시해야함
    function<int(int)> fact = [&fact](int n)->int{   /// factorial(계승, n이면, 1부터 n까지 곱함)
        return n <= 1 ? 1 : n * fact(n-1);
//        if(n<=1)
//            return 1;
//        else
//            return  n * fact(n - 1); ///5*5를 5-1=4번
    };
    cout << fact(5) << endl;

    return 0;
}