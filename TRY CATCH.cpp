#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <exception>
//PEMBAGI 0 
//using namespace std;
//int main()
//{
// double x, y, hasil;
// x = 10;
// cout<<"PEMBAGIAN - EXCEPTION HANDLING C++"<<endl;
// cout<<"----------------------------------"<<endl;
// cout<<"Bilangan = "<<x<<endl;
// cout<<"\nMasukkan bilangan pembagi : ";
// cin>>y;
// cout<<endl;
//		 try
//			{
//				if(y == 0)
//					{
//					throw "Divide by zero";
//					}	else
//						{
//					hasil = x / y;
//					cout << hasil <<endl;
//						}
//			}
//				catch (const char* pesan)
//				 {
//				cout << pesan << endl;
//				}
//			 return 0;
//}


//INPUTAN HARUS ANGKA
//using namespace std;
//int main(int argc, char *argv[])
//{
//	try
//		{
//			int a;
//			cout<<"Masukkan Nilai = ";
//			if(!(cin>>a))
//			{
//			throw a;
//			}
//		}
//	catch(int c)
//	{
//	cout<<"Input dengan nilai bukan huruf ......."<<endl;
//	}
//	system("PAUSE");
//	return 0;
//}

//VALIDASI LOGIN
//using namespace std;
//static string Log()
//	{
//		string Pengguna;
//		cout<<" Masukan username : ";
//		cin>>Pengguna;
//		return Pengguna;
//	}
//static string Log1()
//	{
//		string pass;
//		cout<<" Masukkan password: ";
//		cin>>pass;
//		return pass;
//	}
//static void konfig(string user,string password)
//{
//		bool error;error = true;
//		while (error == true)
//	{
//	try
//		{
//		while(user!=("tyo")|| password !=("2cc7"))
//		{
//			cout<<endl;
//			cout<<" #@$% Login failed "<<endl;
//			cout<<endl;
//			user = Log();
//			password = Log1();
//		}
//			error = false;
//		}
//			catch (exception e)
//		{
//			cout<<endl;
//			cout<<" # user & pasword salah "<<endl;
//			cout<<endl;
//		}
//	}
//}
//
//int main(void)
//{
//string user,password;
//user = Log();
//password = Log1();
//konfig(user,password);
//cout<<endl;
//cout<<" Anda berhasil Login"<<endl;
//cout<<endl;
//system("PAUSE");
//return EXIT_SUCCESS;
//}

//BAD ALLOC
//using namespace std;
//int main () {
// try
// {
// int* myarray= new int[10000000000];
// }
// catch (exception& e)
// {
// cout << "Standard exception: " << e.what() << endl;
// }
// return 0;
//}


//CASTING
//using namespace std;
//int main() {
// int x,y,mod;
// float hasil;
// cout<<"Contoh penggunaan / dan %\n\n";
// cout<<"Masukkan angka pertama (x) = ";cin>>x;
// cout<<"Masukkan angka kedua (y) = ";cin>>y;
// hasil=x/y;
// mod=x%y;
// cout<<"\nHasil pembagian = "<<hasil;
// cout<<"\nSisa hasil bagi = "<<mod;
//return 0;
//}

//CASTING IMPLISIT
//using namespace std;
//int main()
//{
// int x = 10; // integer x
// char y = 'a'; // character c
// // y dikonversi menjadi nilai ASCII nya
// // nilai 'a' adalah 97
// x = x + y; 
// // x secara implisit dikonversi menjadi float
// float z = x + 1.0;
// cout << "x = " << x << endl
// << "y = " << y << endl
// << "z = " << z << endl;
// return 0 ;
//}

//CASTING EXPLISIT
using namespace std;
int main()
{
 double x = 1.8;
 // Explicit konversi dari double menjadi int
 int sum = (int)x + 1;
 cout << "Sum = " << sum;
 return 0;
} 


