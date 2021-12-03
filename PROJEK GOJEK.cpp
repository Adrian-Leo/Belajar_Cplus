//Project GOJEK

#include<iostream>
#include<string>
#include<sstream>


using namespace std;

struct gojek_t {
	string alamat_asal, alamat_tujuan, nama_menu, alamat, penyedia_jasa, tempat;
	float harga, jarak, total ;
	int jumlah;
		
} goride_1, gofood_1,menu_1,menu_2,menu_3,goclean_1,goclean_2,goClean;

string str;

void printgojek(gojek_t gojek);
void printgofood(gojek_t gofood);
void printgoclean(gojek_t goclean);




 

//function goride
class go_rides {
	public :
		
		
 	int go_ride() {
	int total;
	int pilih;
	cout << " Masukkan Alamat Kamu: ";
	getline(cin, goride_1.alamat_asal);
	cout << "\n";
	cout << " Masukkan Tujuan Kamu: ";
	getline(cin,goride_1.alamat_tujuan);
	cout << "\n";

	cout << " Masukkan Estimasi Jarak: ";
	getline(cin,str);
	stringstream(str) >> goride_1.jarak;
	cout << "\n";
	goride_1.total = 2000 * goride_1.jarak;
	printgojek(goride_1);
	
	
	
	
}
};
//function goclean
class go_cleans{
	public : 
 int goclean () {
	int pilih,total,goclean_rumah,goclean_mobil;
 	cout<< "Selamat datang di GoClean"<<endl;
	cout<< "\n";
	cout<< "Masukkan Alamat Kamu: ";
	getline(cin,goClean.alamat_tujuan);
	cout<< "\n";
	cout<< "Pilih Jasa:" <<endl;
	cout<< "\n";
	cout<< "1.Bersih Rumah"<<endl;
	cout<< "2.Bersih Mobil"<<endl;
	cout << "pilihanmu : ";
	getline(cin,str);
	stringstream(str) >> pilih;
	switch(pilih) 
	{
		case 1:
			goclean_1.nama_menu = " Bersih Rumah ";
			cout << endl;
			cout << "Waktu Bersih Rumah : " << endl;
			cout<< "\n";
			cout << "1. 1 Jam  Harga = 50000"<<endl;
			cout << "2. 2 Jam  Harga = 100000"<<endl;
			cout << "3. lebih dari 3 jam = 130000";
			goclean_1.harga = 50000;
			goclean_2.harga = 130000;
			cout << endl;
			cout << "Pilihanmu: ";
			getline(cin,str);
			stringstream(str) >> goclean_rumah;
				switch(goclean_rumah){
				
				case 1: 
				goclean_1.penyedia_jasa = " Durasi 1 Jam ";
				cout << "\n";
				cout << "Waktu 1 Jam " << endl;
				total = goclean_1.harga;
				printgoclean(goclean_1);
				
				cout << "============Terimakasih telah menggunakan jasa GoClean============"<<endl;
				break;
				
				case 2:
				goclean_1.penyedia_jasa = " Durasi 2 Jam ";
				cout << "\n";
				cout << "Waktu 2 Jam" << endl;
				total = goclean_1.harga * 2;
				printgoclean(goclean_1);
			
				cout << "============Terimakasih telah menggunakan jasa GoClean============"<<endl;
				break;
				
				case 3 :
				goclean_1.penyedia_jasa = " Durasi 3 Jam ";
				cout << "\n";
				cout << "Waktu 3 Jam" << endl;
				total = goclean_2.harga;
				printgoclean(goclean_1);
			
				cout << "============Terimakasih telah menggunakan jasa GoClean============"<<endl;
				break;
				
				default:
				cout << " Yang anda pilih tidak ada " << endl;
				break;
				}
			break;
		case 2:
			
			goclean_1.nama_menu = " Bersih Mobil  ";
			cout << endl;
			cout<< "\n";
			cout<< "1.Cuci Body = 10000" <<endl;
			cout<< "2.Full Body + Semir Ban = 30000"<<endl;
			goclean_1.harga = 10000;
			goclean_2.harga = 30000;
			cout<< "Pilihanmu: ";
				getline(cin,str);
			stringstream(str) >> goclean_mobil;
				switch(goclean_mobil){
				
				case 1:
				goclean_1.penyedia_jasa = "  Cuci Body ";
				cout << "\n";
				cout << "Anda Milih Cuci Body" << endl;
				total = goclean_1.harga;
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgoclean(goclean_1);
				
				cout << "============Terimakasih telah menggunakan jasa GoClean============"<<endl;
				break;
				
				case 2:
				goclean_1.penyedia_jasa = " Full Body + Semir Ban ";
				cout << "\n";
				cout << "Anda Milih Full Body Mesin" << endl;
				total = goclean_2.harga;
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgoclean(goclean_1);	
				cout << "============Terimakasih telah menggunakan jasa GoClean============"<<endl;
				break;
				
				default:
				cout << " Yang anda pilih tidak ada " << endl;
				break;
			}
		break;
	}
	return 0;
}
};

