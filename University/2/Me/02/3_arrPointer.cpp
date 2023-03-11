//#include <iostream>
//using namespace std;
//
//int main()
//{
//    /// 배열명은 포인터 상수
//    int arr[4] = { -9, 2, 3, 4}; /// 배열 인덱싱
//    int* parr = &arr[0];
//
//
//    for(int i=0; i<4; i++) {
//        cout << parr+i << endl;       /// 메모리 번지 주소만 출력
//        cout << *(parr + i) << endl; /// 포인터로 해당 값 출력
//
//        cout << parr[i] << endl;    /// 포인터 변수를 배열 같이 사용
//        cout << *(arr+i) << endl;  /// 배열 명을 포인터같이 사용
//
//    }
//    return 0;
//}