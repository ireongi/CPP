﻿/********************************************************* 
 * 여러 진법의 정수 입력받기                             *
 *********************************************************/
#include <iostream>
using namespace std;

int main()
{
  // 선언
  int num1, num2, num3;
  // 10진수로 첫 번째 숫자 입력받기(조정자 없음)
  cout << "첫 번째 숫자를 10진수로 입력: "; 
  cin >> num1;
  // 8진수로 두 번째 숫자 입력받기
  cout << "두 번째 숫자를 8진수로 입력: "; 
  cin >> oct >> num2; 
  // 16진수로 세 번째 숫자 입력받기
  cout << "세 번째 숫자를 16진수로 입력: "; 
  cin >> hex >> num3;
  // 출력
  cout << num1 << endl;
  cout << num2 << endl;
  cout << num3;
  return 0;      
} 