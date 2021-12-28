/*******************************************************************************************************************
							PROGRAM LAYANAN BANK SAMPAH JUMPAI ASRI LESTARI
Tanggal		: 04/12/2021
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 0
Deskripsi	: Membuat variabel, fungsi login_admin untuk aktivasi program dengan strcmp, dan fungsi utama

Tanggal		: 06/12/2021
Oleh		: Putu Agus Yoga Budhi Darma (2105551011)
Revisi		: 01
Deskripsi	: Membuat fungsi welcome, login user, buat akun user dan menambahkan fungsi utama

Tanggal		: 07/12/2021
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 02
Deskripsi	: Menambahkan fungsi utama

Tanggal		: 12/12/2021
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 03
Deskripsi	: Membuat menu transaksi

Tanggal		: 12/12/2021
Oleh		: Putu Agus Yoga Budhi Darma (2105551011)
Revisi		: 04
Deskripsi	: Membuat fungsi tentang

Tanggal		: 14/12/2021
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 05
Deskripsi	: Mengubah struktur penulisan tipe data struct

Tanggal		: 21/12/2021
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 06
Deskripsi	: Mengubah variabel tabungan, membuat menu transaksi sampah plastik dan kertas

Tanggal		: 21/12/2021
Oleh		: Putu Agus Yoga Budhi Darma (2105551011)
Revisi		: 07
Deskripsi	: Membuat menu transaksi sampah logam dan botol kaca

Tanggal		: 25/12/2021
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 08
Deskripsi	: Mengubah tampilan program, mengubah tipe variabel lokal, membuat menu konfirmasi1, 
		  menambah menu transaksi keluar
		  
Tanggal		: 28/12/2021
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 09
Deskripsi	: Menambah keterangan output pada menu login
*******************************************************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//membuat tipe data struct untuk menyimpan variabel username dan password dari pengguna
struct pengguna{
	char username[10];
	char password[10];
};

//deklarasi prototype fungsi
void login_admin(char username [10], char password [10]);
void welcome ();
void login_user ();
void buat_akun_user ();
void tentang ();
void penyetoran ();
void jenis_sampah ();
void konfirmasi ();
void penarikan ();
void keluar ();


//deklarasi variabel global
char username [10], password [10];
int pilihan_menu;
int pilihan;

//fungsi login admin
void login_admin (char username [10], char password [10]){
	printf("\n\t\t---------------------------------------------------\n");
	printf("				MENU AKTIVASI PROGRAM");
	printf("\n\t\t---------------------------------------------------\n");
	printf("\n\t\tMasukkan Username 	: ");
	scanf("%s",username);
	printf("\t\tMasukkan Password 	: ");
	scanf("%s",password);
	
	printf("\t\t---------------------------------------------------\n");
	if (strcmp(username, "admin1")==0 && strcmp(password, "0101")==0) {
		printf("\n\t\t    Akses diterima. Program siap dijalankan!");
	}
    else {
    	printf("\n\t\t    Maaf Username dan Password tidak sesuai!\n");
		printf("\t\t\t   Mohon inputkan dengan benar.\n");
    	sleep(5);
    	system("cls");
    	login_admin (username, password);
	}
}

//fungsi welcome
void welcome (){
	printf("\n\t\t---------------------------------------------------\n");
	printf("		  PROGRAM LAYANAN BANK SAMPAH JUMPAI ASRI LESTARI\n");
	printf("\t\t---------------------------------------------------\n");
	printf("				MENU LAYANAN : \n\n");
}

//fungsi login user
void login_user (){
	printf("\n\t\t---------------------------------------------------\n");
	printf("				MENU LOGIN USER\n");
	printf("\t\t---------------------------------------------------\n");
}
//fungsi buat_akun_user
void buat_akun_user (){
	printf("\n\t\t---------------------------------------------------\n");
	printf("				MENU BUAT AKUN USER\n");
	printf("\t\t---------------------------------------------------\n");
}
//fungsi tentang
void tentang (){
	printf("\n\t\t----------------------------------------------------\n");
	printf("				PROGRAM INI DIBUAT OLEH :\n");
	printf("\t\t---------------------------------------------------\n");
	printf("		    	Ni Komang Putri Sandya 	   (2105551006)\n");
	printf("		    	Putu Agus Yoga Budhi Darma (2105551011)\n");
	printf("\n\t\t----------------------------------------------------\n");
}
//fungsi penyetoran
void penyetoran (){
	printf("\n\t\t---------------------------------------------------\n");
	printf("				MENU PENYETORAN\n");
	printf("\t\t---------------------------------------------------\n");
}
//fungsi jenis sampah
void jenis_sampah (){
	printf("				Jenis Sampah \n");
	printf("\t\t\t\t1. PLASTIK\n");
	printf("\t\t\t\t2. KERTAS\n");
	printf("\t\t\t\t3. LOGAM\n");
	printf("\t\t\t\t4. BOTOL KACA\n");
	printf("\t\t---------------------------------------------------\n");
}
//fungsi konfirmasi
void konfirmasi (){
	printf("\n\n\t\t---------------------------------------------------\n");
	printf("\t\t\tIngin melanjutkan transaksi lain ?\n");
	printf("\t\t\tTekan 1 untuk kembali ke menu \n");
	printf("\n\t\t---------------------------------------------------\n");
	printf("\t\t\tPilihan Menu : ");
	scanf("%d", &pilihan_menu);
}
//fungsi penarikan
void penarikan (){
	printf("\t\t----------------------------------------------------\n");
	printf("				MENU PENARIKAN\n");
	printf("\t\t----------------------------------------------------\n");
}
//fungsi keluar
void keluar (){
	printf("\n\t\t---------------------------------------------------\n");
	printf("		    Terima kasih Telah Menggunakan Layanan Ini!\n");
	printf("			     Selamat beraktivitas!\n");
	printf("\t\t---------------------------------------------------\n");
	
}
//fungsi utama
int main () {
	int login=0, pilihan_transaksi, pilihan_sampah, menu=1;
	float tabungan=0, tabungan_plastik=0, tabungan_kertas=0, tabungan_logam=0, 
	tabungan_botol_kaca=0, jumlah_penarikan=0, berat;
	
	struct pengguna user; 
	
	login_admin (username, password);
	sleep(2);
	system("cls");
	login:
	while(login==0){	
		welcome ();	
		printf("\t\t\t\t1. LOGIN USER\n");
		printf("\t\t\t\t2. BUAT AKUN\n");
		printf("\t\t\t\t3. TENTANG\n\n");
		printf("\t\t---------------------------------------------------\n");
		printf("\t\t\t\tPilihan menu : ");
		scanf("%d", &pilihan_menu);
		printf("\t\t---------------------------------------------------\n");
		system("cls");
		if(pilihan_menu==1){
			login_user ();
			printf("\n\t\tMasukkan Username		: ");
			scanf("%s", &user.username);
			printf("\t\tMasukkan Password		: ");
			scanf("%s", &user.password);
			printf("\n\t\t\t\tLOGIN BERHASIL!\n");
			sleep(2);
			login=1;
		}
		else if(pilihan_menu==2){
			buat_akun_user ();
			printf("\n\t\tMasukkan Username		: ");
			scanf("%s", &user.username);
			printf("\t\tMasukkan Password		: ");
			scanf("%s", &user.password);
			printf("\n\t\t\t\tBUAT AKUN BERHASIL!\n");
			sleep(2);
			system("cls");
		}
		else if(pilihan_menu==3){
			tentang ();
			goto konfirmasi1;
			sleep(2);
			system("cls");
		}
		else{
			printf("\n\t\t---------------------------------------------------\n");
			printf("\t\t\t\tPilihan Tidak Tersedia!\n");
			printf("\t\t\t     Mohon Inputkan Dengan Benar!\n");
			printf("\t\t---------------------------------------------------\n");
			sleep(5);
			system("cls");
		}
	}
	
	while(menu==1){
		system("cls");
		welcome ();
		printf("\t\t\t\t1. PENARIKAN \n");
		printf("\t\t\t\t2. PENYETORAN\n");
		printf("\t\t\t\t3. CEK SALDO\n");
		printf("\t\t\t\t4. KELUAR\n");
		printf("\t\t---------------------------------------------------\n");
		printf("\t\t\t\tPilihan Transaksi : ");
		scanf("%d", &pilihan_transaksi);
		system("cls");
		if(pilihan_transaksi==1){
			penarikan ();
			printf("\t\tSaldo Tabungan Saat ini		: Rp %2.f\n", tabungan);
			printf("\t\tMasukkan jumlah penarikan	: Rp ");
			scanf("%f", &jumlah_penarikan);
			if(jumlah_penarikan>tabungan){
				printf("\n\t\t---------------------------------------------------\n");
				printf("\n\t\t\tMohon Maaf Saldo Anda Tidak Cukup!\n\n");
				printf("\t\t---------------------------------------------------\n");
				konfirmasi ();
			}
			else{
				tabungan = tabungan - jumlah_penarikan;
				printf("\n\t\tAnda Telah Menarik		: Rp %2.f\n", jumlah_penarikan);
				printf("\t\tSisa Saldo Anda			: Rp %2.f", tabungan);
				konfirmasi ();
			}
		}
		else if(pilihan_transaksi==2){
			penyetoran ();
			jenis_sampah ();
			printf("\t\t\tPilihan Sampah 	: ");
			scanf("%d", &pilihan_sampah);
			if(pilihan_sampah==1){
				system("cls");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\t\t\tJENIS SAMPAH PLASTIK : 	\n");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\t\t1. Botol Plastik Dengan Tutup dan Label\n");
				printf("\t\t\t2. Botol Plastik Tanpa Tutup dan Label\n");
				printf("\t\t\t3. Gelas Plastik Dengan Tutup dan Label\n");
				printf("\t\t\t4. Gelas Plastik Tanpa Tutup dan Label\n");
				printf("\t\t\t5. Gelas plastik Dengan Sablon\n");
				printf("\t\t\t6. Jirigen Putih Tanpa Lubang\n");
				printf("\t\t\t7. Tutup Botol Plastik\n");
				printf("\t\t\t8. Kantong Plastik Segala Warna\n");
				printf("\t\t\t9. Ember Plastik\n");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\tPilihan Sampah Plastik 			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1000;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1800;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1300;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}	
				else if(pilihan==4){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*2300;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1000;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}		
				else if(pilihan==6){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1000;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==7){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1200;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==8){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*200;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==9){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*800;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else{
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\tPilihan Tidak Tersedia!\n");
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();						
				}
			}
			else if(pilihan_sampah==2){
				system("cls");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\t\t\tJENIS SAMPAH KERTAS : \n\n");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\t\t\t1. Kardus\n");
				printf("\t\t\t\t2. HVS\n");
				printf("\t\t\t\t3. Buku Tulis\n");
				printf("\t\t\t\t4. Kertas Buram\n");
				printf("\t\t\t\t5. Majalah\n");
				printf("\t\t\t\t6. Koran\n");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\tPilihan Sampah Kertas			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*1500;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*1200;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*700;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==4){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*600;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*500;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==6){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*2000;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else{
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\tPilihan Tidak Tersedia!\n");
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();	
				}
			}
			else if(pilihan_sampah==3){
				system("cls");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\t\t\tJENIS SAMPAH LOGAM : \n\n");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\t\t1. Aluminium Tebal/Panci\n");
				printf("\t\t\t2. Aluminium Tipis/Kaleng\n");
				printf("\t\t\t3. Besi Tebal\n");
				printf("\t\t\t4. Besi Tipis\n");
				printf("\t\t\t5. Tembaga\n");
				printf("\t\t\t6. Seng\n");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\tPilihan Sampah Logam			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*9000;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*8000;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*1500;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==4){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*1000;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*45000;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==6){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*300;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else{
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\tPilihan Tidak Tersedia!\n");
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
			}
			else if(pilihan_sampah==4){
				system("cls");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\t\t\tJENIS SAMPAH BOTOL KACA : \n");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\t\t1. Botol Bir Bintang Besar\n");
				printf("\t\t\t2. Botol Bir Bintang Kecil\n");
				printf("\t\t\t3. Botol Kaca Bening\n");
				printf("\t\t\t4. Botol Kaca Besar Berwarna\n");
				printf("\t\t\t5. Botol Kaca Kecil Berwarna\n");
				printf("\t\t---------------------------------------------------\n");
				printf("\t\tPilihan Sampah Botol Kaca		: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan banyak botol bir (biji) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*600;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan banyak botol bir (biji) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*200;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah botol kaca (kg) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*100;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==4){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah botol kaca (kg) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*50;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\t\t---------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah botol kaca (kg) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*25;
					printf("\t\t---------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t---------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t---------------------------------------------------\n");
					konfirmasi ();
				}
			}
			else{
				printf("\t\t---------------------------------------------------\n");
				printf("\n\t\tPilihan Tidak Tersedia!\n");
				printf("\t\t---------------------------------------------------\n");
				konfirmasi ();
			} 
			tabungan = tabungan + tabungan_plastik + tabungan_kertas + tabungan_logam + tabungan_botol_kaca;
		}
		else if(pilihan_transaksi==3){
			printf("\n\t\t---------------------------------------------------\n");
			printf("\t\t\tJumlah Saldo Tabungan Anda adalah Rp %2.f\n", tabungan);
			printf("\t\t---------------------------------------------------\n");
			konfirmasi ();
		}
		else if(pilihan_transaksi==4){
			goto keluar;
		}
		else{
			menu=2;
			printf("\n\t\t---------------------------------------------------\n");
			printf("\t\t\t\tPilihan Tidak Tersedia!\n");
			printf("\t\t---------------------------------------------------\n");
			goto keluar;
		}
	}
	
	konfirmasi1 :
		printf("\n\n\t\t---------------------------------------------------\n");
		printf("\t\t\tIngin melanjutkan transaksi lain ?\n");
		printf("\t\t\tTekan 1 untuk melanjutkan\n");
		printf("\t\t\tTekan 2 untuk keluar");
		printf("\n\t\t---------------------------------------------------\n");
		printf("\t\t\tPilihan  : ");
		scanf("%d", &pilihan);
		system("cls"); 
		if (pilihan==1){
			goto login;
		}
		else if (pilihan==2){
			goto keluar;
		}
		
	keluar :
		keluar ();	
		return (0);
}
