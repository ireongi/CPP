﻿/*************************************************************
 * 두 숫자를 입력 받은 뒤에 두 숫자 중에 더 큰 숫자 또는     *
 * 같을 경우 첫 번째 숫자를 조건부 표현식으로 찾아 출력하기  *
 *************************************************************/
#include <iostream>
using namespace std;

int main()  
{
  // 변수 선언
  int num1, num2;
  int larger;
  // 입력받기
  cout << "첫 번째 숫자 입력: ";
  cin >> num1;
  cout << "두 번째 숫자 입력: ";
  cin >> num2;
  // 의사 결정
  larger = num1 >= num2 ? num1 : num2;
  // 출력
  cout << "더 큰 숫자 =  " << larger; 
  return 0;
}