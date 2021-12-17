#include <iostream>
using namespace std;

void degerDegistir(int af) {
	af = 20;
	cout << "Fonksiyon icindeki deger: " << af << endl;
}
//------------
void degerDegistir(int* ptr) {
	*ptr = 20;
	cout << "Fonksiyon icindeki deger: " << *ptr << endl;
}

int main() {
	//pointer
	//bellekteki baþlangýç adres deðerini iþaret eder
	int a = 5;
	int* ptr = &a;//a'nýn adres deðerini pointera atadýk

	cout << "Deðiþkenin adresi: " << &a << endl;
	cout << "Deðiþkenin adresi: " << ptr << endl;

	cout << "Deðiþkenin deðeri: " << *ptr << endl;//deðiþkene git deðeri al
	*ptr = 7;
	cout << "Deðiþkenin yeni deðeri: " << a << endl;

	//mantýðý
	int a = 10;
	cout << "a degiskeninin degeri: " << a << endl;
	degerDegistir(a);
	cout << "fonksiyon sonrasý a degiskeninin degeri: " << a << endl;
	//---------
	cout << "a degiskeninin degeri: " << a << endl;
	degerDegistir(&a);
	cout << "fonksiyon sonrasý a degiskeninin degeri: " << a << endl;


	//pointer aritmetiði ve arraylerle pointerlar
	int array[] = { 1,2,3,4,5 };
	int* ptr = array;//array baþlangýç adresini pointera atadýk
	cout << ptr << endl;

	string stringArray[] = { "Mustafa","Kemal","Atatürk" };
	string* ptr = stringArray;
	cout << ptr + 1 << endl;
	cout << *(ptr + 1) << endl;// stringArray[1] ile ayný þey ya da ptr[1]


	return 0;
}