﻿/*************************************************************
 * 스트림의 상태를 확인해보는 프로그램                       *
 *************************************************************/
#include <iostream>
using namespace std; 

int main()
{
  int n;        
  cout << "정수를 입력하세요(종료하려면 eof 입력): " << endl; 
  while(cin >> n)
  {
    cout << n * 2 << " ";
  }
  return 0;
}