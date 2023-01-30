#include <iostream>
using namespace std;

int main()
{
//    int a = 9;
//    //int* pa;
//    //pa = &a;
//    int* pa = &a;
//
//    cout << *pa << endl;
//    cout << pa << endl;

    int a = 9;
    int& ra = a;
    int& rra = a;
    cout << "ra: " << ra << "\n";
    ra = 7;
    cout << "rra: " << rra << "\n";

    //int& rb = 88;
    const int& rb = 88;
//    rb = 9; ///read only
    cout << "rb: " << rb << "\n";

    int c = 12;
    //int& rc = c;
    cout << "c: " << c << "\n";
    const int& rc = c;
    //rc = 31;
    c = 31; ///const but 가르치는 원본 대상은 변경 가능
    cout << "rc: " << rc << "\n";





    return 0;
}



//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    // 선언
//    const int CAPACITY = 3;
//    int numbers[CAPACITY];
//    int size = 0;
//    ifstream inputFile("a.txt");
//    ofstream outputFile("b.txt");
//    // 입력 파일 열기
//    //inputFile.open("a.txt");
//    if (!inputFile)
//    {
//        cout << "파일을 열 수 없습니다." << endl;
//        cout << "프로그램을 중단합니다.";
//        return 0;
//    }
//    // 입력 파일에서 배열로 숫자를 읽어 들이기
//    for (int i = 0; i < 3; i++) {
//        cout << i << " ";
//        inputFile >> numbers[size++];
//    }
//    //while (inputFile >> numbers[size] && size <= 50)
//    //{
//    //    cout << "!";
//    //    size++;
//    //}
//    // 입력 파일 닫기
//    inputFile.close();
//    // 출력 파일 열기
//    //outputFile.open("b.txt");
//    if (!outputFile)
//    {
//        cout << "파일을 열 수 없습니다." << endl;
//        cout << "프로그램을 중단합니다.";
//        return 0;
//    }
//    // 배열의 내용을 거꾸로 출력 파일에 쓰기
//    for (int i = size - 1; i >= 0; i--)
//    {
//        outputFile << numbers[i] << " ";
//        //cout << numbers[i] << " ";
//    }
//    // 출력 파일 닫기
//    outputFile.close();
//    return 0;
//}
