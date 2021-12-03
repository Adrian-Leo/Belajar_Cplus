#include<iostream>

using namespace std;

namespace nilai {
	void fullname () {
		
		string firstName;
		string lastName;
		
		cout << "masukan FirstName : " ;
		cin >> firstName; 
		cout << "masukan LastName : ";
		cin >> lastName; 
		cout << "your fullname is = " << firstName << " " << lastName << endl ; 
	}
	
	int hasil (int a, int b  ) {
	
		return a*b; 
	}
}


int main () {
	nilai::fullname();
	cout << "hasil perkalian = " <<nilai::hasil(5,4) << endl;
}

