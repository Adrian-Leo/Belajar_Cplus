#include <iostream>


# include <string>

# include <sstream>

using namespace std;

void tampilTeks (){
	cout << "||||| MENGHITUNG VOLUME KUBUS |||||" << endl;
	
}

int volKubus (int sisi)
 { 
	int vol;
	vol = sisi*sisi*sisi;
	return vol;

}

int main () {
	int vol;
	int x;
	tampilTeks ();
	cout << "masukan  sisi = " ;
	cin >> x;
	vol = volKubus (x);
	cout << " volume kubus =  "<< vol << endl;
	
	
}


//void tampilString (string bahasa, int n ) {
//	int i; 
//	for (i=1; i<=n; i++) {
//		cout << bahasa << endl;
//	}
//}
//
//int main () {
//	tampilString("bahasa C++", 3);
//}




