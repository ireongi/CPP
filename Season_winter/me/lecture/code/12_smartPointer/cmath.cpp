#include <iostream>
#include <numbers>
#include <cstring>
using namespace std;

class Soldier {
private:
    int n;
public:
    Soldier(int n) : n(n){
        cout << "생성\n";
    };
    virtual ~Soldier(){
        cout << "소멸\n";
    };
    int getN()const{
        return n;
    }
};

int main(){
  //  cout << numbers::pi << endl; /// c++ 20으로 편하게 사용 가능

    /// weak_ptr : 약한 참조, a를 통해 w를 참조 받음, 참조 카운터를 늘리지 않음, 직접적인 접근은 안되고, lock함수를 통해 접근 가능
    weak_ptr<Soldier> w;
    {
        shared_ptr<Soldier> a(new Soldier(77));
        shared_ptr<Soldier> b = make_shared<Soldier>(77); /// 요즘 생성 방식
        w = a;
        cout << a.use_count() << '\n';
        cout << w.lock()->getN() << '\n';
    }
    if(!w.expired()) /// expired : 만료, 없으면 실행 안함
        cout << w.lock()->getN() << '\n';



    return 0;
}