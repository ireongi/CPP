//#include <iostream>
//using namespace std;
//
//int main()
//{
//    cout << "-- Old School --" << endl;
//    char s[] = {'H', 'e', 'l', 'l', 0};
//    void* p;
//    p = &s[0];
//    cout << *(char*)p << endl; /// 0번방만, void 포인터 캐스팅(char*) 후 가르키는 값(맨 앞*) 지정
//    cout << s << endl; /// 전체(배열명으로 출력, 포인터 사용 ㄴ)
//
//    /// 포인터로 전체 출력하기
//    // 1)반복문
//    for(int i=0; i<sizeof(s)-1; i++)
//        cout << *((char*)p+i) ;
//    cout << endl;
//    // 2)간단
//    cout << (char*)p << endl;
//
//
//
//    cout << "-- Modern --" << endl;
//    char letters[] = "Hell";
//    void* ps;
//    ps = letters;
//
//    /// Ranged based for loop (범위 기반 반복문)    <- 2011년 이후 사용
//    for (auto letter : letters)
//        cout << letter;
//    cout << endl;
//
//
//    /// 더 간단한 반복문
//    for(int i : {1, 3, 5, 7, -9})
//        cout << i;
//
//    return 0;
//}
