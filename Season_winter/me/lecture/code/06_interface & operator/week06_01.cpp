/// 다중상속
#include <iostream>
#include <string>
using namespace std;

class UnderGradStudents{  ///부모 클래스 1
public:
    string name;
    string department; ///학과

    void warn(){
        cout << "학사 경고!\n";
    }
};

class DormStudents{   ///부모 클래스 2
public:
    string building;
    int roomNumber; ///카멜 표기법
    string department; ///학과


    void warn(){
        cout << "벌점부여!\n";
    }
};

class UnderGrad_DormStudent : public UnderGradStudents, public DormStudents {/// 다중 상속은 쉼표로, 상속은 public임 원래

};

int main()
{

    UnderGradStudents s1;

    UnderGrad_DormStudent us1;
    UnderGrad_DormStudent us2;
    us1.name = "조희령"; ///캡슐화 아니라 좋은 방법은 아님
    us1.UnderGradStudents::department = "소프트웨어융합공학과"; ///변수명 겹쳐서 부모클래스 지정
    us1.building = "2긱";
    us1.roomNumber = 100;

    s1.name = "권구준";
    s1.department = "소융";
    s1.warn();

//    us1.warn(); /// error 발생-죽음의 다이아몬드.. 어떤 부모꺼 써야함 ?

    cout << us1.name + "은 음주와 통금시간 어겨 ";
    us1.DormStudents::warn(); /// 부모 클래스 중 어떤 warn을 선택할지 명시

//    cout << us1;
/// 출력 객체 cout과 사용자 정의 클래스의 객체 us1 사이의 연산자 << 는 오버로드되어 있지 않아 오류 발생 ///프로그래머가 만든 사용자 정의 클래스, 인식 못함
/// 연산자 오버로딩이 필요함(어떻게 출력할지 지정)

    return 0;
}