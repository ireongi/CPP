#include <iostream>
#include <functional>
#include <vector>
using namespace std;

//class Fly {
//private:
//public:
//    virtual void fly() const = 0;
//};
//
//class FlyWings : public Fly {
//private:
//public:
//    void fly() const {
//        cout << "날개를 펼쳐 날아갑니다~\n";
//    }
//};
//
//class FlyRockets : public  Fly {
//private:
//public:
//    void fly() const {
//        cout << "로켓 추진기를 사용해서 날아갑니다~\n";
//    }
//};

class Pokemon {
private:
    string owner;
    string name;
    bool hanjiwoo;
public:
    Pokemon() {
        owner = "";
        name = "";
        hanjiwoo = false;
    }

    Pokemon(string owner, string name)
        : owner(owner), name(name) {
        hanjiwoo = (owner == "한지우") ? 1 : 0;
    }

    virtual ~Pokemon() {
        cout << name << " 내가 너를 기억하마!" << "\n";
    }

    bool isHanjiwoo() const {
        return hanjiwoo;
    }
    string getOwner() const {
        return owner;
    }

    string getName() const {
        return  name;
    }

    void setOwner(string owner) {
        this->owner = owner;
    }

    void setName(string name) {
        this->name = name;
    }

    virtual void info() const {
        cout << name << "의 주인은 " << owner << "입니다." << "\n";
    }

    void flyBehavior(function<void()> f) {
        cout << owner << "의 " << name << "가 ";
        f();
    }

    //void flyBehavior(Fly*  f) {
    //    cout << owner << "의 " << name << "가 ";
    //    f->fly();
    //    //delete f;
    //}

    //friend istream& operator>>(istream&, Pokemon&);
};

istream& operator>>(istream& istrm, Pokemon& a) {
    string o, n;
    cout << "\n획득한 포켓몬의 이름:";
    istrm >> n;
    a.setName(n);

    cout << "획득한 주인:";
    istrm >> o;
    a.setOwner(o);

    //cout << "\n획득한 포켓몬의 이름:";
    //istrm >> a.name;

    //cout << "획득한 주인:";
    //istrm >> a.owner;

    return istrm;
}


int main() {
    vector<Pokemon*> pokemons;
    pokemons.push_back(new Pokemon("한지우", "피카츄"));
    pokemons.push_back(new Pokemon("오바람", "꼬부기"));
    pokemons.push_back(new Pokemon("나이기", "파이리"));
    pokemons.push_back(new Pokemon("한지우", "파이리"));
    pokemons.push_back(new Pokemon("덴트", "메더"));
    pokemons.push_back(new Pokemon("덴트", "암펠리스"));
    pokemons.push_back(new Pokemon("나이기", "리자드"));
    pokemons.push_back(new Pokemon("아이리스", "터검니"));
    pokemons.push_back(new Pokemon("한지우", "이상해"));
    //Pokemon* pokemons[9] = {
    //        new Pokemon("한지우", "피카츄"),
    //        new Pokemon("오바람", "꼬부기"),
    //        new Pokemon("나이기", "파이리"),
    //        new Pokemon("한지우", "파이리"),
    //        new Pokemon("덴트", "메더"),
    //        new Pokemon("덴트", "암펠리스"),
    //        new Pokemon("나이기", "리자드"),
    //        new Pokemon("아이리스", "터검니"),
    //        new Pokemon("한지우", "이상해")
    //};

    for (auto pokemon : pokemons) {
        pokemon->info();
    }
    cout << "\n";

    for (auto pokemon : pokemons) {
        if (pokemon->isHanjiwoo()) {
            cout << "한지우 소유 포켓몬은 " << pokemon->getName() << "입니다\n";
        }
    }
    cout << "\n";

    for (int i = 0; i < 9; i++) {
        delete pokemons[i];
    }

    Pokemon p1;
    cin >> p1;
    cout << p1.getName() << "의 주인 " << p1.getOwner() << '\n';

    Pokemon p2;
    cin >> p2;
    cout << p2.getName() << "의 주인 " << p2.getOwner() << "\n\n";

    auto FlyRockets = [](){cout << "로켓 추진기를 사용해서 날아갑니다~\n"; };
    auto FlyWings = []() {cout << "날개를 펼쳐 날아갑니다~\n"; };

    p1.flyBehavior(FlyRockets);
    p2.flyBehavior(FlyWings);

    //FlyRockets fr;
    //FlyWings fw;

    //p1.flyBehavior(&fr);
    //p2.flyBehavior(&fw);

    //FlyRockets* ptrFlyRockets = new FlyRockets();
    //FlyWings* ptrFlyWings = new FlyWings();

    //p1.flyBehavior(ptrFlyRockets);
    //p2.flyBehavior(ptrFlyWings);
    //delete ptrFlyRockets;
    //delete ptrFlyWings;

    return 0;
}



