#include <iostream>
#include <new>
using namespace std;

int main()
{
    try {
        int* p = new int[0xFFFFFFF];
        delete[] p;
        p = nullptr;
    }
    catch (bad_alloc err) {
      cout << err.what() << '\n';
    }
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

char* myReverse(char* p) {
	char* temp = new char[strlen(p) + 1];
	for (int i = 0; i < strlen(p); i++)
		temp[i] = p[strlen(p) - i - 1];
	temp[strlen(p)] = NULL;
	return temp;
}
int main()
{
	char orig[] = "ABCDEFG";
	char* copy = nullptr;
	cout << orig << '\n';
	copy = myReverse(orig);
	cout << copy << '\n';
	delete[] copy;
	copy = nullptr;

	return 0;
}
//
//
