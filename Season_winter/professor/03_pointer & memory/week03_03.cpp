#include <iostream>
using namespace std;

int main()
{
    int size;
    int* parr = nullptr;
    cout << "몇 분이세요? ";
    cin >> size;
    parr = new int[size]; // heap memory allocation

    for (int i = 0; i < size; i++) {
        cout << "나이는? ";
        cin >> parr[i];
        //cin >> *(parr + i);
    }
    for (int i = 0; i < size; i++) {
        cout <<  *(parr + i);
    }
    delete[] parr;
    parr = nullptr; // free heap memory
    return 0;
}