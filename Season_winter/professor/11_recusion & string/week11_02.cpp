//#include <iostream>
//using namespace std;
//// f(n) = f(n-1) + f(n-2)
//// f(0) = 0, f(1) = 1
//// f(2) = 1 + 0 = 1
//// f(3) = 1 + 1 = 2
//// f(4) = 2 + 1 = 3
//// f(5) = 3 + 2 = 5
//// f(6) = 5 + 3 = 8
//// ...
//int memo[1000]; // 전역 배열변수
//
//int fibo_recu(int n)
//{
//	if (n <= 1)
//		return n;
//	return fibo_recu(n - 2) + fibo_recu(n - 1);
//}
//int fibo_iter(int n)
//{
//	int f0 = 0, f1 = 1, fn;
//	int start = 2, index;
//	if (n == 0) {
//		return 0;
//	}
//	else if (n == 1) {
//		return 1;
//	}
//	else {
//		for (index = 2; index <= n; index++) {
//			fn = f1 + f0;
//			f0 = f1;
//			f1 = fn;
//		}
//	}
//	return fn;
//}
//int fibo_memo(int n)
//{
//	if (n <= 1) {
//		memo[n] = n;
//		return memo[n]; // 0 또는 1 리턴
//	}
//	if (memo[n] != 0) {
//		return memo[n]; // 배열에 저장된 값을 리턴, 재귀호출 X
//	}
//	memo[n] = fibo_memo(n - 2) + fibo_memo(n - 1);  // 처음 방문하는 n이면
//	return memo[n];
//}
//int main()
//{
//	cout << fibo_memo(43) << '\n';
//	cout << fibo_iter(43) << '\n';
//	cout << fibo_recu(43) << '\n';
//	return 0;
//}
//
//
//
////#include <iostream>
////using namespace std;
////
////int gcd(int first, int second)
////{
////	if (second == 0)
////	{
////		return first;
////	}
////	else
////	{
////		return gcd(second, first % second);
////	}
////}
////int main()
////{
////	// gcd 함수 테스트
////	cout << "gcd(8, 6) = " << gcd(8, 6) << endl;
////	cout << "gcd(9, 12) = " << gcd(9, 12) << endl;
////	cout << "gcd(140, 12) = " << gcd(140, 12);
////	return 0;
////}
//
//
////#include <iostream>
////using namespace std;
////
////int fact_iter(int n) {
////    int r = 1;
////    for (int i = n; i > 0; i--)
////        r = r * i;
////    return r;
////}
////int fact_recu(int n) {
////    if (n == 1)
////        return 1;
////    return fact_recu(n - 1) * n;
////}
////int main() {
////    cout << fact_iter(5) << '\n';
////    cout << fact_recu(5) << '\n';
////    return 0;
////}
