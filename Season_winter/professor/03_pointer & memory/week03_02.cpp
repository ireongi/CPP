//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[3] = { 3, 1, 2 };
//    int* parr = arr;
//    for (int i = 0; i < 3; i++)
//    {
//        cout << arr[i] << endl;
//        cout << *(parr+i) << endl;
//        //cout << parr[i] << endl;
//    }
//    return 0;
//}


#include <iostream>
using namespace std;

int main()
{
    bool arr[5];
    //int* parr = &arr[0];
    bool* parr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "포인터 연산을 사용한 주소: " << i;
        cout << arr + i << endl;
        cout << "& 연산자를 사용한 주소: " << i;
        cout << &arr[i] << endl;
        cout << "parr을 사용한 주소: " << i;
        cout << parr + i << endl << endl;
    }
    return 0;
}

