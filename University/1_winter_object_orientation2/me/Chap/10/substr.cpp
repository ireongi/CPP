/// 서브 문자열 탐색
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // 문자열 생성
    char str[]  = "Hello friends of mine.";
    // 서브 문자열의 위치 탐색
    char* sPtr = strstr(str, "friends");
    cout << "서브 문자열의 시작 인덱스: " << sPtr - str;
    cout << *str;
    return 0;
}
