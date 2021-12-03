
#include <iostream>

// OVERLOADING
using namespace std;

//class data {
//	public : 
//		void print(int x) {
//			cout << "CETAK INT : " << x << endl; 
//		}
//		void print(double y){
//			cout << "CETAK FLOAT : " << y << endl;
//		}
//		void print(string z) {
//			cout << "CETAK STRING : " << z << endl;
//		}
//};
//
//int main () {
//	data pd; 
//	pd.print(10);
//	pd.print(2.5);
//	pd.print("makan");
//
//return 0;
//}

using namespace std; 

class kelasUtama {
	public : 
	virtual void perkenalan () {
	cout << "ini kelas utama" << endl;
}
};

class kelasTurunan : public kelasUtama {
	public : 
	void perkenalan () 	{
	cout << "ini kelas turunan" << endl;
}
};

int main() { 
	kelasTurunan d; 
	kelasUtama & a = d;
	a.perkenalan();
}
