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
	//bellekteki ba�lang�� adres de�erini i�aret eder
	int a = 5;
	int* ptr = &a;//a'n�n adres de�erini pointera atad�k

	cout << "De�i�kenin adresi: " << &a << endl;
	cout << "De�i�kenin adresi: " << ptr << endl;

	cout << "De�i�kenin de�eri: " << *ptr << endl;//de�i�kene git de�eri al
	*ptr = 7;
	cout << "De�i�kenin yeni de�eri: " << a << endl;

	//mant���
	int a = 10;
	cout << "a degiskeninin degeri: " << a << endl;
	degerDegistir(a);
	cout << "fonksiyon sonras� a degiskeninin degeri: " << a << endl;
	//---------
	cout << "a degiskeninin degeri: " << a << endl;
	degerDegistir(&a);
	cout << "fonksiyon sonras� a degiskeninin degeri: " << a << endl;


	//pointer aritmeti�i ve arraylerle pointerlar
	int array[] = { 1,2,3,4,5 };
	int* ptr = array;//array ba�lang�� adresini pointera atad�k
	cout << ptr << endl;

	string stringArray[] = { "Mustafa","Kemal","Atat�rk" };
	string* ptr = stringArray;
	cout << ptr + 1 << endl;
	cout << *(ptr + 1) << endl;// stringArray[1] ile ayn� �ey ya da ptr[1]


	return 0;
}