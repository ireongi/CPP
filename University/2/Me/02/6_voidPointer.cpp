//#include <iostream>
//using namespace std;
//
//int main()
//{
//    /// 변수 void pointer
//    int a = 4;
//    short* ps;
//
//    /// 포인터 변수와 받는 주소의 타입이 다르면 error
//    //ps = &a;
//    cout << *ps << endl;
//
//    void* pv;
//    /// void 포인터로 받으면 받는 주소와 포인터 변수의 타입 달라도 ok
//    pv = &a;
//    cout << *(int*)pv << endl; /// void로 받은 주소의 변수를 사용할때 어떤 타입을 받았는지 알아야 함, *과 포인터변수 사이에 () 안 캐스팅을 해야함
//    // cout << *pv << endl; error
//
//
//    /// 문자열 void pointer
//    //char s[] = "Hell";  // "Hell" = "Hell\0"
//    char s[] = {'H', 'e', 'l', 'l', 0}; /// 한 방씩 지정할 때, 맨 마지막 방은 null 값을 넣어야함
//    void* p;
//
//    p = s;
//    //p = &s[0]  /// 같은 의미, 0번 방을 가르키고 있음
//    cout << *(char*)p << endl; /// 'H'만 출력
//    cout << s << endl; /// 배열명으로 전체 출력
//
//    /// 포인터 변수로 전체 출력하려면 반복문 사용 (int i 대신 auto i 가능)
//    for(int i=0; i<sizeof(s)-1; i++)
//        cout << *((char*)p+i); /// p의 주소 -> *(char*)p, 즉 0번 방에 i를 더함
//
//    /// 같은 의미(간단)
//    cout << (char*)p << endl;
//
//
//    return 0;
//}
