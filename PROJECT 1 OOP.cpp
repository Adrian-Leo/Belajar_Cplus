//Project GOJEK

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

struct gojek_t {
	string alamat_asal, alamat_tujuan, nama_menu;
	float harga, jarak;
	int jumlah;
		
} goride_1, gofood_1,menu_1,menu_2,menu_3;

string str;

void printgojek(gojek_t gojek);
void printgofood(gojek_t gofood);

//function goride

void go_ride() {
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
	if(goride_1.jarak <= 0) {
		cout << " Error! Jarak Yang Anda Masukkan Tidak Valid " << endl;
	} else if (goride_1.jarak >=0 && goride_1.jarak <=10) {
		cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
		printgojek(goride_1);
		cout << " Total Harga: Rp.10.000 " << endl;
	} else if (goride_1.jarak >=11 && goride_1.jarak <=20) {
		cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
		printgojek(goride_1);
		cout << " Total Harga: Rp.20.000 " << endl;
	} else {
		cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
		printgojek(goride_1);
		cout << " Total Harga: Rp.30.000 " << endl;
	} 
}

//Function Go_Food
void go_food() {
	int pilih, menu1, total, menu2, menu3;
	cout << " ==GOFOOD== \n" << endl;
	cout << " ==Daftar Restaurant== " << endl;
	cout << " 1. Ayam Goreng Pak Gembus " << endl;
	cout << " 2. Bebek Sinjay " << endl;
	cout << " 3. Nasi Goreng Kebon Sirih \n" << endl;
	cout << " Masukkan Pilihanmu: ";
	getline(cin,str);
	stringstream(str) >> pilih;
	switch(pilih)
	{
		case 1:
		cout << " Menu Makanan		Harga" << endl;
		cout << " 1. Ayam Geprek		Rp.20.000 " << endl;
		cout << " 2. Ayam Keju		Rp.30.000 " << endl;
		cout << " 3. Es Jeruk		Rp.7000 " << endl;
		menu_1.harga = 20000;
		menu_2.harga = 30000;
		menu_3.harga = 7000;
		cout << " Masukkan Pilihan Mu: ";
		getline(cin,str);
		stringstream(str) >> menu1;
			 switch(menu1) {
				case 1:
				cout << "\n";
				cout << " Ayam Geprek " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgofood(gofood_1);
				total = menu_1.harga * gofood_1.jumlah;
				cout << " Total Harga: Rp." << total << endl;
				break;
				
				case 2:
				cout << "\n";
				cout << " Ayam Keju" << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgofood(gofood_1);
				total = menu_2.harga * gofood_1.jumlah;
				cout << " Total Harga: Rp." << total << endl;	
				break;
				
				case 3:
				cout << "\n";
				cout << " Es Jeruk " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgofood(gofood_1);
				total = menu_3.harga * gofood_1.jumlah;
				cout << " Total Harga: Rp." << total << endl;
				break;
				
				default:
				cout << " Pesanan Yang Anda Masukkan Tidak Tersedia!! " << endl;
				break;
			}
		break;	
	case 2:
		cout << " Menu Makanan		Harga" << endl;
		cout << " 1. Bebek Goreng	Rp.30.000 " << endl;
		cout << " 2. Bebek Bakar		Rp.35.000 " << endl;
		cout << " 3. Air Mineral		Rp.4000 " << endl;
		menu_1.harga = 30000;
		menu_2.harga = 35000;
		menu_3.harga = 4000;
		cout << " Masukkan Pilihan Mu: ";
		getline(cin,str);
		stringstream(str) >> menu2;
		
				switch(menu2) {
				case 1:
				cout << "\n";
				cout << " Bebek Goreng " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgofood(gofood_1);
				total = menu_1.harga * gofood_1.jumlah;
				cout << " Total Harga: Rp." << total << endl;
				break;
				
				case 2:
				cout << "\n";
				cout << " Bebek Bakar " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgofood(gofood_1);
				total = menu_2.harga * gofood_1.jumlah;
				cout << " Total Harga: Rp." << total << endl;	
				break; 
		
				case 3:
				cout << "\n";
				cout << " Air Mineral " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgofood(gofood_1);
				total = menu_3.harga * gofood_1.jumlah;
				cout << " Total Harga: Rp." << total << endl;
				break;
				
				default:
				cout << " Pesanan Yang Anda Masukkan Tidak Tersedia!! " << endl;
				break;
			}
		break;	
	case 3:
		cout << " Menu Makanan			Harga" << endl;
		cout << " 1. Nasi Goreng Kambing		Rp.35.000 " << endl;
		cout << " 2. Nasi Goreng Keju		Rp.30.000 " << endl;
		cout << " 3. Es Teh Manis		Rp.4000 " << endl;
		menu_1.harga = 35000;
		menu_2.harga = 30000;
		menu_3.harga = 4000;
		cout << " Masukkan Pilihan Mu: ";
		getline(cin,str);
		stringstream(str) >> menu3;	
		
				switch(menu3) {
				case 1:
				cout << "\n";
				cout << " Nasi Goreng Kambing " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgofood(gofood_1);
				total = menu_1.harga * gofood_1.jumlah;
				cout << " Total Harga: Rp." << total << endl;
				break;
				
				case 2:
				cout << "\n";
				cout << " Nasi Goreng Keju " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgofood(gofood_1);
				total = menu_2.harga * gofood_1.jumlah;
				cout << " Total Harga: Rp." << total << endl;	
				break;
				
				case 3:
				cout << "\n";
				cout << " Es Teh Manis " << endl;
				cout << " Masukkan Jumlah: ";
				getline(cin,str);
				stringstream(str) >> gofood_1.jumlah;
				cout << " Masukkan Alamat Tujuan: ";
				getline(cin,gofood_1.alamat_tujuan);
				cout << "\n";
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgofood(gofood_1);
				total = menu_3.harga * gofood_1.jumlah;
				cout << " Total Harga: Rp." << total << endl;
				break;
				
				default:
				cout << " Pesanan Yang Anda Masukkan Tidak Tersedia!! " << endl;
				break;
			}
		break;
	}
}

int main() {
	int pilih;

	
	while (pilih !=3){
	
	cout << endl << endl << endl; 
	cout << " =========WELCOME TO GOJEK========= \n\n";
	cout << " ===Menu GOJEK=== " << "\n\n";
	cout << " === 1. GoRide === " << endl;
	cout << " === 2. GoFood === " << "\n";
	cout << " === 3. Selesaikan Transaks i===" << endl << endl;
	cout << " Masukkan Pilihan Anda: ";
	getline(cin,str);
	stringstream(str) >> pilih;
	cout << "\n";
	
	switch (pilih) 
	{
		case 1:
			go_ride();
		break;
		
		case 2:
			go_food();
		break;
		default : 
		cout << "======== TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI ===============" << endl;
		break;
	}
}
}


void printgojek(gojek_t gojek)
{
	cout << " Alamat Asal:    " << gojek.alamat_asal <<endl;
	cout << " Alamat Tujuan:  " << gojek.alamat_tujuan << "\n";
	cout << " Rentang Jarak:  " << gojek.jarak << " Km " << "\n";

}
void printgofood(gojek_t gofood)
{
	cout << " Alamat Tujuan:  " << gofood.alamat_tujuan << "\n";
	cout << " Jumlah Pesanan: " << gofood.jumlah << endl;
	
}
