#include <iostream>
using namespace std;

int main() {
    /// 익명함수, 함수객체를 생성
    /// 함수 포인터와 함수객체의 장점을 지닌다.
    /// 캡쳐 기능을 통해 함수 밖의 변수에 접근할 수 있고
    /// & 기호를 통해 람다함수 안에서도 외부 변수의 값을 변경할수있다
    /// 재귀 호출도 가능하다.

    /// 문법 [캡쳐블럭](매개변수리스트) -> 리턴타입{함수바디};
    /// 아래처럼 생략 가능 / []는 생략불가
    ///  []()-> void {};    // 화살표 "->" 쓸거면 리턴타입 지정해야함
    ///  []() {};
    ///  [] {};


    /// 즉시 실행 : 맨 끝의 소괄호 쌍 붙임
    [] { cout << "Hi Lambda~" << endl; }();

    /// void 출력문 : 따로 cout 불필요, "just ()"
    auto print = [] { cout << "Hi Lambda~" << endl; };
    print();
    // cout << print() << endl; // 람다 함수식 안에 출력구문이 이미 있음

    /// return 타입 : "cout << ()"
    auto Plus = []() { return 5 + 10; };
    cout << Plus() << endl;


    /// (매개변수 리스트)
    /// 매개변수로 계산
    auto Parameter = [](int a, int b) { return a + b; };
    cout << Parameter(3, 23) << endl;

    /// 화살표는 리턴타입 명시 필요
    auto Parameter2 = [](int a, int b) -> int { return a + b; };
    cout << Parameter2(4, 23) << endl;

    /// 매개변수 람다식 바로 뒤에 붙여도 됨
    auto Parameter3 = [](int a, int b) -> int { return a + b; }(5, 23);
    cout << Parameter3 << endl;


    /// -> 리턴타입{함수바디}
    /// 타입이 다른 경우 : 중괄호 앞 리턴타입 명시 -> 해당 타입으로 강제변환
    auto Type1 = [](float a, int b)-> int { return a + b; };
    cout << Type1(6.6f, 23) << endl;

    auto Type2 = [](float a, int b)-> float { return a + b; };
    cout << Type2(6.6f, 23) << endl;

    /// 타입이 다른 경우 : 리턴타입 명시 안함 -> 함수 실행하며 더 큰 타입으로 자동 형변환함
    auto Type3 = [](float a, int b) { return a + b; };
    cout << Type3(6.6f, 23) << endl;



    /// [캡쳐블럭] 람다함수 "안"에서 참조하고자하는 "바깥"변수를 지정함
    /// 캡처블럭에 외부 변수 넣어 함수바디에서 외부로 접근가능하게함
    short c = 5, d = 7;
    auto Capture = [c, d](float a, int b) -> int {
        return a + b + c + d;
    };
    cout << Capture(1.9f, 2) << endl;

    /// [=]로 모든 바깥변수 사용가능(수정은 불가)
    short c2 = 5, d2 = 7;
    auto Capture2 = [=](float a, int b) -> int {
        return a + b + c2 + d2;
    };
    cout << Capture2(1.9f, 2) << endl;

    /// [&]로 모든 바깥변수 사용 & 수정가능
    short c3 = 5, d3 = 7;
    auto Capture3 = [&](float a2, int b2) -> int {
        d3 = -11;
        c3 = -5;
        return a2 + b2 + c2 + d2;
    };
    cout << Capture3(1.9f, 2) << endl;
    cout << c3 << endl;



    return 0;
}