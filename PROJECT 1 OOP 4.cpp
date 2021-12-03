//Project GOJEK

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

struct gojek_t {
	string alamat_asal, alamat_tujuan, nama_menu, alamat, penyedia_jasa;
	float harga, jarak;
	int jumlah;
		
} goride_1, gofood_1,menu_1,menu_2,menu_3,goclean_1,goclean_2,goClean;

string str;

void printgojek(gojek_t gojek);
void printgofood(gojek_t gofood);
void printgoclean(gojek_t goclean);






//function goride

void go_ride() {
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
	
	cout << "masukan metode pembayaran " << endl;
	cout << "1. cash" << endl;
	cout << "2. GoPay" << endl;
	cout << "pilihanmu : ";
	getline(cin,str);
	stringstream(str) >> pilih;
	switch(pilih) 	{
		case 1 : 
	
			cout << "pembayaran dengan cash " << endl;
				
		break;
		
		case 2 : 
			cout << "pembayaran dengan goPay " << endl; 
			
		break;
	}
	cout << "\n";
}
//function goclean

void goclean () {
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
				cout << "\n";
				cout << "Waktu 1 Jam " << endl;
				total = goclean_1.harga;
				printgoclean(goclean_1);
				cout << "Jasa bersih rumah" << endl;
				cout << "Total Biaya: Rp." << total << endl;
				cout << "Terimakasih telah menggunakan jasa GoClean"<<endl;
				break;
				
				case 2:
				cout << "\n";
				cout << "Waktu 2 Jam" << endl;
				total = goclean_1.harga * 2;
				printgoclean(goclean_1);
				cout << "Jasa bersih rumah" << endl;
				cout << "Total Biaya: Rp." << total << endl;	
				cout << "Terimakasih telah menggunakan jasa GoClean"<<endl;
				break;
				
				case 3 :
				cout << "\n";
				cout << "Waktu 3 Jam" << endl;
				total = goclean_2.harga;
				printgoclean(goclean_1);
				cout << "Jasa bersih rumah" << endl;
				cout << "Total Biaya: Rp." << total << endl;	
				cout << "Terimakasih telah menggunakan jasa GoClean"<<endl;
				break;
				
				default:
				cout << " Yang anda pilih tidak ada " << endl;
				break;
				}
			break;
		case 2:
			cout << endl;
			cout<< "Opsi Bersih Mobil" << endl;
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
				cout << "\n";
				cout << "Anda Milih Cuci Body" << endl;
				total = goclean_1.harga;
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgoclean(goclean_1);
				cout << "Jasa Cuci Mobil" << endl;
				cout << "Total Biaya: Rp." << total << endl;
				cout << "Terimakasih telah menggunakan jasa GoClean"<<endl;
				break;
				
				case 2:
				cout << "\n";
				cout << "Anda Milih Full Body Mesin" << endl;
				total = goclean_2.harga;
				cout << "=========== Pesanan Anda Sedang Di Proses!! =========== " << endl;
				printgoclean(goclean_1);
				cout << "Jasa Cuci Mobil" << endl;
				cout << "Total Biaya: Rp." << total << endl;	
				cout << "Terimakasih telah menggunakan jasa GoClean"<<endl;
				break;
				
				default:
				cout << " Yang anda pilih tidak ada " << endl;
				break;
			}
		break;
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


void riwayatTransaksi () {
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
				printgojek(goclean_1);
				break;
				
				case 2 : 
				printgofood(gofood_1);
				break;
				
				case 3 : 
				printgoclean(goclean_1);
				break;
			}
		
}
//class gopay
class goPay {
	
	public :
		 
		void Setmoney (int m) {
			money = m;
		}
		
	 
	
	protected : 
		int money; 
	 
};
 

class topUp : public goPay {
	public :
		int saldo;  
		int getCost () {
			return saldo += money;
		}
	
};

class bayar : public goPay {
	public : 
		int saldo;
		int bayar;
		int getBayar () {
			return saldo -= bayar;
		}
};

void gopays () {
		topUp masukan;
				int x;
				int cost;
				
				cout << "masukan nominal TOP UP  : " ;
				cin >> x ;
				masukan.Setmoney(x);
				cout <<"saldo anda saat ini Rp " << masukan.getCost();
}

int main() {
	
	
	int pilih;

	
	while (pilih !=6){
	
	cout << endl;
	cout << " =========WELCOME TO GOJEK========= \n\n";
	cout << " ===Menu GOJEK=== " << "\n\n";
	cout << " === 1. GoRide === " << endl;
	cout << " === 2. GoFood === " << "\n";
	cout << " === 3. GoClean ===" <<endl;
	cout << " === 4. Top Up Gopay ===" <<endl;	
	cout << " === 5. Lihat Riwayat Transaksi ===" << endl ;
	cout << " === 6. Selesaikan Transaksi ===" << endl << endl;
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
		
		case 3:
			goclean();
		break;
		
		case 4 : 
			gopays();
		
		break;
		
		case 5: 
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
	cout << " Alamat Asal:    " << gojek.alamat_asal <<endl;
	cout << " Alamat Tujuan:  " << gojek.alamat_tujuan << "\n";
	cout << " Rentang Jarak:  " << gojek.jarak << " Km " << "\n";

}
void printgofood(gojek_t gofood)
{
	
	cout << " Alamat Tujuan:  " << gofood.alamat_tujuan << "\n";
	cout << " Jumlah Pesanan: " << gofood.jumlah << endl;
	
}
void printgoclean(gojek_t goclean)
{
	cout << "Alamat yang dituju: " << goClean.alamat_tujuan <<endl;
}
