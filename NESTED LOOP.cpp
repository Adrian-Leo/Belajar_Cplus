#include <iostream>
#include <stdio.h>
using namespace std;

//int main(){
//    for(int i = 0; i < 10; i++){
//        for(int j = 0; j < 10; j++){
//            printf("Perulangan ke (%d, %d)\n", i, j);
//        }
//    }
//
//    return 0;
//}

//int main (){
//	for (int row =1; row <=10 ; row++){
//		for (int column = 1 ; column <= 5 ; column++){
//			cout << "*";
//		}
//		cout << endl;
//	}
//}

//int main (){
//	for (int row =1; row <=10 ; row++){
//		for (int column = 1 ; column <= 5 ; column++){
//			cout << row << "*" << column << "=" << row *column << "\t";
//		}
//		cout << endl;
//	}
//}

int main () {
	//n =baris
	//i =kolom
	int n,i,j;
	printf ("how many row you want for the pyramid : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		for (j=1; j<= 2*n-1 ;j++){
			if (j >= n-(i-1) && j <= n+(i-1)){
				printf("*") ;
			}
			else 
				printf(" ");	
			
			
		}
		printf("\n");
	}
	return 0;
}
