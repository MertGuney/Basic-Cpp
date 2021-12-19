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
	//1. Deðer Tanýmlama þekli --- nested struct (iç içe yapýlar)
	Employee employee = { 12,"Mustafa","Biliþim",{"izmir",10} };
	//2. Deðer tanýmlama þekli --- nested struct (iç içe yapýlar)
	employee.id = 12;
	employee.name = "Mustafa";
	employee.department = "Biliþim";
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