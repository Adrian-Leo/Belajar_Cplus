//Latihan
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct film_t
{
	string judul, sutradara;
	int tahun, durasi;


}action1, action2, action3, horror1, horror2, horror3;

void printfilm (film_t film);

string str;

int main ()
{
	


	int pilih, genre;
	
	while (pilih != 3 ) {
	
	action1.judul = "IP MAN";
	action1.tahun = 2012;
	action1.sutradara = "XIAO";
	action1.durasi =120;
	
	action2.judul = "Spiderman";
	action2.tahun = 2008;
	action2.sutradara = "Steve jobs";
	action2.durasi =124;
	
	horror1.judul = "Exorcist";
	horror1.tahun = 2013;
	horror1.sutradara = "Zuckenberg";
	horror1.durasi =124;
	
	horror2.judul = "Nun";
	horror2.tahun = 2019;
	horror2.sutradara = "Toby";
	horror2.durasi =90;
	
	cout << "||||||||||||||||||||||||||||||||||||||KATALOG FILM||||||||||||||||||||||||||||||||||||| \n";
	cout << "1.Input Film\n";
	cout << "2.Lihat Film\n";
	cout << "3.Selesai\n";
	cout << "||||||||||||||||||||||||||||||||||||||KATALOG FILM||||||||||||||||||||||||||||||||||||| \n";
	cout << "Menu ke : ";
	getline (cin,str);
	stringstream(str) >> pilih;
	cout << "\n"<< "\n";

	
	switch (pilih)
	{
		case 1:
			cout << "|||||||||||||||||||||||||||||||||||GENRE||||||||||||||||||||||||||||||||||||||| \n";
			cout << "1.Horror\n";
			cout << "2.Action\n";
			cout << "|||||||||||||||||||||||||||||||||||GENRE||||||||||||||||||||||||||||||||||||||| \n";
			cout << " Pilih Genre: ";
			getline (cin,str);
			stringstream(str) >> genre;
			cout << "\n";
			switch (genre)
			{
				case 1:
					cout << "\n";
					cout << "Judul Film Horror: ";
					getline (cin, horror3.judul);
					cout << "Tahun Tayang: ";
					getline (cin,str);
					stringstream(str) >> horror3.tahun;
					cout << "Input Sutradara Film: ";
					getline (cin, horror3.sutradara);
					cout << "Durasi Film /menit: ";
					getline (cin,str);
					stringstream(str) >> horror3.durasi;
					break;
					
				case 2:
					cout << "\n";
					cout << "Input Judul Film Action: ";
					getline (cin, action3.judul);
					cout << "Tahun Tayang: ";
					getline (cin,str);
					stringstream(str) >> action3.tahun;
					cout << "Input Sutradara Film: ";
					getline (cin, action3.sutradara);
					cout << "Durasi Film /menit: ";
					getline (cin,str);
					stringstream(str) >> action3.durasi;
					break;
			}
			break;
			
		case 2:
			cout << "||||||||||||||||||||||LIHAT FILM|||||||||||||||||||||||\n";
			cout << "1.Action\n";
			cout << "2.Horror\n";
			cout << "Pilih Genre: ";
			getline (cin,str);
			stringstream(str) >> genre;
			cout << "\n";
			switch (genre)
			{
				case 1:
					cout << "\n";
					cout << "\n";
					cout << "Film Action saat ini: \n\n";
					printfilm (action1);
					printfilm (action2);
					printfilm (action3);
					break;
					
				case 2:
					cout << "\n";
					cout << "\n";
					cout << "Film Horror saat ini: \n\n";
					printfilm (horror1);
					printfilm (horror2);
					printfilm (horror3);
					break;
			}
			
			
			break;
			
		default:
			cout << "Proses selesai";
	}	
}
}


void printfilm (film_t film)
{
	cout << "Judul Film:				"<< film.judul <<"\n";
	cout << "Tahun Rilis:				"<< "(" << film.tahun << ") \n";
	cout << "Sutradara:					"<< film.sutradara << "\n";
	cout << "Durasi Film:				"<< film.durasi << " Menit\n";
	cout << "|||||||||||||||||||||||||FILM PILIHAN||||||||||||||||||||||||||||||||\n";
}
