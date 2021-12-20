#include <iostream>
#include "Employee.h"

using namespace std;

class Emp {
private:
	int id;
	int salary;
	string name;

public:
	Emp(int id, int maas, string ad) {
		this->id = id;//class i�erisindeki propu i�aret etmek i�in this kullan�r�z
		salary = maas;
		name = ad;
	}
	Emp(int id, int salary) {
		this->id = id;
		this->salary = salary;
		this->name = "Bilgi Yok";
	}
	void show() {
		cout << "Id: " << id << endl;
		cout << "Ad: " << name << endl;
		cout << "Maas: " << salary << endl;
	}
};


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
	cout << "��renci: " << student.name << endl;
	cout << "��renci: " << student2.name << endl;

	//Header
	Employee employee;
	employee.id = 12;
	employee.name = "Mert";
	employee.salary = 10000;
	employee.showInfos();

	//Private
	student.setCity("Izmir");
	student.getCity();

	//Encapsulation
	student.setAge(-3);
	cout << "Yas: " << student.getAge() << endl;

	//Pointer ve Class
	Student* student3 = new Student();
	student3->setCity("Ankara");
	student3->setAge(25);
	student3->getCity();
	cout << student3->getAge() << endl;

	//Constructor
	Emp emp(1, 1000, "Mustafa");
	emp.show();

	//Constructor Overloading
	Emp emp2(1, 1000);

	return 0;
}