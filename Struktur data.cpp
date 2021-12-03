#include <iostream>
#include <sstream>
#include <string>


using namespace std;

struct film_t {
	string judul;
	int tahun;
} action1,action2, horror1,horror2;

void printfilm (film_t film);



int main () { 
	int pilih,input,ngeliat;
	
	cout << "||||MAINKAN||||" << endl;
	cout << "1. INPUT FILM" << endl;
	cout << "2. LIHAT FILM" << endl;
	
	cin >> pilih;
	
	cout << endl;
	
	switch (pilih) {
		case 1: 
		cout <<"Pilih genre" << endl;
		cout << "1.action " << endl;
		cout << "2.horror " << endl;
		 	switch (input) { 
		 	case 1 : 
		 	cout << "masukan film action"<< endl ;
			getline (cin,action1); 
		 	break; 
		 	case 2 : 
		 	cout << "masukan tahun " << endl; 
			getline (cin,tahun1 )
			break; 
			default ; 		 
		 	}	
		break;
		case 2: 
		cout <<"Pilih genre" << endl;
		cout << "1.action " << endl;
		cout << "2.horror " << endl;
		
		
	}
	
	
	string str;

	action1.judul = "john wick";
	action1.tahun = 2019;
	
	horror2.judul = "amnesia";
	horror2.judul= 2010;

	cout << "judul film horror" << endl;
	getline (cin,horror1.judul);
	cout << "tahun tayang horror" << endl;
	getline (cin, str);
	stringstream (str) >> horror1.tahun;
	
	cout << "judul film action" << endl;
	getline (cin,action2.judul);
	cout << "tahun tayang action" << endl;
	getline (cin, str);
	stringstream (str) >> action2.tahun;
	
	
	
	cout << "film action saat ini " << endl;
	printfilm (action1);
	cout << "dan horror " << endl; 
	printfilm (horror1);
	return 0;
	 
	
}

void printfilm(film_t film){
	cout << film.judul ;
	cout << "("<<film.tahun <<")"<< endl;
	
	cout << film.judul  ;
	cout << "("<<film.tahun <<")"<< endl;
	
}

