#include <iostream>
#include <string>
#include <memory>
#include <numbers> // C++20
using namespace std;
class Soldier {
private:
	int n;
public:
	Soldier(int n) : n(n) {
		cout << getN() << "생성\n";
	};
	virtual ~Soldier() {
		cout << getN() << "소멸\n";
	};
	int getN()const {
		return n;
	}
};
int main() {
	cout << numbers::pi << '\n';

	weak_ptr<Soldier> w;
	{
		//shared_ptr<Soldier> a(new Soldier(77));
		shared_ptr<Soldier> a = make_shared<Soldier>(77);
		w = a;
		cout << a.use_count() << '\n';
		cout << w.lock()->getN() << '\n';
		if (!w.expired())
			cout << w.lock()->getN() << '\n';
	}
	//if(!w.expired())
	//	cout << w.lock()->getN() << '\n';


	//shared_ptr<Soldier> a(new Soldier(77));
	//cout << a.use_count() << '\n';
	//shared_ptr<Soldier> b(a);
	//weak_ptr<Soldier> w(a);
	//{
	//	auto c(b);
	//	cout << c->getN() << '\n';
	//	cout << a.use_count() << '\n';
	//	cout << c.use_count() << '\n';
	//}
	//cout << w.lock()->getN() << '\n';
	//cout << a->getN() << '\n';
	//cout << a.use_count() << '\n';
	//cout << b.use_count() << '\n';
	//cout << a << '\n';
	//cout << b->getN() << '\n';
	//cout << b << '\n';

	//unique_ptr<Soldier> a(new Soldier(77));
	//cout << a->getN() << '\n';
	//cout << a << '\n';
	//a.reset(new Soldier(5));
	//cout << a->getN() << '\n';
	//cout << a << '\n';

	//unique_ptr<Soldier> a(new Soldier(77));
	//unique_ptr<Soldier> b(a.release());
	//cout << b->getN() << '\n';
	//cout << b << '\n';

	//Soldier* a = new Soldier(77);
	//Soldier* b = a;
	//cout << b->getN() << '\n';
	//delete b;
	//cout << b << '\n';
	//cout << a << '\n';

	//cout << b->getN() << '\n';
	//cout << a->getN() << '\n';
	////delete a;  // double free
	return 0;
}

