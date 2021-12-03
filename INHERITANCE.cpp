#include<iostream>

using namespace std;
// BELUM KELAR
//class rumus {
//	protected :
//		int panjang,lebar;
//	public :
//		void luas (int a, int b){
//			panjang = a;
//			lebar = b; 
//		}
//};
//
//class persegi_panjang : public rumus {
//	int area () {
//		return (panjang * lebar);
//	}
//};
//
//int main () {
//	int  a;
//	int  b;
//	int hasil;
//	rumus persegiPanjang;
//	persegi_panjang nilai;
//	
//	cout << "masukan panjang" << endl;
//	cin >> a;
//	cout << "masukan lebar" << endl;
//	cin >> b;
//	
//	persegiPanjang.luas(a,b);
//	cout << 
//	return 0;
//	
//}

class shape {
	public :
		void setWidth (int w) {
			width = w;
		}
		void setLength (int l){
			length =l;
		}
	
	protected : 
		int width;
		int length; 
};

class biaya {
	public : 
		int getCost (int cost) {
			return cost * 1000;
		}
		
};

class area : public shape,public biaya { 
	public :
		int getArea () {
			return (width * length);
		}
		
};

int main (void) { 
	area rumus;

	int x,y;
	int cost;
	

	
	cout << "masukan panjang = ";
	cin >> x; 
	rumus.setLength(x);
	cout << endl;
	cout << "masukan lebar = ";
	cin >> y;
	rumus.setWidth(y);
	cout << endl;
	cout << "luas persegi panjang = " << rumus.getArea() << endl;
	
	cost = rumus.getArea();
	
	cout << "biaya cat = " << rumus.getCost(cost);
	return 0;
	
}
