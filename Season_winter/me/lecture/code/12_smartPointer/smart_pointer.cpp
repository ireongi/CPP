#include <iostream>
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

//    ///쉐어드 포인터(카운터 체크, 여러명이 참조하다가 사라져도 하나라도 남아있으면 사라지지 않음)
//    shared_ptr<Soldier> a(new Soldier(77));
//    cout << a.use_count() << '\n'; /// 1개
//    shared_ptr<Soldier> b(a);
//    {
//        auto c(b);
//        cout << c->getN() << '\n';
//        cout << a.use_count() << '\n';
//        cout << c.use_count() << '\n';
//    } /// 스코프 벗어나는 순간 사라짐(+된만큼 -됨)
//
//    cout << a->getN() << '\n';
//    cout << a.use_count() << '\n'; /// 2개
//    cout << b.use_count() << '\n';
//    cout << a << '\n';
//    cout << b->getN() << '\n';
//    cout << b << '\n';

    ///유니크 포인터(스마트 포인터 중에 유일하게 소유권을 가짐) : reset, release
//    unique_ptr<Soldier> a(new Soldier(77));
//    cout << a->getN() << '\n';
//    cout << a << '\n';
//    /// 1) reset : 리셋 후 새로운 포인터로 지정(새로운 힙)
//    a.reset(new Soldier(5));
//    cout << a->getN() << '\n';
//    cout << a << '\n';

//    unique_ptr<Soldier> a(new Soldier(77));
//    /// 2) release : 소유권이전 메소드(포인터가 넘겨받음, 같은 힙)
//    unique_ptr<Soldier> b(a.release());
////    unique_ptr<Solder> b();
//    cout << b->getN() << '\n';
//    cout << b << '\n';



      /// 스마트 포인터
//    Solder* a = new Solder(77);
//    Solder* b = a;
//    cout << b->getN() << "\n";
//    delete b;
//    delete a;


    return 0;
}