//Function Go_Food
class go_foods {
	public : 
 int go_food() {
	int pilih, menu1, total, menu2, menu3;
	
	    cout << "\t**********************************************" << endl;
        cout << "\t|                 D A F T A R                |" << endl;
        cout << "\t|             R E S T A U R A N T            |" << endl;
        cout << "\t**********************************************" << endl;
        cout << "\t|                                            |" << endl;
        cout << "\t| 1. AYAM GORENG PAK GEMBUS                  |" << endl;
        cout << "\t| 2. BEBEK SINJAY                            |" << endl;
        cout << "\t| 3. NASI GORENG KEBON SIRIH                 |" << endl;
        cout << "\t**********************************************" << endl;
        cout << endl;
	cout << " Masukkan Pilihanmu: ";
	getline(cin,str);
	stringstream(str) >> pilih;
	cout << endl;
	switch(pilih)
	{
		case 1:
		cout << "\t**********************************************" << endl;
        cout << "\t|                  M E N U                   |" << endl;
        cout << "\t|               M A K A N A N                |" << endl;
        cout << "\t**********************************************" << endl;
        cout << "\t|                                            |" << endl;
        cout << "\t| 1. AYAM GEPREK                 RP.20.000   |" << endl;
        cout << "\t| 2. AYAM KEJU                   RP.30.000   |" << endl;
        cout << "\t| 3. ES JERUK                    RP.7.000    |" << endl;
        cout << "\t**********************************************" << endl;
        cout << endl;
		gofood_1.tempat = " AYAM GORENG PAK GEMBUS ";
		menu_1.harga = 20000;
		menu_2.harga = 30000;
		menu_3.harga = 7000;
			
		cout << " Masukkan Pilihan Mu: ";
		getline(cin,str);
		stringstream(str) >> menu1;
		cout<< endl;
			 switch(menu1) {
				case 1:
				cout << "\n";
				cout << " ==Ayam Geprek== " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				gofood_1.nama_menu = " Ayam Geprek  " ;
				gofood_1.total = menu_1.harga * gofood_1.jumlah;
				printgofood(gofood_1);
				
				break;
				
				case 2:
				cout << "\n";
				cout << " ==Ayam Keju== " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				gofood_1.nama_menu = " Ayam Keju " ;
				gofood_1.total = menu_1.harga * gofood_1.jumlah;
				printgofood(gofood_1);
					
				break;
				
				case 3:
				cout << "\n";
				cout << " ==Es Jeruk== " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				gofood_1.nama_menu = " Es Jeruk " ;
				gofood_1.total = menu_1.harga * gofood_1.jumlah;
				printgofood(gofood_1);
				break;
				
				default:
				cout << " Pesanan Yang Anda Masukkan Tidak Tersedia!! " << endl;
				break;
			}
		break;	
		case 2:
		cout << "\t**********************************************" << endl;
        cout << "\t|                  M E N U                   |" << endl;
        cout << "\t|               M A K A N A N                |" << endl;
        cout << "\t**********************************************" << endl;
        cout << "\t|                                            |" << endl;
        cout << "\t| 1. BEBEK GORENG                RP.30.000   |" << endl;
        cout << "\t| 2. BEBEK BAKAR                 RP.35.000   |" << endl;
        cout << "\t| 3. AIR MINERAL                 RP.4.000    |" << endl;
        cout << "\t**********************************************" << endl;
        cout << endl;
		gofood_1.tempat = " BEBEK SINJAY ";
		menu_1.harga = 30000;
		menu_2.harga = 35000;
		menu_3.harga = 4000;
		cout << " Masukkan Pilihan Mu: ";
		getline(cin,str);
		stringstream(str) >> menu2;
		
				switch(menu2) {
				case 1:
				cout << "\n";
				cout << " ==Bebek Goreng== " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				gofood_1.nama_menu = " Bebek Goreng " ;
				gofood_1.total = menu_1.harga * gofood_1.jumlah;
				printgofood(gofood_1);
			
				break;
				
				case 2:
				cout << "\n";
				cout << " ==Bebek Bakar== " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				gofood_1.nama_menu = " Bebek Bakar " ;
				gofood_1.total = menu_1.harga * gofood_1.jumlah;
				printgofood(gofood_1);	
				break; 
		
				case 3:
				cout << "\n";
				cout << " ==Air Mineral== " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				gofood_1.nama_menu = " Air Mineral " ;
				gofood_1.total = menu_1.harga * gofood_1.jumlah;
				printgofood(gofood_1);
			
				break;
				
				default:
				cout << " Pesanan Yang Anda Masukkan Tidak Tersedia!! " << endl;
				break;
			}
		break;	
		case 3:
		cout << "\t**********************************************" << endl;
        cout << "\t|                  M E N U                   |" << endl;
        cout << "\t|               M A K A N A N                |" << endl;
        cout << "\t**********************************************" << endl;
        cout << "\t|                                            |" << endl;
        cout << "\t| 1. NASI GORENG KAMBING         RP.35.000   |" << endl;
        cout << "\t| 2. NASI GORENG KEJU           RP.30.000   |" << endl;
        cout << "\t| 3. ES TEH MANIS                RP.4.000    |" << endl;
        cout << "\t**********************************************" << endl;
        cout << endl;
		gofood_1.tempat = " NASI GORENG KEBON SIRIH ";
		menu_1.harga = 35000;
		menu_2.harga = 30000;
		menu_3.harga = 4000;
		cout << " Masukkan Pilihan Mu: ";
		getline(cin,str);
		stringstream(str) >> menu3;	
		
				switch(menu3) {
				case 1:
				cout << "\n";
				cout << " ==Nasi Goreng Kambing== " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				gofood_1.nama_menu = " Nasi Goreng Kambing " ;
				gofood_1.total = menu_1.harga * gofood_1.jumlah;
				printgofood(gofood_1);
			
				break;
				
				case 2:
				cout << "\n";
				cout << " ==Nasi Goreng Keju== " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				gofood_1.nama_menu = " Nasi Goreng Keju " ;
				gofood_1.total = menu_1.harga * gofood_1.jumlah;
				printgofood(gofood_1);
					
				break;
				
				case 3:
				cout << "\n";
				cout << " ==Es Teh Manis== " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				gofood_1.nama_menu = " Es Teh Manis " ;
				gofood_1.total = menu_1.harga * gofood_1.jumlah;
				
				printgofood(gofood_1);
				
				break;
				
				default:
				cout << " Pesanan Yang Anda Masukkan Tidak Tersedia!! " << endl;
				break;
			}
		break;
	}
	return 0;
}
};

