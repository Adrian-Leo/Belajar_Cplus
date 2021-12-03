# include <iostream>

using namespace std; 


long long int x;

int factorial(long long int bil)
{
	if (bil==1){
		return 1;}
	else{
	 return ((bil-1)*factorial(bil-1));} 
}


int main () {
	int i;
	
	while (i!=2){
	cout << "||||||||||||||||PRIMALITY TEST|||||||||||||||||||" << endl;
	cout << " 1. Tes Bilangan Prima " << endl;
	cout << " 2. selesai" << endl;
	
	cout << "Masukan Pilihan : ";
	cin >> i;
	cout << endl;
	cout << " pilih = " << i <<endl;
	
	switch (i) {
	
	case 1:
	unsigned int n;
	cout << " masukan angka = "; 
	cin >> n ;
	cout << "|||||||||| CALCULATION ||||||||||" << endl;
	if (n == 0){
		cout << "|||||||||| RESULT ||||||||||" << endl;
		cout << n << " BUKAN BILANGAN PRIMA " << endl;
	} else {
	cout << " nilai faktorial wilson (" << n <<"-1)! = " << n-1 << " ! = "<< factorial(n) << endl;
	
		x = (factorial(n) + 1) % n;
	
	cout << " ( "<<factorial(n) << "+1 ) % " << n << " = " << x << endl;
	
		
		if (x == 0 ) {
			cout << "|||||||||| RESULT ||||||||||" << endl;
			cout <<" ANGKA "<< n << " ADALAH BILANGAN PRIMA " << endl;
		} else {
			cout << "|||||||||| RESULT ||||||||||" << endl;
			cout <<" ANGKA "<< n << " BUKAN BILANGAN PRIMA " << endl; 
		}
	break;
};
	
	default :
	cout << " simulasi selesai";
	
	
}
	


}
}
