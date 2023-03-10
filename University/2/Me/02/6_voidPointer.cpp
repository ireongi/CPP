#include <iostream>
using namespace std;

int main()
{
    /// 변수 void pointer
    int a = 4;
    short* ps;

    /// 포인터 변수와 받는 주소의 타입이 다르면 error
    //ps = &a;
    //cout << *ps << endl;

    void* pv;
    /// void 포인터로 받으면 받는 주소와 포인터 변수의 타입 달라도 ok
    pv = &a;
    cout << *(int*)pv << endl; /// void로 받은 주소의 변수를 사용할때 어떤 타입을 받았는지 알아야 함, *과 포인터변수 사이에 () 안 캐스팅을 해야함
    // cout << *pv << endl; error


    /// 문자열 void pointer
    char s[] = "Hell";
    cout << s << endl;



    return 0;
}
