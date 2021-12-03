#include <iostream>
#include <sstream>
#include <string>


using namespace std;


	string str;

struct film_t {
	string judul;
	int tahun;
} action, horror;

void printfilm (film_t film);



int main () { 

	action.judul = "john wadaw";
	action.tahun = 2019;

	cout << "judul film horror" << endl;
	getline (cin,horror.judul);
	cout << "tahun tayang horror" << endl;
	getline (cin, str);
	stringstream (str) >> horror.tahun;
	
	cout << "film action saat ini adalah" << endl;
	printfilm (action);
	cout << "dan horror adalah" << endl; 
	printfilm (horror);
	return 0;
	 
	
}

void printfilm(film_t film){
	cout << film.judul << endl;
	cout << "("<<film.tahun <<")"<< endl;
}
