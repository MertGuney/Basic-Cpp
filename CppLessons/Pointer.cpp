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
//referans için
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

	//referanslar
	int x = 10;
	int& ref = x;//referans tanýmlama
	ref++;
	cout << "x'in yeni degeri: " << x << endl;
	degerDegistirRef(x);
	cout << "x'in yeni degeri: " << x << endl;

	//pointerlar ve const (pointerýn gösterdiði yer deðiþebilir ama gösterdiði yerin deðeri deðiþmez)
	int array[] = { 10,20,30,40,50,60,70,80,90,100 };
	printArray(array + 2, array + 7);

	//Dinamik bellek yönetimi new delete
	int* ptr = new int;//new-> bir tane int tutacak yer ayýr bu ptr orayý göstersin --- new int[5]-> 5 tane int yer ayýr
	delete ptr;//ptr nin gösterdiði bütün alanlarý bellekten kaldýr

	//Null pointer, Dangling referans ve pointerlar
	int* ptr = nullptr;//bu ptr bellekte herhangi bir yeri iþaret etmesin
	ptr = new int;
	*ptr = 10;
	delete ptr;

	*ptr = 10;//bellekte artýk olmayan bir yere deðer yazmaya çalýþýyoruz(dangling ref) hata alýrýz


	return 0;
}