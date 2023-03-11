//#include <iostream>
//using namespace std;
//
///// 구조체 변수 선언
//struct StudentInfo {
//    int id;
//    float grade;
//    char bloodType;
//}s3 = {20201236, 4.4f, 'O'}, s4;  /// 선언과 동시에 초기화
//
//int main()
//{
//    StudentInfo s1 = {20201234, 3.5f, 'O'};
//    StudentInfo s2 = {20201234, 3.7f, 'A'};
//
//    cout << s2.grade << endl;
//    cout << s1.id << endl;
//
//    cout << s3.bloodType<<endl;
//
//    s4 = s2; /// 복사
//    cout << s4.bloodType << endl; // 'A'
//
////    s4.bloodType = 'B';
////    cout << s4.bloodType << endl; // 'B'
////    s4.id = 20201237;
////    s4.grade = 2.9f;
//
//
//    int a = 10;  /// 10진수
//    int b = 0XA; /// 16진수 (0X를 붙이면 됨, Hexadecimal 의 X)
//    int c = 012; /// 8진수 (맨 앞에 0 을 붙임)
//    int d = 0b1010;  /// 2진수(binary) (맨 앞에 0b 를 붙임)   <- c++14, binary literals
//
//    cout << a << endl;
//    cout << b << endl;
//    cout << c << endl;
//    cout << d << endl;
//
//
//
//    return 0;
//}