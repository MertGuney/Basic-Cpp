// CppLessons.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//std::cout << "Hello World!\n";

	// << -> Output(cout) için >> -> Input(cin) için kullanýlýr 

	//int=32, float=3.2, double=4.421, char='A', bool=true-false
	int y = 32;
	cout << "a degeri : " << y << endl;

	// +,-,*,/ ->Mat Operatörleri  a++ == a+=1->Arttýrma , a-- == a-=1->Azalatma Operatörleri 
	y++;
	cout << "a yeni deger :" << y << endl;

	//cin
	int x;
	cout << "Bir Sayi Girin : ";
	cin >> x;
	cout << "Girdiginiz Sayi: " << x << endl;

	//cin birden fazla
	int a, b, c;
	cout << "3 Sayi Giriniz:\n";
	cin >> a >> b >> c;
	cout << "Toplamlari :" << a + b + c << endl;

	//string
	string str = "Bir stringdir.";
	cout << "String: " << str << endl;

	//if-else
	string password = "mg";
	string input;
	cout << "Parola: ";
	cin >> input;
	if (input == password)
	{
		cout << "Hoþgeldiniz";
	}
	else {
		cout << "Parola Yanlýþ";
	}

	//else if
	int a, b;
	string islem;

	cout << "Hesap Makinesi\n";
	cout << "1)Toplama\n";
	cout << "2)Çýkarma\n";
	cout << "3)Çarpma\n";
	cout << "4)Bölme\n";
	cout << "islem seciniz: ";
	cin >> islem;
	if (islem == "1")
	{
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Toplamlarý: " << a + b << endl;
	}
	else if (islem == "2")
	{
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Farklarý: " << a - b << endl;
	}
	else if (islem == "3")
	{

		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Çarpýmlarý: " << a * b << endl;
	}
	else if (islem == "4")
	{

		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Bolumleri: " << a / b << endl;
	}
	else
	{
		cout << "Gecersiz islem...";
	}

	//Mantýksal Operatörler 
	// Or || ->En az bir durum doðruysa doðru diðer durumlarda yanlýþ
	// And && -> En az bir durum yanlýþsa yanlýþ diðer durumlarda doðru
	// Not ! -> Yanlýþ iþlemi doðruya doðru iþlemi yanlýþa çevirir
	string sys_user = "mert";
	string sys_pw = "123";
	string usern;
	string pw;

	cout << "Kullanici Adiniz: ";
	cin >> usern;
	cout << "Sifre: ";
	cin >> pw;
	if (sys_user == usern && sys_pw == pw)
	{
		cout << "Hosgeldin " << usern << endl;
	}
	else if (sys_user != usern && sys_pw != pw)
	{
		cout << "Kullanici adi veya parola hatali";
	}
	else {
		cout << "Kullanici yok";
	}


	//While
	int i = 0;
	while (i < 10)
	{
		cout << "i: " << i << endl;
		i++;
	}

	//Do While
	string parola = "123";
	string input;
	do
	{
		cout << "Parola: ";
		cin >> input;
		if (input != parola)
		{
			cout << "Parola yanlis\n";
		}
	} while (input != parola);
	cout << "Parola Dogru\n";

	//for (i = 0; kosul; islem)

	int faktoriyel = 1;
	int sayi;
	cout << "Sayý: ";
	cin >> sayi;
	for (int i = 1; i <= sayi; i++)
	{
		faktoriyel *= i;
		cout << faktoriyel << endl;
	}
	cout << "Faktoriyel :" << faktoriyel << endl;

	//Break:döngüde break çalýþtýðýnda döngü anýnda sona erer.
	//Continue: döngüde continue çalýþtýðýnda döngü altýndaki komutlarý çalýþtýrmadan baþa döner.

	int i = 0;
	while (i < 10)
	{
		if (i == 5)
		{
			break;
		}
		cout << "i: " << i << endl;
		i++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 3 || i == 5)
		{
			continue;
		}
		cout << "i: " << i << endl;
	}

	//Arrays
	int array[3];//array 3 adet deðer taþýsýn;
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;

	//dizi boyutu bulma
	int toplamBoyut = sizeof(array);
	int turBoyut = sizeof(*array);
	int diziBoyut = toplamBoyut / turBoyut;
	cout << "Dizi Boyutu :" << diziBoyut << endl;

	int array2[] = { 10,20,30,40 };
	for (int i = 0; i <= (diziBoyut - 1); i++)
	{
		cout << i << ". index: " << array[i] << endl;
	}

	//Çok boyutlu arrays
	int matris[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	cout << matris[0][1] << endl;
	cout << matris[2][2] << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << i << ".satir" << j << ".sutun degeri : " << matris[i][j] << endl;
		}
	}
	//kullanýcýdan alma
	int matris[3][3];
	cout << "Matris degerlerini giriniz:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matris[i][j];
		}
	}
	cout << "Matris: ";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << i << ".satir " << j << ".sutun degeri : " << matris[i][j] << endl;
		}
	}

	//switch case
	int islemDeger;
	cout << "islemi giriniz: ";
	cin >> islemDeger;
	switch (islemDeger)
	{
	case 1:
		cout << "1. islemi sectiniz...\n";
		break;
	case 2:
		cout << "2. islemi sectiniz...\n";
		break;
	case 3:
		cout << "3. islemi sectiniz...\n";
		break;
	case 4:
		cout << "4. islemi sectiniz...\n";
		break;
	default:
		cout << "gecersiz islem...\n";
		break;
	}

	//const -> sabit deðer tanýmlama
	const int i = 32;
	cout << "Sabit deger: " << i << endl;
	return 0;// Added by me
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
