﻿/**************************************************************
 * 인덱스와 포인터 모두를 활용해서                            *
 * 배열의 요소에 접근하는 방법을 보여주는 프로그램            *
 **************************************************************/
#include <iostream>
using namespace std;

int main()
{
  // 배열 선언과 초기화
  int numbers[5] = {10, 11, 12,13, 14};
  // 인덱스를 사용해서 배열의 요소에 접근
  cout << "인덱스를 사용해서 배열의 요소에 접근하기" << endl;
  for(int i = 0; i < 5; i++)
  {
    cout << numbers[i] << "   ";
  }
  cout << endl;
  // 포인터를 사용해서 배열의 요소에 접근
  cout << "포인터를 사용해서 배열의 요소에 접근하기" << endl;
  for(int i = 0; i < 5; i++)
  {
    cout << *(numbers + i) << "   ";
  }
  return 0;      
}