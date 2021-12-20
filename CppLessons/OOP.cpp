#include <iostream>
#include "Employee.h"

using namespace std;

class Student {
public:
	string name;

	void tellName() {
		cout << "Benim adim " << name << endl;
	}
	void setAge(int a) {
		if (a < 0)
		{
			cout << "Yas 0 dan kucuk olamaz." << endl;
		}
		else {
			age = a;
		}
	}
	int getAge() {
		return age;
	}
	void setCity(string c) {
		city = c;
	}
	void getCity() {
		cout << "Sehir: " << city << endl;
	}
private:
	int age;
	string city;
};

int main() {

	//Class
	Student student;
	Student student2;
	student.name = "Mert";
	student2.name = "Mustafa";
	student.tellName();
	student2.tellName();
	cout << "Öðrenci: " << student.name << endl;
	cout << "Öðrenci: " << student2.name << endl;

	//Header
	Employee employee;
	employee.id = 12;
	employee.name = "Mert";
	employee.salary = 10000;
	employee.showInfos();

	//private
	student.setCity("Izmir");
	student.getCity();

	//Encapsulation
	student.setAge(-3);
	cout << "Yas: " << student.getAge() << endl;

	return 0;
}