#include <iostream>
#include <string>
using namespace std;

class UnderGradStudents {
public:
	string name;
	string department;

	void warn() {
		cout << "학사경고!\n";
	}
};
class DormStudents {
public:
	string building;
	int roomNumber;

	void warn() {
		cout << "벌점부여!\n";
	}
};
class UnderGrad_DormStudent : public UnderGradStudents, public DormStudents {

};

int main() {
	UnderGradStudents s1;
	UnderGrad_DormStudent us1;
	UnderGrad_DormStudent us2;
	us1.name = "서동현";
	us1.department = "일본어문학과";
	us1.building = "2긱";
	us1.roomNumber = 100;

	s1.name = "김현우";
	s1.department = "컴퓨터공학과";
	s1.warn();

	cout << us1.name + "은 음주와 통금시간을 어겨 ";
	us1.DormStudents::warn();

	// cout << us1;
	// 출력 객체 cout과 사용자 정의 클래스의 객체 us1 사이의 연산자 << 는 오버로드되어 있지 않아 오류 발생
	// 연산자 오버로딩이 필요함

	return 0;
}