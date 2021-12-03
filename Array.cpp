#include <iostream>

using namespace std;
/*
int main () {
	int x [3]= {5,1,2}, total = 0;
	int i;
	for (i=0;i<3;i++){
		total += x[i];
	}
	cout << "total = " << total;
} */ // nilai total akan looping, dimulai dari 0

/*
int main () {
	int sepatu [2] [2]={
	{10,11},
	{12,13}
	
};

cout << " baris 0 dan kolom 0 = " << sepatu [0][0] << endl;

cout << " baris 0 dan kolom 1 = " << sepatu [0][1] << endl;

cout << " baris 1 dan kolom 0 = " << sepatu [1][0] << endl;

cout << " baris 1 dan kolom 1 = " << sepatu [1][1] << endl;

//tugas cari yang dimensi 3 X 3 

} 
*/

/*
int main () {
	int a[4];
	int i; 
	
	for (i=0;i<4;i++){
		 a[i] = 1;
	}
	for (i=0;i<4;i++){
		cout << a[i] << endl;
	}
	return 0;
}*/

/*
int main () {
	int a [2][2];
	int i,j;
	int x=0;
	
	for (i=0;i<2;i++){
		for (j=0;j<2;i++){
			a[i][j]=x;	
			cout << a[i][j]<< endl;
			x++;
		}
	}
	return 0;
}*/

void printfunc( int my_arg[] , int i) {
	for (int n =0; n<i ; n++ )
	cout << my_arg[n] << endl;
}
int main () { 
int array [] = {1,2,3,4,5,6,7,8,9};
printfunc(array,3 );
return 0 ;
}
