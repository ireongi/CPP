//#include <iostream>
//using namespace std;
//
//int main(){
//
//    /// 이중 포인터
//    int i = 77;
//    int* pi = &i;
//    int** ppi = &pi;
//
//    cout << *pi << "/" << **ppi << endl;
//
//    cout <<  &i << "/" << pi << "/" << ppi << endl;
//
//    ///  i <- pi(f4) <- ppi(ff)
//    ///  f4    ff        fc
//    /// *ppi = &pi()  /  **ppi = &i(f4)
//
//    /// * + 포인터 변수 = 포인터 변수가 가리키는 값  / & + 변수 = 그 변수의 주소
//
//    return 0;
//}