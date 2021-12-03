#include<iostream>
#include<string>

//INI ABSTRACTION
//using namespace std ;
//
//class car {
//	public : 
//	
//	void sendCar ( string people, string type, string color) {
//		cout << "sending color to " << people << " with type " << type << " and color " << color; 
//	}
//};
//
//
//
//int main () { 
//	car mobil;
//	 mobil.sendCar("leo","BMW", "BLACK");
//	
//	return 0;
//	 
//	
//}

//INI ENCAPSULATION 

using namespace std ;

class mobil {
	private :
	 string brand;
	 string fuel;
	 int door; 
	 string transmission;
	
	public : 
	
		void setBrand(string b) {
			brand = b;
		}
		
		string getBrand () {
			return brand;
		}
		
		void setFuel (string f) {
			fuel = f;
		}
		
		string getFuel () { 
			return fuel; 
		}
		
		void setDoor (int d) {
			door = d; 
		}
		
		int getDoor () {
			return door; 
		}
		
		void setTransmission (string t) { 
			transmission = t;
		}
		
		string getTransmission () { 
			return transmission; 
		}
}; 

int main () {
	mobil komponen;
	
	komponen.setBrand("HONDA CIVIC 2019 HATCHBACK");
	komponen.setDoor(4);
	komponen.setFuel("PERTAMAX");
	komponen.setTransmission("Automatic");
	
	cout << "Brand = " << komponen.getBrand() << endl;
	cout << "Door Amount = " << komponen.getDoor() << endl;
	cout << "Fuel Type = " << komponen.getFuel() << endl; 
	cout << "Transmission Type = " << komponen.getTransmission() << endl; 
}

	
