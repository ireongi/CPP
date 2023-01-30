﻿/**************************************************************
 * 포인터를 사용해서 배열의 요소에                            * 
 * 접근하는 방법을 보여주는 프로그램                          *
 **************************************************************/
#include <iostream>
using namespace std;

int getSum(const int*, int);  // 프로토타입

int main()
{
  // 배열 선언과 초기화
  int arr[5] = {10, 11, 12, 13, 14};
  // 함수 호출
  cout << "요소의 합: " << getSum(arr, 5);
  return 0;
}
/*************************************************************
 * 배열에 대한 포인터와 배열의 크기를 매개변수로             *
 * 전달받아서 요소의 합을 구하고 리턴하는 함수               *
 *************************************************************/
int getSum(const int* p, int size)
{
  int sum = 0;
  for(int i = 0; i < size ; i++)
  {
    sum += *(p++);
  }
  return sum;
}