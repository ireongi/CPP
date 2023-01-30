#include "student.h"
#include "employee.h"

int main()
{
	// Person 클래스 인스턴스화하고 사용
	cout << "Person: " << endl;
	Person person("John");
	person.print();
	cout << endl << endl;
	// Student 클래스 인스턴스화하고 사용
	cout << "Student: " << endl;
	Student student("Mary", 3.9);
	student.print();
	cout << endl << endl;
	// Employee 클래스 인스턴스화하고 사용
	cout << "Employee: " << endl;
	Employee employee("Juan", 78000.00);
	employee.print();
	cout << endl << endl;
	return 0;
}