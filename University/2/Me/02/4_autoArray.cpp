//#include <iostream>
//using namespace std;
//
//int main()
//{
//    /// auto = 자료 타입이 들어가는 위치에 사용 -> 해당 키워드를 가진 변수와 뒤에 초기화되는 값들에 의해 '추론'하여 타입 지정함
//    // auto[4] = {0}; error
//    int arr[4] = { -9, 2, 3, 4}; /// 최상위 배열 형식에는 auto 쓸 수 없음
//    auto* parr = &arr[0]; /// arr의 0번째 값이 정수이기 때문에 추론함
//
//    for(auto i=0; i<4; i++) {
//        cout << parr+i << endl;
//        cout << *(parr + i) << endl;
//        cout << parr[i] << endl;
//        cout << *(arr+i) << endl;
//    }
//    return 0;
//}