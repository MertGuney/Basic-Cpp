#include <iostream>
using namespace std;

void selamla() {
	cout << "Merhaba\n";
	cout << "Nasýlsýn?";
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

	return 0;
}