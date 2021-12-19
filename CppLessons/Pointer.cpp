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
//referans i�in
void degerDegistirRef(int& ref) {
	ref = 20;
}
//pointerlar ve const
void printArray(const int* ptr1, const int* ptr2) {
	for (; ptr1 != ptr2; ptr1++)
	{
		cout << "Eleman: " << *ptr1 << endl;
	}
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

	//referanslar
	int x = 10;
	int& ref = x;//referans tan�mlama
	ref++;
	cout << "x'in yeni degeri: " << x << endl;
	degerDegistirRef(x);
	cout << "x'in yeni degeri: " << x << endl;

	//pointerlar ve const (pointer�n g�sterdi�i yer de�i�ebilir ama g�sterdi�i yerin de�eri de�i�mez)
	int array[] = { 10,20,30,40,50,60,70,80,90,100 };
	printArray(array + 2, array + 7);

	



	return 0;
}