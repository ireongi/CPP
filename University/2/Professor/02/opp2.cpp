#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 7;
    const int* const pi = &a;

    //*pi = 11;
    cout << a << " " << *pi << "\n";
    a = -6;
    //pi = &b;
    cout << b << " " << *pi << "\n";

    return 0;
}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int arr[3] = { 9, -8, 4 };
//	int* parr = &arr[1];
//
//	cout << arr << " " << &arr[0] << " " << parr << " " << arr[0] << " " << *parr << " " << "\n";
//	cout << arr[1] << " " << *(parr+1) << "\n";
//	cout << &arr[1] << " " << (parr + 1) << "\n";
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int i1 = 77;
//	int i2 = 16;
//	//int* pi = 99;  // error : 포인터 변수는 메모리 번지 주소만 받을 수 있다.
//	int* pi = &i1;
//	int** ppi = &pi;
//	short* si;
//	long* li;
//
//	cout << &i1 << " " << pi << " " << &pi << " " << &i2 << "\n";
//	cout << i1 << " " << *pi << " " << **ppi << " " << i2 << "\n";
//
//	pi = &i2;
//
//	cout << &i1 << " " << pi << " " << &pi << " " << &i2 << "\n";
//	cout << i1 << " " << *pi << " " << **ppi << " " << i2 << "\n";
//
//	cout << sizeof(li) << " " << sizeof(*li) << "\n";
//	cout << sizeof(si) << " " << sizeof(*si) << "\n";
//	cout << sizeof(pi) << " " << sizeof(*pi) << "\n";
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {	
//	int i = 77;
//	int* pi = &i;
//	int** ppi = &pi;
//	
//	double d = 9.7;
//	double d2 = 2.91;
//	//const double* pd;
//	const double* const pd = &d;
//
//	void* pv;
//
//	//pd = &d;
//	//*pd = 3.13;
//	//pd = &d2;
//
//	cout << *pd << "\n";
//
//	//pi = &i;
//	//pi = &d;
//	pv = &i;
//	//pv = &d;
//
//	cout << *(int*)pv << "\n";
//
//	cout << *pi << " / " << i << " / " <<  **ppi << "\n";
//	cout << pi << " / " << &i << " / " << *ppi << "\n";
//
//	cout << sizeof(pd) << "\n";
//	cout << sizeof(d) << "\n";
//	cout << sizeof(pi) << "\n";
//	cout << sizeof(i) << "\n";
//
//	return 0;
//}