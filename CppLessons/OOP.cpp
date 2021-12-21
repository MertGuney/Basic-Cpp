#include <iostream>
#include "Employee.h"

using namespace std;

void StatikTest() {
	static int i = 3;
	cout << "i'nin Degeri: " << i << endl;
	i++;
}

class Gamer {
public:
	static int gamers;
	Gamer() {
		gamers++;
		cout << "Yeni oyuncu olusturuldu" << endl;
	}
	static void showEmp(Emp emp) {
		cout << emp.name << " " << emp.salary << " " << emp.id << endl;
	}
};
int Gamer::gamers = 0;


class Mat {
public:
	static void cube(int x) {
		cout << x * x * x << endl;
	}
	static void Add2(int x) {
		cout << x + 2 << endl;
	}
};

class Emp {
private:
	int id;
	int salary;
	string name;

public:

	Emp(int id, int maas, string ad) {
		this->id = id;//class içerisindeki propu iþaret etmek için this kullanýrýz
		salary = maas;
		name = ad;
	}
	Emp(int id, int salary) {
		this->id = id;
		this->salary = salary;
		this->name = "Bilgi Yok";
	}
	Emp() {
		cout << "Constructor called" << endl;
	}
	~Emp() {
		cout << "Destructor called" << endl;
	}
	void show() {
		cout << "Id: " << id << endl;
		cout << "Ad: " << name << endl;
		cout << "Maas: " << salary << endl;
	}
	friend void friendFuncEmp(Emp emp);
	friend class Gamer;
};
void friendFuncEmp(Emp emp) {
	cout << emp.name << " " << emp.salary << " " << emp.id << endl;
}

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

	//Destructor
	Emp* emp3 = new Emp();
	delete emp3;
	//Destructor ve bellek sýzýntýlarý 
	// https://www.youtube.com/watch?v=AUbINK0oavo

	//Statik deðiþkenler
	//statik deðiþkenler bellekte bir kere oluþur ve sadece o isimle bir tane deðiþken olabilir

	StatikTest();
	StatikTest();
	StatikTest();

	//Statik class üyeleri
	Gamer g1;
	Gamer g2;
	Gamer g3;

	//Statik metodlar
	Mat::cube(3);
	Mat::Add2(20);

	//Friend fonksiyon ve classlar
	Emp emp4(1, 100, "mert");
	friendFuncEmp(emp4);
	Gamer::showEmp(emp4);

	return 0;
}