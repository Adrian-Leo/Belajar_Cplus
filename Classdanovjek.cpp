#include <iostream>
using namespace std;

//class CRectangle {
//	int x,y;
//	public:
//		void set_values (int,int);
//		int area () { return (x*y);}
//};
//
//void CRectangle::set_values(int a,int b){
//	x = a;
//	y = b;
//}
//
//int main()
//{
//	int a,b;
//	CRectangle rect;
//	cout << "masukan A = " ;
//	cin >> a;
//	cout << "masukan B = " ;
//	cin >> b;
//	rect.set_values(a,b);
//	cout << "area: " << a << " x " <<  b << "= " << rect.area() ;
//	return 0;
//}


//CLASS DAN 2 OBJEK 
//
//class CRectangle {
//	int x,y;
//	public:
//		void set_values (int,int);
//		int area () { return (x*y);}
//};
//
//void CRectangle::set_values(int a,int b){
//	x = a;
//	y = b;
//}
//
//int main()
//{
//	CRectangle rect, rectb; // -> Rect dan rect b merupakan OBJEK
//	rect.set_values(3,10);
//	rectb.set_values(4,6);
//	cout << "rect area: " << rect.area() << endl;
//	cout << "rectb area: " << rectb.area() << endl;
//	return 0;
//}
	

//KONSTRUKTOR NOTE : PAKE NAMA CLASS ITU SENDIRI
//	
//	class CRectangle {
//	int x,y;
//	public:
//		CRectangle (int,int);
//		int area () { 
//		return (x*y);
//		}
//};
//
//	CRectangle::CRectangle(int a,int b){
//	x = a;
//	y = b;
//}
//
//int main()
//{
//	
//	CRectangle rect(3,10);
//	CRectangle rectb(4,6);
//	cout << "rect area: " << rect.area() << endl;
//	cout << "rectb area: " << rectb.area() << endl;
//	return 0;
//}


//DESTRUKTOR
//	
//	class CRectangle {
//	int x,y;
//	public:
//		CRectangle (int,int);
//		~CRectangle ();
//		int area () { 
//		return (x*y);
//		}
//};
//
//	CRectangle::CRectangle(int a,int b){
//	x = a;
//	y = b;
//}
//	CRectangle::~CRectangle(){
//		cout << "BERHENTIII" << endl;
//	}
//
//
//int main()
//{
//	
//	CRectangle rect(3,10);
//	CRectangle rectb(4,6);
//	cout << "rect area: " << rect.area() << endl;
//	cout << "rectb area: " << rectb.area() << endl;
//	return 0;
//}

// OVERLOADING = FUNGSI SAMA DENGAN PARAMETER YANG BERBEDA

class printData {
	public : 
		void print (int i ) {
			cout <<"integer : " << i << endl;  
		}
		
		void print (double f) {
			cout << "desimal : " << f << endl;	
		}
		
		void print (string s){
			cout << "string : " << s << endl;
		}
		
};


int main () {
	printData pd; // -> OBJEK 
	pd.print(10);
	pd.print(22.5);
	pd.print("makan string ");

	
	return 0 ;
}

// KONSTRUKTOR OVERLOADING

//	class CRectangle {
//	int x,y;
//	public:
//		CRectangle (int,int);
//		CRectangle ();
//		int area (void) { 
//		return (x*y);
//		}
//};
//
//	CRectangle::CRectangle(int a,int b){
//	x = a;
//	y = b;
//}
//	CRectangle::CRectangle(){
//		x=5;
//		y=4;
//	}
//
//
//int main()
//{
//	
//	CRectangle rect;
//	CRectangle rectb(3,5);
//	cout << "rect area: " << rect.area() << endl;
//	cout << "rectb area: " << rectb.area() << endl;
//	return 0;
//}

//// OVERIDING
//	class kelas_utama {
//		public : 
//			virtual void perkenalan (){
//				cout << "saya dari kelas utama";
//			}
//	};
//	
//	class kelas_turunan : public kelas_utama {
//		public :
//			void perkenalan() {
//				cout << "kelas turunan" << endl;
//			}
//	};
//	
//	class kelas_lagi : public kelas_utama {
//		public : 
//			void perkenalan () {
//				cout << "kelas lagi";
//			}
//	};
//	
//	int main () {
//		kelas_turunan d;
//		kelas_lagi b;
//		kelas_utama& a = d;
//		
//		a.perkenalan();
//		b.perkenalan();
//		return 0; 
//	}


//	class kelas_utama {
//		public : 
//			virtual void perkenalan (){
//				cout << "saya dari kelas utama"<< endl;
//			}
//	};
//	
//	class kelas_turunan : public kelas_utama {
//		public :
//			void perkenalan() {
//				cout << "kelas turunan" << endl;
//			}
//	};
//	
//	class kelas_lagi : public kelas_utama {
//		public : 
//			void perkenalan () {
//				cout << "kelas lagi";
//			}
//	};
//	
//	int main () {
//		kelas_utama * objek;
//		kelas_turunan d;
//		kelas_lagi b;
//		kelas_utama a;
//		
//		a.perkenalan();
//		
//		objek =&d;
//		objek ->perkenalan();
//		objek =&b;
//		objek ->perkenalan();
//		
//		return 0; 
//	};
