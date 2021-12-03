//program pertama

#include <iostream>


# include <string>

# include <sstream>

using namespace std;

int convertString (string); 




//CONTOH STRING 
/*	string mystring = "ini adalah string";
	cout << mystring;
*/

/*
	//OPERASI ARITMATIKA:
	int a, b;
	int result;
	
	//proses:
	a = 5;
	b = 2;
	a = a + 1;
	result = a - b;
	const int angka = 100;
	

	
	//print out hasilnya:
	cout << "HASIL =" ; 
	cout << result;
	
	//terminate program:
	return 0;
*/	
//NUMERIK
/*	
	int a,b,c;
	
	a= 10;
	b= 5;
	c= 2;
	b=6;
	a=c ;
	c=4 ;
	  
	cout << " a = ";
	cout << a << endl;
	cout << "b =";
	cout << b << endl;
	cout << " c = ";
	cout << c << endl;
	return 0;
	
*/
//OPERASI ARITMATIKA
/*
	int a = 19, b = 5;
	float c;
	
	c = a + b;
	cout << " a + b = "<< c <<"\n";
		c = a - b;
	cout << " a - b = "<< c << endl;
		c = a * b;
	cout << " a * b = "<< c << endl;
		c =(float) a / b;
	cout << " a / b = "<< c << endl;
		c = a % b;
	cout << " a % b = "<< c << endl;
*/
//INCREMENT DAN DECREMENT
/*	
	
	int a = 5 ,  b =10;
	
	++a;
	cout << "nilai a sekarang " << a << endl;
	--b;
	cout << "nilai b sekarang " << b << endl;
	return 0 ; 
*/
//INPUT ANGKA MANUAL
/*	
	int i;
	cout << "masukan angka: ";
	cin >> i;
	cout << " Angka yang dimasukkan adalah " << i;
	cout << " dan jika dibagi 2 menjadi " << (float)i/2 << ".\n";
	return 0;
*/
//INPUT STRING MANUAL
/*	
	string nama,asal ;
	cout << "nama anda? " ; 
	getline (cin,nama );
	cout << " Hai " << nama <<"\n"; 
	cout << " Darimana Anda berasal ";
	getline (cin, asal);
	cout << " AKU BERASAL DARI " << asal << " juga!\n ";
	return 0;
*/
	
//Konversi Angka Ke String
	/*
	int angka = 75;
	string hasil;
	
	ostringstream convert;
	convert << angka; 
	hasil =convert.str();
	cout << hasil << endl;
	*/
//Konversi String Ke Angka 

/*
	float hasil;
	string text = "12";
	
	istringstream convert (text);
	if (!(convert >> hasil)) {
		hasil = 0;
	}
	
	cout << hasil << endl;
	return 0;
*/	

//FUNGSI IF ELSE

/*
int angka;
cout << "masukan angka = ";
cin >> angka;
if (angka > 0)
{
	cout << " anda memasukan nilai positif" << angka << "\n";
	}
		else if (angka <0)
	{
		cout << "anda memasukan nilai negatif" << angka << "\n";
	}  else 
	{
		cout <<"anda memasukan 0"<< angka << "\n";
	}
	return 0;

*/


//FUNGSI SWITCH CASE
/*
int pilih ; 
float s,r,volume,luas, phi=3.14 ;


cout << "MENU" << "\n";
cout << "\n";
cout << "1. Menghitung volume kubus " <<"\n";
cout << "2. Menghitung luas lingkarang " << "\n" << endl;
cout << " Pilih no 1 atau 2 " << "\n";

cin >> pilih ;
cout << endl;

switch (pilih) {
	case 1 :
		cout << "masukan sisi kubus" << "\n";
		cin >> s;
		cout << endl; 
		volume = s * s * s;
		cout << " volume kubus = " << volume <<"\n";
	break;
	case 2 : 
		cout << " jari- jari lingkaran " << "\n";
		cin >> r; 
		cout << endl;
		luas = phi * r * r;
		cout << " luas lingkaran = " << luas ;
	break;
	default : 
		cout << "angka yang anda masukan tidak valid " << "\n";
		
	return 0;
	
}
*/
//FUNGSI LOOPING FOR
/*
	int i;
	for (int i=1; i <=5; i++){
	cout << "Selamat belajar" << endl;
	}
*/	 

// FUNGSI WHILE 

/*
int i=5;
while (i>0) {
	cout << "halo world"<< endl;
	i--;
	
}
return 0;
*/
/*
int x=3;
while (x <=5){
	
	cout << x << endl;
	x++;
	}
*/
// FUNGSI LOOPONG DO-WHILE


/*
	string nama;
	char status;
	
	do{
		cout << "Masukan namamu = ";
		cin >> nama;
		cout << "Namammu adalah = " << nama << endl;
		
		cout << "Lagi [y/n]?";
		cin >> status;
	} while (status == 'Y' || status =='y');
	cout << "keluar dari loop" << endl;
	return 0;
*/

//	int x=3;
//	
//	do {
//		cout << x << endl;
//		x++;
//	} while (x<=2);

//cout << !1 << endl ;
//cout << !0 << endl;

//void cetak();
//
//int main()
//{
//
//	int a;
//	a=10;
//	cout <<"nilai a = "<< a << endl;
//	cetak();
//}
//void cetak(){
//
//	int a;
//		cout <<"nilai a = "<< a << endl;
//
//}

//cout <<(1 &&1 )<< endl ;
//cout << (1 && 0) << endl;

//int x;
//cout << x << endl;

//cout <<"!1" << !1 << endl;
//cout << "!0" << !0 << endl;
//
//int x,y,z =10;
//cout << x << endl;
//cout << y << endl;
//cout << z << endl;
//
//return 0;	
//}

//int contoh(){
//	static int a = 10;
//	a = a +10;
//	return a ;
//}
//int main() {
//	int x; 
//	x = contoh();
//	cout << "nilai "<< x << endl;  
//	
//}
//

void cetak();
void main()
{
	int a;
	a=10;
	cout << "nilai = "<< a << endl; 
	}	
void cetak() {
	int al 
	cout << "nilai a = "<< a << endl;
}


