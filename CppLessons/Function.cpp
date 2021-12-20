#include <iostream>
using namespace std;

void selamla() {
	cout << "Merhaba\n";
	cout << "Nasýlsýn?";
}
void selamla(string name) {
	cout << "Merhaba " << name << endl;
}
void factorial(int sayi) {
	int faktorial = 1;
	for (int i = 0; i <= sayi; i++)
	{
		faktorial *= 1;
	}
	cout << "Faktoriyel: " << faktorial << endl;
}
int topla(int a, int b, int c) {
	return a + b + c;
}
void printArray(int a[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
}

int main()
{
	//Function
	selamla();//main üstünde tanýmlanmalý altýnda tanýmlanamaz.
	int sayi;
	cout << "sayiyi giriniz: ";
	cin >> sayi;
	factorial(sayi);
	//geri dönüþlü fonksiyon
	topla(1, 2, 3);

	//arrayler ve fonksiyonlar
	int a[] = { 1,2,3,4,5 };
	printArray(a, 5);

	//function overloading
	selamla("Mert");

	return 0;
}