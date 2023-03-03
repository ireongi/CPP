/**************************************************************
 * 재귀적으로 최대 공약수를 구하는 프로그램   유클리드 호재법              *
 **************************************************************/
#include <iostream>
using namespace std;

// f(n) = f(n-1) + f(n-2)
// f(0) = 0, f(1) = 1
// f(2) = 1 + 0 = 1
// f(3) = 1 + 1 = 2

/// 재귀문
int fibo_recu(int n)
{
    if(n <=1)
        return n;
    return fibo_recu(n-2) + fibo_recu(n-1);
}
/// 반복문
int fibo_iter(int n)
{
   int f0 = 0, f1 = 1, fn;
   int start = 2, index;
   if(n == 0){
       return 0;
   }
   else if(n == 1){
       return 1;
   }
   else{
       for(index = 2; index <= n; index++){
           fn = f1 + f0;
           f0 = f1;
           f1 = fn;
       }
   }
    return fn;
}
/// 메모이제이션 (한번 작업처리한 내용을 전역변수(스태틱 공간)로 저장해두기, 배열로도 가능)
int memo[1000];
int fibo_memo(int n)
{
    if(n <=1) {
        memo[n] = n;
        return memo[n]; /// 0또는 1리턴
    }
    if(memo[n]!= 0) {
        return memo[n]; /// 배열에 저장된 값을 리턴, 재귀호출 x
    }
    memo[n] = fibo_memo(n-2) + fibo_memo(n-1); /// 처음 방문하는 n이면 저장

    return memo[n];
}

int main()
{
    cout<< fibo_iter(43) << endl; ///  50 : 오버플로우 발생, int가 담을 수 있는 값을 넘김
    cout<< fibo_recu(43) << endl;
    cout<< fibo_memo(43) << endl;

    return 0;
}
// gcd 재귀 함수 정의
