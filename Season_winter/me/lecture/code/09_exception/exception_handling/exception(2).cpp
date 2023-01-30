#include <iostream>
#include "dynamicarray(2).h"
#include "myException.h"
using namespace std;


int main(){
    /// 2) try~ catch 구문 메인에서 get과 set에 throw를 받아서 하는 방법
    try {
        Dynamicarray da1(10);

        int a;
        cin >> a;

        da1.setAt(9,8);
        cout << da1.getAt(9) << "\n";
        da1.setAt(13,a); ///out of range! -> getAt과 setAt에 throw 넣어주기
        cout << da1.getAt(13) << "\n";

    }
    catch(MyException err){
        cout << "예외내용 : " << err.description << "\n";
        cout << "기타내용 : " << err.codeInfo << "\n";
    }
//    for(int i=0; i<10; ++i)
//        da1.setAt(i, i * i); /// i번방에 i*i값 저장
//    cout << "da1 사이즈: " << da1.getSize() << "\n";
//
//    for(int i=9; i>=0; --i)
//        cout << "da1[" << i << "] = " << da1.getAt(i) << "\n";


//    da1.setAt(7, a);
//    cout << da1.getAt(7) << "\n";
//    da1.setAt(13, a);         /// 10번방까지 만들어놓고 13번방에 넣어봄
//    cout << da1.getAt(13) << "\n";  /// java처럼 out of bounds가 안되고 출력됨, 다른 프로그램에 영향 줄수있음 so 명확성을 위해 예외처리가 필요함

/// 1) traditional 예외처리-헤더~구현~메인까지 bool타입에 if문 적용해줘야함
//    if(da1.setAt(13, a))
//         cout << da1.getAt(13) << "\n";

    return 0;
}