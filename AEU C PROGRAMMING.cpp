#include<stdio.h>



NO 1 
int main () {
	
	const int number = 123;
	//
	 float cost= 2.54;
	
	printf ("%.2f \n",cost);
	
//

int sum = 99;
printf ("the value of sum is = %d \n", sum);
//

char hobby [10] = "CYCLING";
printf("my hobby is %s \n\n",hobby);
//

printf("=======COVID-19!!!!==========");



}

NO 2 
 int main () { 
int person_age = 30;

int total = 129;

int number; 
(number> -77 && number < 2000 );

int weight;
char gender [5] ;  
(weight < 50 && gender == "f" );


 }
 
 //NO 3
 
 while is not valid because while is reserved word 
8Digit is not valid because a variable cant be started with number.
 COVud19 is valid because it is fulfill a declaration rules
 night market is not valid , because you need to separate the word with underscore or camel style. 

//NO 4 

//int main () { 
// int x = 23 , y = 8 , z = 11;
// double a;
// 
//	y = z * 3 + 6.0 - 9;
//	printf ("the value is %d \n",y);
//	z = z + y/2 * 7 % 3;
//	printf ("the value is %d \n ",z);
//	a = z - y * 2 / 5.0;
//	printf ("the value is %d  \n",a);
//}

 so from the above we declare x = 23 , y = 8 , z =11 as integer 
 and delcare a variable as double 
 from the above mathematic operation we got y value = 30 
  on z mathematic operation it use a new y value from previos operation which is 30 so 
 the value 11 + 105 % 3 = 11 + 0 = 11 
 on a operation it use a new z and y value from previos operation which is 30 and 11 
 the output should be -1 but because a data type is double so the output is a chopped number which is 1

// NO 5

// a) there are 4 element in buttons array
// b) the subscript of the element that contains 12.9 is the third elements
// c) the fisrt one is 5.5 the second one have an assignment operator between array with the index of 4 and 2 so the result is 23.0
//		the third one is also have an asiggnment operator but the operator is operating in the index of array so the result is the array with the index of 3 that have a value which is 12.9

//int main () { 
//	double buttons [] = {5.5, 6.3, 10.0, 12.9, 13.0};
//	printf("%.1f \n",buttons[0]);
//	printf("%.1f \n",buttons[1]);
//	printf("%.1f \n",buttons[2]);
//	printf("%.1f \n",buttons[3]);
//	printf("%.1f \n",buttons[4]);
//	printf("%.1f\n",buttons[4] + buttons [2]);
//	printf("%.1f \n",buttons[5-2]);
//	printf
//}

// d) 

int main(){
    int i;
     double buttons[ ] = {5.5, 6.3, 10.0, 12.9, 13.0};
     for(i=0;i<5;i++){
         printf("%f ,",buttons[i]);
     }
     return 0;
}

// NO6

//PROTOTYPE , HEADER , CALL 

//NO 8 
#include <stdio.h>

//float Calculate(float, float);
//
//int main()
//{
//float k, a = 10.0, b = 0.0;
//k = Calculate(a,b);
//printf("The amount is %.2f\n", k);
//}
//
//float Calculate(float l, float m)
//{
//float n;
//m = 0.2 * l;
//n = m;
//printf("%f\n",m);
//printf("%f\n",n);
//
//return n;
//}

// the type of passing of parameter n is float and the value of is passes from m value
// it will generate output that is "The amount is 2.00" 

//NO 9 



//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int age;
//    char gender[30];
//	printf("Input Gender(lowercase): ");
//    gets(gender);
//    printf("input your age : ");
//    scanf ("%d \n", &age);
//
//    if (strcmp(gender, "male") == 0)
//    {
//    
//	   if(age < 18) {
//       	printf("the fee is RM 5.00 \n");
//	   } else {
//	   	printf("the fee is RM 10.00 \n");
//	   }
//    
//	} else if (strcmp(gender, "male") == 0) {
//		if (age <18) {	
//        printf("the fee is RM 10.00 \n");
//      } else {
//    	printf ("the fee is RM 15.00 \n");
//	}
//  } else {
//  	printf("your input is invalid ");
//  }
//
//    return 0;
//}

#include<stdio.h>
int main () {

	int gender;
    printf("1.female \n");
    printf("2.male \n");
    printf("input number of your gender");
    scanf("%d",&gender);
    int age;
    printf("input your age : ");
    scanf("%d",&age);

    if(gender == 2&& age <= 18)
    {
        printf("fee 5 rm");
    }
    else if(gender == 2 && age >= 18)
    {
        printf("fee 10 rm");
    }
    else if(gender == 1 && age <= 18)
    {
        printf("fee 10 rm");
    }
    else if(gender == 1 && age >= 18)
    {
        printf("fee 15 rm");
    }
    else
    {
        printf("your input is invalid");
    }
}

//  the fee for female in the age of 20 is RM 15.00
// the fee for male in the age of 16 is RM 5.00
// the fee for boy in the age of 18 will be invalid because boy is not declared in the program


