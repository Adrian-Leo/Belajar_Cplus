# include <stdio.h>

#include <sstream>
using namespace std;

int main (){
 
// int code;
// printf("masukan kode \n");
// scanf("%d",code);
// switch (code) {
// 	case 1 :
// 		printf( " makan ");
// 	break; 
// 	default : 
// 		printf( " minum ");
// 
// }
// return 0 ;*/
// 


//int a; 
// a=1 ;
// 
// while (a=1){
// 
// cout << "rachman gblk" << endl;
// a++;
//}

//int b;
//
//while (b<=10){
//	cin >> b;
//	b += 2; 
//	cout << b ;
//}


//int n , a=1 , b=0;
//printf("masukan nilai \n");
//scanf("%d", &n );
//printf("\n total bilangan dari 1 sampai %d adalah ",n);
//while (a<=n){
//	b += a;
//	a++;
//}
//
//printf("%d",b);
//return 0;


//i = baris  j = kolom 

int n,i,j;
printf("masukan jumlah n = ");
scanf("%d",&n);
printf ("\n");
for (i=1;i<=n;i++){
	for (j=1; j<=i;j++) {
		printf("*");
	} printf("\n");
	
}
return 0;
 }
 
 

