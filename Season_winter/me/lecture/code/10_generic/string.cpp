//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//
//int main() {
//
//    char a[] = {'A', 'C', 'E','\0'}; /// 문자열 맨 마지막에 널문자 붙여야함
////    const char a[] = {'A', 'C', 'E','\0'}; /// 추후 값 변경 불가
////    char a[] = {'A', 'C', 'E', 0};    /// 같음
////    char a[] = {'A', 'C', 'E', NULL}; /// 같음
////    char a[] = {'A', 'C', 'E', nullptr}; /// 0과 nullptr은 다름
//    a[1] = 72; /// 아스키 코드 확인 가능
//    a[2] = 68;
//
////    char b[] = "ABC"; /// 큰 따옴표로 묶으면 널 문자가 자동으로 붙음
//
////    cout << a << "\n";
//
//    const char* b = "Hi";
//    const char* c = "Hi"; /// H = 72
////    const char* d = "hi"; /// h = 104
////    cout << strcmp(b, c) << "\n"; /// 같음, 0 출력
////    cout << strcmp(d, c) << "\n"; /// d가 더 작음, -1 출력 또는 컴파일러에 따라 104-72 = 32 출력
//
//    string d = "Hell";
//    string e = "Hello";
//    string f("123456789");
//    cout << f.size() << "/" << f.capacity() << "/" << f << "\n";
//
//    cout << d[1] << "\n";
//    cout << d.at(1) << "\n";
//    cout << strcmp(b,c) << "\n"; /// 비교1
//    cout << (d == d)<< "\n";     /// 비교2 - 훨씬 직관적임
//    cout << boolalpha;
//
//
//    return 0;
//}
//
///// 메모리 누수 방지를 위해 예외처리 사용해볼수있음