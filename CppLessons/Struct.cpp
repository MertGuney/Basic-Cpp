#include <iostream>
using namespace std;

struct Address {
	string city;
	int no;
};

struct Employee {
	int id;
	string name;
	string department;
	Address address;
};

void showEmployee(Employee employee) {
	cout << "id: " << employee.id << endl;
	cout << "name: " << employee.name << endl;
	cout << "department: " << employee.department << endl;
}
void showWithPtr(Employee* employee) {
	employee->id = 30;
	cout << "id: " << employee->id << endl;
	cout << "name: " << employee->name << endl;
	cout << "department: " << employee->department << endl;
}

int main() {
	//Struct
	//1. De�er Tan�mlama �ekli --- nested struct (i� i�e yap�lar)
	Employee employee = { 12,"Mustafa","Bili�im",{"izmir",10} };
	//2. De�er tan�mlama �ekli --- nested struct (i� i�e yap�lar)
	employee.id = 12;
	employee.name = "Mustafa";
	employee.department = "Bili�im";
	employee.address.no = 10;
	employee.address.city = "izmir";
	cout << employee.name;

	//struct ve pointer
	Employee* ptr = &employee;
	cout << ptr->department << endl;

	//struct ve fonksiyon
	showEmployee(employee);
	showWithPtr(&employee);

	//nested struct ve pointer
	//https://www.youtube.com/watch?v=1QbwK-qtm3Q


	return 0;
}