//no 8
// if the value of x = 10 and the value of y = 20 
// the first assignment is p = x * y so the value of p = 200 
// the second assignment is s = x + y so the value of s = 30 
// the third assignment is total = s + p * 2 so the value of total = 430
// the fourth assignment p = p + 10 so the value of p = 210
// the fifth assignment total = total - 5 so the value of total = 425

//no 9 

//int main()
//{
//      int a ;
//      int b = 5;
//      int c = 10;
//      for (a = 0; a < b; ++a) 
//              c = c - 1;
//      printf ("c = %d\n", c);
//}                     

// the for program would loop 5 times so the output of c is 5      
 
 int main () {
 	int a =0, b= 5 , c =10;
 	while (a<5){
 		   c = c - 1;
 			printf ("c = %d\n", c);
      a++;
	 }
 }                                                                                                                            
//NO 10 
// there are 5 members 

// the tag is employee_rec

//there are 3 variable 	

// Notation that I will use to access all members is employee_rec emp, if i want to access the name of the employee i can write emp.name

// =============SECTION B===============
//NO 1 
#include <stdio.h>
struct unit {
	
	float price;
	int amount;
		
} unit1,unit2,unit3,unit4;



void printunit(unit price);

int main () {
	int choose;
	unit1.amount = 1;
	unit1.price = 1.5;
	
	unit2.amount = 2;
	unit2.price = 3.0;
	
	unit3.amount = 3;
	unit3.price = 4.5;
	
	unit4.amount = 4;
	unit4.price = 5.0;
	
	printf("input the amount of unit \n");
	printf(" 1 unit \n");
	printf(" 2 unit \n");
	printf(" 3 unit \n");
	printf(" 4 unit \n");
	printf(" 5. end \n ");
	printf("your input is : ");
	scanf("%d", &choose);
		switch (choose) {
			case 1 :
			printf("this is the unit price : \n");
			printunit(unit1);
			break;
			case 2 :
			printf("this is the unit price : \n");
			printunit(unit2);
			break;
			case 3 :
			printf("this is the unit price : \n");
			printunit(unit1);
			break;
			case 4 :
			printf("this is the unit price : \n");
			printunit(unit1);
			break;
		 	default :
			printf("===THANK YOU FOR USING OUR PROGRAM=== ");
			break;
	}
	
}

void printunit(unit price) {
	printf("======================================== \n");
	printf ("unit amount = %d unit \n ", price.amount);
	printf(" unit price = RM %.2f \n", price.price);
	printf("======================================== \n");
}	

//NO 2
#include <stdio.h>
#include <stdlib.h> // For exit() function
//int main() {
//    char x[1000];
//    FILE *fpointer;
//    if ((fpointer = fopen("client1.dat", "r")) == NULL) {
//        printf("Error! Opening File");
//        // Program exits if file pointer returns NULL.
//        exit(1);
//    }
//
//    // reads text until newline is encountered
//    fscanf(fpointer, "%[^\n]", x);
//    printf("Data from the file:\n%s", x);
//    fclose(fpointer);
//
//    return 0;
//}

// NO 3
#include <stdio.h>



int main () {
	int choose, nght, total1,total,tax;
	

		   
	
	while (choose != 4) {
	printf("=========================");
	printf("choose your room type : \n");
	printf(" 1.Deluxe \n ");
	printf(" 2.Luxury \n ");
	printf(" 3.Super Luxury \n ");
	printf(" 4. End Transaction \n");
	printf ("your input is : ");
	scanf ("%d", &choose);
	
	switch (choose) {
		case 1 :
				system("cls");
			 printf("Nights : ");
			 scanf ("%d",& nght);
			 total1 = 750 * nght ;
			 tax = total1 * 0.06;
			 total = total1 + tax;
			 printf ("your room type	: Deluxe \n");
			 printf ("Nights	:	%d \n",nght );
			 printf ("the price for your room is	: RM %d  \n", total);
			
			 break;
		case 2 : 
		
			 printf("Nights : ");
			 scanf ("%d",& nght);
			 total1 = 1500 * nght ;
			 tax = total1 * 0.06;
			 total = total1 + tax;
		 	printf ("your room type	: Deluxe \n");
			 printf ("Nights	:	%d \n",nght );
			 printf ("the price for your room is	: RM %d \n", total);
			 break; 
		case 3 : 
		
			 printf("Nights : ");
			 scanf ("%d",nght);
			 total1 = 2500 * nght ;
			 tax = total1 * 0.06;
			 total = total1 + tax;
			  printf ("your room type	: Deluxe \n");
			 printf ("Nights	:	%d \n",nght );
			 printf ("the price for your room is	: RM %d \n", total);
		
			 break; 
		default : 
			return 0 ;	 
		
	} 
	printf("THANK YOU FOR USING OUR SERVICE\n");
	}
	
	
}


	