void Menu()
{
	

		
        cout << "\t**********************************************" << endl;
        cout << "\t|            W E L C O M E   T O             |" << endl;
        cout << "\t|                G O J E K                   |" << endl;
        cout << "\t**********************************************" << endl;
        cout << "\t|                                            |" << endl;
        cout << "\t| 1. GORIDE                                  |" << endl;
        cout << "\t| 2. GOFOOD                                  |" << endl;
        cout << "\t| 3. GOCLEAN                                 |" << endl;
        cout << "\t| 4. LIHAT RIWAYAT TRANSAKSI                 |" << endl;
    	cout << "\t| 5. SELESAIKAN TRANSAKSI                    |" << endl;
        cout << "\t|                                            |" << endl;
        cout << "\t**********************************************" << endl;
        cout << endl;
}
void goridemenu()
{
		system("cls");
		cout << "\t|********************************************|" << endl;
        cout << "\t|            W E L C O M E   T O             |" << endl;
        cout << "\t|               G O  R I D E S               |" << endl;
        cout << "\t**********************************************" << endl;
        cout << "\n\n";
}
void gofoodmenu()
{
		system("cls");
		cout << "\t|********************************************|" << endl;
        cout << "\t|            W E L C O M E   T O             |" << endl;
        cout << "\t|               G O  F O O D                 |" << endl;
        cout << "\t**********************************************" << endl;
        cout << "\n\n";
}
void gocleanmenu()
{
		system("cls");
		cout << "\t|********************************************|" << endl;
        cout << "\t|            W E L C O M E   T O             |" << endl;
        cout << "\t|              G O  C L E A N                |" << endl;
        cout << "\t**********************************************" << endl;
        cout << "\n\n";
}
void riwayatTransaksi () {
		system("cls");
		int riwayat;
		cout << "||||||||||||||||||||||LIHAT RIWAYAT TRANSAKSI|||||||||||||||||||||||\n";
		cout << "1. Go Ride" << endl;
		cout << "2. Go Food" << endl;
		cout << "3. Go Clean" << endl;
		cout << "pilih riwayat : " ;
			getline (cin,str);
			stringstream(str) >> riwayat;
			cout << "\n";
			switch (riwayat) {
				
				case 1 : 
				printgojek(goride_1);
				break;
				
				case 2 : 
				printgofood(gofood_1);
				break;
				
				case 3 : 
				printgoclean(goclean_1);
				break;
			}
		
}




