
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

	/* KISALTMALAR
	x = 5
	x + = 5  -->  x = x + 5
	x - = 10 -->  x = x - 10
	x * = 5  -->   x = x * 5
	x / = 2  -->   x = x / 2
	x % = 2  -->   x = x % 2

	*/

	/*
	int x = 120;
	int y = 3;
	cout << (x < y);*/

	/*
	==       x == y
	!=       x != y
	>        x > y
	<        x < y
	>=       x >= y
	<=       x <= y
	*/

	/*int toplam;
	bool sonuc;
	bool hesap;
	int z = 23;
	int x = 45;
	int y = 33;
	toplam = x + y;
	hesap = toplam > z;
	cout << hesap;*/

	/*
	  &&         x < 5 && x < 10
	  ||         x > 5 || x < 7
	  !          !(x < 5 && x < 10)
	*/

	//int x = 20;
	//int y = 15;
	//cout << (x < 5 || y>10); // 1

	/*string ad = "Recep";
	string soyad = "Oztekin";
	string tamAd = ad +" "+ soyad;
	cout<< tamAd;*/

	/*
	.APPEND -- > iki ifadeyi birle�tirir.
	*/

	/*string ad = "Recep";
	string soyad = "Oztekin";
	string tamAd = ad.append(soyad);
	cout << tamAd;*/

	/*string x = "20";
	string y = "30";
	string z = x + y;
	cout << z;
	cout << z.length();*/



	// kelime.length() -- > kelime de�i�keninin i�indeki karakter uzunlu�u  
	//string kelime = "Bug�n nas�ls�n�z ?";
	//cout << "Uzunluk:" << kelime.length(); // 1.y�ntem
	//cout << "\n\n";
	//cout << "Uzunluk:" << kelime.size(); // 2.y�ntem








	//string ifade = "Recep Oztekin";
	//cout << ifade[0] << endl; // ifadenin 0.indis de�erini d�nd�r�r. R 
	//cout << ifade[1] << endl; // ifadenin 1.indis de�erini d�nd�r�r. e
	//cout << ifade[2] << endl; // ifadenin 2.indis de�erini d�nd�r�r. c
	//cout << ifade[3] << endl; // ifadenin 3.indis de�erini d�nd�r�r. e
	//cout << ifade[4] << endl; // ifadenin 4.indis de�erini d�nd�r�r. p 
	//cout << ifade[5] << endl; // ifadenin 5.indis de�erini d�nd�r�r.  
	//cout << ifade[6] << endl; // ifadenin 6.indis de�erini d�nd�r�r. O
	//cout << ifade[7] << endl; // ifadenin 7.indis de�erini d�nd�r�r. z
	//cout << ifade[8] << endl; // ifadenin 8.indis de�erini d�nd�r�r. t
	//cout << ifade[9] << endl; // ifadenin 9.indis de�erini d�nd�r�r. e
	//cout << ifade[10] << endl; // ifadenin 10.indis de�erini d�nd�r�r. k
	//cout << ifade[11] << endl; // ifadenin 11.indis de�erini d�nd�r�r. i
	//cout << ifade[12] << endl; // ifadenin 12.indis de�erini d�nd�r�r. n
	//cout << "\n\n";

	//cout << ifade[ifade.length() - 1] << "\n\n"; // --> son karakteri d�nd�r�r --> n
	//cout << ifade.length() - 1 << "\n\n"; // --> son karakterin indis de�erini d�nd�r�r --> 12

	//cout << ifade << endl;
	//ifade[0] = 'T'; // --> 0.indis de�erini T ile de�i�tirdi.
	//cout << ifade << "\n\n"; //--> Tecep Oztekin

	//ifade.at(0) = 'T'; // --> ifadenin 0. indisini T ile de�i�tirip yazd�rd�.
	//cout << ifade[0];





	//string tamAd;
	//cout << "Lutfen ad soyad yazin: ";
	//cin >> tamAd;
	//cout << "Tam Adiniz: " << tamAd <<"\n\n"; //--> Sadece isim al�r bo�luktan sonras�n� almaz. Recep
	//getline(cin, tamAd); //--> Tam ad� almas� i�in getline kullan�l�r ---> Recep oztekin




	//cout << max(5, 10) << "\n"; // --> max de�erini d�nd�r�r
	//cout << min(10, 2) << "\n"; //--> min de�erini d�nd�r�r.


	//cout << sqrt(16) << "\n"; //--> taban karesini verir. --> 4
	//cout << round(2.33) << "\n"; //--> 2'ye yuvarlar.
	//cout << log(10) << "\n"; //--> 10'un logaritmas�n� verir --> 2.3025
	//cout << round(log(10)) << "\n"; //--> 10 un logaritmas�n� tam say�ya yuvarlar --> 2

































	cout << "\n\n";
	return 0;
}
