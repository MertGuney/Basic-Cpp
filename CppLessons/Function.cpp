#include <iostream>
using namespace std;

void selamla() {
	cout << "Merhaba\n";
	cout << "Nas�ls�n?";
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
	selamla();//main �st�nde tan�mlanmal� alt�nda tan�mlanamaz.
	int sayi;
	cout << "sayiyi giriniz: ";
	cin >> sayi;
	factorial(sayi);
	//geri d�n��l� fonksiyon
	topla(1, 2, 3);

	return 0;
}