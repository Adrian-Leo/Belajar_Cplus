// DIVIDE BY ZERO 

//#include <iostream> 
//#include <conio.h> 
//
//using namespace std; 
// 
//int main() {       
//	double x, y, hasil;
//	x = 10;       
//	cout<<"PEMBAGIAN - EXCEPTION HANDLING C++"<<endl;       
//	cout<<"----------------------------------"<<endl;       
//	cout<<"Bilangan = "<<x<<endl;       
//	cout<<"\nMasukkan bilangan pembagi : ";       
//	cin>>y;       
//	cout<<endl; 
//	     try    {   
//		 	if(y == 0)    {    
//			 throw "Divide by zero"; 
//	  }   
//	  		else    {    
//			  hasil = x / y;    
//			  cout << hasil <<endl;   }  
//			  }  
//			  catch (const char* pesan) {   
//			  cout << pesan << endl;  
//			  }      
//			return 0; 
//			   } 
	

//  VALUE ERROR

//#include <iostream> 
//#include <cstdlib>   
//using namespace std; 
//
//int main(int argc, char *argv[]) {  
//	try  {  
//			int a;  
//			cout<<"Masukkan Nilai = "; 
//	 			if(!(cin>>a))  {  
//		 			throw a;  
//		 		}  
//		 
//		 }  
//			catch(int c)  {  
//		 	cout<<"Input dengan nilai bukan huruf ......."<<endl;  
//			 }  
//			 system("PAUSE");  
//			 return 0; 
//}

//LOGIN SYSTEM

//#include <cstdlib> 
//#include <iostream>   
//
//using namespace std; 
//
//
//static string Log() { 
//	string Pengguna; 
//	cout<<" Masukan username : "; 
//	cin>>Pengguna;
//	return Pengguna; 
//	} 
//	
//static string Log1() { 
//	string pass; 
//	cout<<" Masukkan password: "; 
//	cin>>pass; 
//	return pass; 
//	} 
//	
//static void konfig(string user,string password) { 
//	bool error;
//	error = true; 
//	while (error == true) 
//		{ try 
//			{ while(user!=("tyo")|| password !=("2cc7")) { 
//				cout<<endl; 
//				cout<<" #@$% Login failed "<<endl;
//				cout<<endl;
//				user = Log(); 
//				password = Log1(); 
//														} 
//				error = false; 
//			} 
//				
//				catch (exception e) { 
//				cout<<endl;
//				 cout<<" # user & pasword salah "<<endl; 
//				 cout<<endl; } 
//				 } 
//} 
//
//int main(void) { 
//	string user,password; 
//	user = Log(); 
//	password = Log1();
//	konfig(user,password); 
//	cout<<endl; 
//	cout<<" Anda berhasil Login"<<endl; 
//	cout<<endl;   
//	system("PAUSE"); 
//	return EXIT_SUCCESS; } 
									  
// bad_alloc  Terjadi karena kegagalan dalam membuat alokasi baru 




