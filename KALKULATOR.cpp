#include <iostream>
#include <string>

using namespace std ;




int perkalian (int a, int b)
{

	int hasilKali;

	hasilKali = a*b; 
	return hasilKali;
}

int pembagian (int c, int d) {
	
	
	
	int hasilBagi;

	hasilBagi = c*d; 
	return hasilBagi;
}



int main () {

int pilih;
int x;
int y;
int hasilK;
int hasilB;

while (pilih != 3 ) {

 
cout << "1. Perkalian" <<"\n";
cout << "2. pembagian " << "\n" << endl;
cout << "3. Selesai" << "\n" << endl;
cout << " Pilih no 1 atau 2  atau 3 " << "\n";

cin >> pilih ;
cout << endl;




switch  (pilih ) {

case 1 : 
	cout << "Masukan angka pertama" <<  endl;
	cin >> x;
	cout << "masukan angka kedua" << endl;
	cin >> y; 
	hasilK = perkalian ( x, y) + 1;
	cout << "hasil perkalian =  " << hasilK << endl;
break;

case 2 :
	cout << "Masukan angka pertama" <<   endl;
	cin >> x;
	cout << "masukan angka kedua" <<  endl;
	cin >> y; 
	hasilB = pembagian (x, y);
	cout << "hasil pembagian =  " << hasilB << endl;
break;

default : 
	cout << "proses selesai ";
return 0;
}
}
}

