# include <stdio.h>
#include <sstream>

using namespace std;

int main () {

const float SUM = 117.00;
printf ("%f",SUM);
return 0;
}

int main () {
	 float index = 3.678;
	
	printf ("%.4f",index);
	return 0;
}

int main () { 
	printf("makan \n");
	printf("minum");
}

int main () {
	int postcode;
	printf("masukan kode = ");
	scanf("%d",&postcode);
	printf("postcode = %d",postcode);
	return 0; 
}

int main () {
	int a,b =10;
	printf ("%d dan %d",a,b);
}

int main () {
	int myVariable ;
	myVariable = 0;
}

int main () { 
	float k,y,x;
	k=8;
	y=20;
	x= (k + 12) / (y-18);
	
	printf ("hasil dari 8 + 12 / 20 - 18 = %f",x);
	return 0 ;
	
}


int main()
{
      int i, k, n = 10 ;
      i = 2, k = 20;
      while (i < n)
      {
           if (i  == 8)
              k = k * 2;
           i += 2;
      }
      printf(" k is %d\n ", k);
      printf(" The program stops at %d. ", i );
  }
  
int main () { 
	int i,k =20 ,n=10;
	for (i=2 ; i <= n; i++) {
		 if (i  == 8)
		 
        	k = k * 2;
           i += 2;
       
	}
	 printf(" k is %d\n ", k);
      printf(" The program stops at %d. ", i );
}

int main()
        {     
               int c[5] = {12,3,4,5,16};
               int a, b = 0;
                         for (a = 0;  a < 6 ; ++a)
              {
                       b = b + c [a];
                       printf ("%d\n", b);
              }
                 }

int main ( ) { 

int income, tax,x,y,z,h,q,persentase1,persentase2,persentase3; 

 printf ("jumlah pemasukan = ");
 scanf ("%d", &income);
 
 if (income <= 5000) {
 	x = income * 0;
 	y = income - x ;
 	printf("your annual income = %d \n",income);
 	printf("your tax = %d \n",x);
 	printf("your net income = %d  \n", y);
 	
	 } else if (income > 5000 && income <= 12000) {
	 	x = income * 0.11;
	 	y = income - x ;
	 	printf("your annual income = %d \n",income);
 		printf("your tax = %d \n",x);
 		printf("your net income = %d  \n", y);
	 
	
	 } else if (income > 12000 && income <=20000)  {
	 	x = 12000;
	 	persentase1 = x * 0.11;
	 	y = income - x;
	 	persentase2 = y * 0.15;
	 	z = persentase1 + persentase2;
	 	h = income - z;
	 	
	 	printf("your annual income = %d \n",income);
 		printf("your tax = %d \n",z);
 		printf("your net income = %d  \n", h);
	 	
	 	
		 
	 } else  {
	 	x = 12000;
	 	persentase1 = x * 0.11;
	 	y = 8000;
	 	persentase2 = y * 0.15;
	 	z = income - (x+y);
	 	persentase3 = z * 0.2;
	 	h = persentase1 + persentase2 + persentase3;
	 	q = income - h;
	 	
	 	printf("your annual income = %d \n",income);
 		printf("your tax = %d \n",h);
 		printf("your net income = %d  \n", q);
	 }
}



	
	int calcWHr (int waist, int hip) {
		
		printf("%d / %d = %d",waist,hip,waist/hip);
		
	}
	
int main () {
	
	int whr ,waist , hip;

	printf("input waist measurement = ");
	scanf("%d",& waist);
	printf("input hip measurement = ");
	scanf("%d",& hip);
	whr = calcWHr (waist, hip);

	
}
