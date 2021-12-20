#include "Employee.h" //kendimiz oluþturduðumuz için çift týrnak içinde

void Employee::showInfos() {
	cout << "Id: " << Employee::id << endl;
	cout << "Ad: " << Employee::name << endl;
	cout << "Maas: " << Employee::salary << endl;
}