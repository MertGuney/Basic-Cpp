#include "Employee.h" //kendimiz olu�turdu�umuz i�in �ift t�rnak i�inde

void Employee::showInfos() {
	cout << "Id: " << Employee::id << endl;
	cout << "Ad: " << Employee::name << endl;
	cout << "Maas: " << Employee::salary << endl;
}