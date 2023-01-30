#include <iostream>
#include <string>
using namespace std;
class Soldier {
private:
    int n;
public:
    Soldier(int n) : n(n) {
        cout << "생성\n";
    };
    virtual ~Soldier() {
        cout << "소멸\n";
    };
    int getN()const {
        return n;
    }
};
int main() {
    Soldier* a = new Soldier(77);
    Soldier* b = a;
    cout << b->getN() << '\n';
    delete b;
    delete a;
    return 0;
}

