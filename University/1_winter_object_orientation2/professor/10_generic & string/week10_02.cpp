#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //const char a[] = { 'A','C','E','\0'};
    char a[] = { 'A','C','E','\0'};
    //char a[] = { 'A','C','E',NULL };
    //char a[] = { 'A','C','E',0 };
    //char a[] = "ACE";
    //char a[] = { 'A','C','E',nullptr }; // error
    a[1] = 68;
    a[2] = 68;
    const char* b = "hi";
    const char* c = "Hi";
    string d = "Hell";
    string e = "Hello";
    string f("123456789");
    char* pg = new char[3];
    pg[0] = 'A';
    pg[1] = 'Q';
    pg[2] = NULL;
    cout << pg << '\n';
    delete[] pg;
    pg = nullptr;

    cout << f.size() << " / " << f.capacity() << " / " << f << '\n';

    cout << d[1] << '\n';
    cout << d.at(1) << '\n';
    cout << strcmp(b, c) << '\n';
    cout << boolalpha;
    cout << (d == e) << '\n';

    cout << a << '\n';

    return 0;
}
