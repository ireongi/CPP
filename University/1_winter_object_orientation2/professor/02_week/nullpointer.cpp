#include <iostream>
using namespace std;

int main()
{
    int size;
    int* parr = nullptr;
    cout << "몇 분이세요? ";
    cin >> size;
    parr = new int[size]; /// heap memory allocation  /// 입력받은 사람 수만큼 parr 방크기 설정

    for (int i = 0; i < size; i++) { /// 사람 수만큼 나이 물어보고, 각 방에 저장
        cout << "나이는? ";
        cin >> parr[i];
        //cin >> *(parr + i);
    }

    for (int i = 0; i < size; i++) { ///parr
        cout << i+1 << "번째 사람의 나이: " << *(parr + i) << "ㄱ" << endl;
    }
    delete[] parr;
    parr = nullptr; /// !!!free heap memory 꼭 이 작업도 해야함
    return 0;
}