int main() {
	
	
	int pilih;

	
	while (pilih !=5){	
	start :	
	Menu();
	
	cout << " Masukkan Pilihan Anda: ";
	getline(cin,str);
	stringstream(str) >> pilih;
	cout << "\n";
	
	switch (pilih) 
	{
		case 1:
			
			goridemenu();
			go_rides a;
			cout << a.go_ride(); 
					 
		break;
		
		case 2:
			
			gofoodmenu();
			go_foods b;
			cout << b.go_food();
		break;
		
		case 3:
		
			gocleanmenu();
			go_cleans c;
			cout << c.goclean(); 
		break;

		case 4: 
			
			riwayatTransaksi();
		break;
		
		default : 
		cout << "======== TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI ===============" << endl;
		break;
		
	}
}

}


void printgojek(gojek_t gojek)
{
		cout << "\t**********************************************" << endl;
        cout << "\t|                G O  R I D E                |" << endl;
        cout << "\t|                R E C E I P T               |" << endl;
        cout << "\t**********************************************" << endl;
		cout << "   	Alamat Asal:    " << gojek.alamat_asal <<endl;
		cout << "   	Alamat Tujuan:  " << gojek.alamat_tujuan << "\n";
		cout << "    	Rentang Jarak:  " << gojek.jarak << " Km " << "\n";
		cout << "    	Total Harga: 	" << gojek.total << endl;
		

}
void printgofood(gojek_t gofood)
{
		cout << "\t**********************************************" << endl;
        cout << "\t|                G O  F O O D	            |" << endl;
        cout << "\t|                R E C E I P T               |" << endl;
        cout << "\t**********************************************" << endl;
		cout << " Alamat Tujuan		:  		" << gofood.alamat_tujuan << "\n";
		cout << " Nama Tempat 		: 		" << gofood.tempat << endl;
		cout << " Nama Menu 		:		" << gofood.nama_menu << endl;
		cout << " Jumlah Pesanan	: 		" << gofood.jumlah << endl;
		cout << " Total Harga 		: Rp 	" <<gofood.total <<endl ;
	
}
void printgoclean(gojek_t goclean)
{
		cout << "\t**********************************************" << endl;
        cout << "\t|                G O  C L E A N	            |" << endl;
        cout << "\t|                R E C E I P T               |" << endl;
        cout << "\t**********************************************" << endl;
	cout << "Alamat yang dituju	: " << goClean.alamat_tujuan <<endl;
	cout << "Menu				: " << goclean.nama_menu << endl;
	cout << "Jasa				: " << goclean.penyedia_jasa << endl ;
}
