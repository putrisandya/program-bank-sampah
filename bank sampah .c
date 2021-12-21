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
*******************************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//membuat tipe data abstrak (ADT) untuk menyimpan variabel username dan password dari pengguna
struct pengguna{
	char username[50];
	char password[50];
};

//deklarasi prototype fungsi
void login_admin (char username [10], char password [10]);
void welcome ();
void login_user ();
void buat_akun_user ();
void penyetoran ();
void jenis_sampah ();
void konfirmasi ();
void penarikan ();
void keluar ();
void tentang ();

//deklarasi variabel global
char username [10], password [10];
int pilihan_menu;
int pilihan;

//fungsi login admin 
void login_admin (char username [10], char password [10]) {
	printf("----------------------------------------------------------------------------------------------\n");
	printf("					MENU AKTIVASI PROGRAM\n");
	printf("----------------------------------------------------------------------------------------------");
	printf("\nMasukkan Username 		: ");
	scanf("%s",username);
	printf("Masukkan Password 		: ");
	scanf("%s",password);
	if (strcmp(username, "admin1")==0 && strcmp(password, "0101")==0) {
		printf("\nAkses diterima. Program siap dijalankan!\n");
	}
    else {
    	printf("\nMaaf Username dan Password tidak sesuai. Mohon inputkan dengan benar.\n");
    	sleep(2);
    	system("cls");
    	login_admin (username, password);
	}
}

//fungsi welcome
void welcome (){
	printf("\n----------------------------------------------------------------------------------------------\n");
	printf("					SELAMAT DATANG DI");
	printf("\n			PROGRAM LAYANAN BANK SAMPAH JUMPAI ASRI LESTARI\n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("				MENU LAYANAN : \n");
}

//fungsi login user
void login_user (){
	printf("----------------------------------------------------------------------------------------------\n");
	printf("					MENU LOGIN USER\n");
	printf("----------------------------------------------------------------------------------------------\n");
}
//fungsi buat_akun_user
void buat_akun_user (){
	printf("----------------------------------------------------------------------------------------------\n");
	printf("					MENU BUAT AKUN USER\n");
	printf("----------------------------------------------------------------------------------------------\n");
}

void penyetoran (){
	printf("----------------------------------------------------------------------------------------------\n");
	printf("					MENU PENYETORAN\n");
	printf("----------------------------------------------------------------------------------------------\n");
}

void jenis_sampah (){
	printf("		Jenis Sampah \n");
	printf("1. PLASTIK\n");
	printf("2. KERTAS\n");
	printf("3. LOGAM\n");
	printf("4. BOTOL KACA\n");
}

void konfirmasi (){
	printf("\n\nIngin melanjutkan transaksi lain ?\n");
	printf("Tekan 1 untuk melanjutkan\n");
	printf("Tekan 2 untuk keluar");
	printf("\n\nPilihan Menu : ");
	scanf("%d", &pilihan_menu);
}

void penarikan (){
	printf("----------------------------------------------------------------------------------------------\n");
	printf("					MENU PENARIKAN\n");
	printf("----------------------------------------------------------------------------------------------\n");
}

void keluar (){
	system("cls");
	printf("		\n\nTerima kasih Telah Menggunakan Layanan Ini!\n");
	printf("\n\nSelamat beraktivitas!\n");
	
}
//fungsi tentang
void tentang (){
	printf("----------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\tPROGRAM INI DIBUAT OLEH : \n");
	printf("\t\t\tNi Komang Putri Sandya 		(2105551006)\n");
	printf("\t\t\tPutu Agus Yoga Budhi Darma 	(2105551011)");
	printf("\n----------------------------------------------------------------------------------------------\n");
}


int main () {
	int login=0, pilihan_transaksi, tabungan=0, tabungan_plastik, tabungan_kertas, tabungan_logam, 
	tabungan_botol_kaca, berat, jumlah_penarikan, pilihan_sampah, menu=1;
	
	struct pengguna user; 
	
	login_admin (username, password);
	sleep(2);
	system("cls");
	
	while(login==0){	
		welcome ();	
		printf("1. LOGIN USER\n");
		printf("2. BUAT AKUN\n");
		printf("3. TENTANG\n\n");
		printf("Pilihan menu : ");
		scanf("%d", &pilihan_menu);
		system("cls");
		if(pilihan_menu==1){
			login_user ();
			printf("\nMasukkan Username		: ");
			scanf("%s", &user.username);
			printf("Masukkan Password		: ");
			scanf("%s", &user.password);
			login=1;
		}
		else if(pilihan_menu==2){
			buat_akun_user ();
			printf("\nMasukkan Username		: ");
			scanf("%s", &user.username);
			printf("Masukkan Password		: ");
			scanf("%s", &user.password);
			printf("\nAkun berhasil dibuat!\n");
			sleep(2);
			system("cls");
		}
		else if(pilihan_menu==3){
			tentang ();
			konfirmasi ();
			sleep(2);
			system("cls");
		}
		else{
			printf("\n\t\t\tPilihan Tidak Tersedia!\n");
			sleep(2);
			system("cls");
		}
	}
	while(menu==1){
		system("cls");
		welcome ();
		printf("1. PENARIKAN \n");
		printf("2. PENYETORAN\n");
		printf("3. CEK SALDO\n");
		printf("Pilihan Transaksi : ");
		scanf("%d", &pilihan_transaksi);
		system("cls");
		if(pilihan_transaksi==1){
			penarikan ();
			printf("Masukkan jumlah penarikan : Rp  ");
			scanf("%d", &jumlah_penarikan);
			if(jumlah_penarikan > tabungan){
				printf("\nMohon Maaf Saldo Anda Tidak Cukup!\n\n");
				konfirmasi();
			}
			else{
				tabungan = tabungan - jumlah_penarikan;
				printf("\nAnda Telah Menarik Rp %d Sisa Saldo Anda Rp %d", jumlah_penarikan, tabungan);
				konfirmasi();
			}
		}
		else if(pilihan_transaksi==2){
			penyetoran ();
			jenis_sampah ();
			printf("Pilihan Sampah 			: ");
			scanf("%d", &pilihan_sampah);
			if(pilihan_sampah==1){
				system("cls");
				printf("\t\t\t\tJENIS SAMPAH PLASTIK : \n\n");
				printf("\t\t\t1. Botol Plastik Dengan Tutup dan Label \n");
				printf("\t\t\t2. Botol Plastik Tanpa Tutup dan Label\n");
				printf("\t\t\t3. Gelas Plastik Dengan Tutup dan Label\n");
				printf("\t\t\t4. Gelas Plastik Tanpa Tutup dan Label\n");
				printf("\t\t\t5. Gelas plastik Dengan Sablon\n");
				printf("\t\t\t6. Jirigen Putih Tanpa Lubang\n");
				printf("\t\t\t7. Tutup Botol Plastik\n");
				printf("\t\t\t8. Kantong Plastik Segala Warna\n");
				printf("\t\t\t9. Ember Plastik\n");
				printf("\nPilihan Sampah Plastik			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\nMasukkan berat sampah plastik (kg) 	: ");
					scanf("%d", &berat);
					tabungan_plastik = berat*1000;
					printf("\nTransaksi Berhasil.\n\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_plastik);
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\nMasukkan berat sampah plastik (kg) 	: ");
					scanf("%d", &berat);
					tabungan_plastik = berat*1800;
					printf("\nTransaksi Berhasil.\n\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_plastik);
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\nMasukkan berat sampah plastik (kg) 	: ");
					scanf("%d", &berat);
					tabungan_plastik = berat*1300;
					printf("\nTransaksi Berhasil.\n\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_plastik);
					konfirmasi ();
				}	
				else if(pilihan==4){
					printf("\nMasukkan berat sampah plastik (kg) 	: ");
					scanf("%d", &berat);
					tabungan_plastik = berat*2300;
					printf("\nTransaksi Berhasil.\n\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_plastik);
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\nMasukkan berat sampah plastik (kg) 	: ");
					scanf("%d", &berat);
					tabungan_plastik = berat*1000;
					printf("\nTransaksi Berhasil.\n\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_plastik);
					konfirmasi ();
				}		
				else if(pilihan==6){
					printf("\nMasukkan berat sampah plastik (kg) 	: ");
					scanf("%d", &berat);
					tabungan_plastik = berat*1000;
					printf("\nTransaksi Berhasil.\n\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_plastik);
					konfirmasi ();
				}
				else if(pilihan==7){	
					printf("\nMasukkan berat sampah plastik (kg) 	: ");
					scanf("%d", &berat);
					tabungan_plastik = berat*1200;
					printf("\nTransaksi Berhasil.\n\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_plastik);
					konfirmasi ();
				}
				else if(pilihan==8){
					printf("\nMasukkan berat sampah plastik (kg) 	: ");
					scanf("%d", &berat);
					tabungan_plastik = berat*200;
					printf("\nTransaksi Berhasil.\n\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_plastik);
					konfirmasi ();
				}
				else if(pilihan==9){
					printf("\nMasukkan berat sampah plastik (kg) 	: ");
					scanf("%d", &berat);
					tabungan_plastik = berat*800;
					printf("\nTransaksi Berhasil.\n\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_plastik);
					konfirmasi ();
				}
				else{
					printf("\nPilihan Tidak Tersedia!\n");
					konfirmasi ();							
				}
			}
			else if(pilihan_sampah==2){
				system("cls");
				printf("\t\t\t\tJENIS SAMPAH KERTAS : \n\n");
				printf("\t\t\t1. Kardus\n");
				printf("\t\t\t2. HVS\n");
				printf("\t\t\t3. Buku Tulis\n");
				printf("\t\t\t4. Kertas Buram\n");
				printf("\t\t\t5. Majalah\n");
				printf("\t\t\t6. Koran\n");
				printf("\nPilihan Sampah Kertas			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\nMasukkan berat sampah kertas (kg) 	: ");
					scanf("%d", &berat);
					tabungan_kertas = berat*1500;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_kertas);
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\nMasukkan berat sampah kertas (kg) 	: ");
					scanf("%d", &berat);
					tabungan_kertas = berat*1200;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_kertas);
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\nMasukkan berat sampah kertas (kg) 	: ");
					scanf("%d", &berat);
					tabungan_kertas = berat*700;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_kertas);
					konfirmasi ();
				}
				else if(pilihan==4){
					printf("\nMasukkan berat sampah kertas (kg) 	: ");
					scanf("%d", &berat);
					tabungan_kertas = berat*600;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_kertas);
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\nMasukkan berat sampah kertas (kg) 	: ");
					scanf("%d", &berat);
					tabungan_kertas = berat*500;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_kertas);
					konfirmasi ();
				}
				else if(pilihan==6){
					printf("\nMasukkan berat sampah kertas (kg) 	: ");
					scanf("%d", &berat);
					tabungan_kertas = berat*2000;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_kertas);
					konfirmasi ();
				}
				else{
					printf("\nPilihan Tidak Tersedia!\n");
					konfirmasi ();
				}
			}
			else if(pilihan_sampah==3){
				system("cls");
				printf("\t\t\t\tJENIS SAMPAH LOGAM : \n\n");
				printf("\t\t\t1. Aluminium Tebal/Panci\n");
				printf("\t\t\t2. Aluminium Tipis/Kaleng\n");
				printf("\t\t\t3. Besi Tebal\n");
				printf("\t\t\t4. Besi Tipis\n");
				printf("\t\t\t5. Tembaga\n");
				printf("\t\t\t6. Seng\n");
				printf("\nPilihan Sampah Logam			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\nMasukkan berat sampah logam (kg) 	: ");
					scanf("%d", &berat);
					tabungan_logam = berat*9000;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_logam);
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\nMasukkan berat sampah logam (kg) 	: ");
					scanf("%d", &berat);
					tabungan_logam = berat*8000;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_logam);
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\nMasukkan berat sampah logam (kg) 	: ");
					scanf("%d", &berat);
					tabungan_logam = berat*1500;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_logam);
					konfirmasi ();
				}
				else if(pilihan==4){
					printf("\nMasukkan berat sampah logam (kg) 	: ");
					scanf("%d", &berat);
					tabungan_logam = berat*1000;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_logam);
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\nMasukkan berat sampah logam (kg) 	: ");
					scanf("%d", &berat);
					tabungan_logam = berat*45000;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_logam);
					konfirmasi ();
				}
				else if(pilihan==6){
					printf("\nMasukkan berat sampah logam (kg) 	: ");
					scanf("%d", &berat);
					tabungan_logam = berat*300;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_logam);
					konfirmasi ();
				}
				else{
					printf("\nPilihan Tidak Tersedia!\n");
					konfirmasi ();
				}
			}
			else if(pilihan_sampah==4){
				system("cls");
				printf("\t\t\t\tJENIS SAMPAH BOTOL KACA : \n\n");
				printf("\t\t\t1. Botol Bir Bintang Besar\n");
				printf("\t\t\t2. Botol Bir Bintang Kecil\n");
				printf("\t\t\t3. Botol Kaca Bening\n");
				printf("\t\t\t4. Botol Kaca Besar Berwarna\n");
				printf("\t\t\t5. Botol Kaca Kecil Berwarna\n");
				printf("\nPilihan Sampah Botol Kaca			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\nMasukkan banyak botol bir (biji) 	: ");
					scanf("%d", &berat);
					tabungan_botol_kaca = berat*600;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_botol_kaca);
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\nMasukkan banyak botol bir (biji) 	: ");
					scanf("%d", &berat);
					tabungan_botol_kaca = berat*200;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_botol_kaca);
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\nMasukkan berat sampah botol kaca (kg) 	: ");
					scanf("%d", &berat);
					tabungan_botol_kaca = berat*100;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_botol_kaca);
					konfirmasi ();
				}
				else if(pilihan==4){
					printf("\nMasukkan berat sampah botol kaca (kg) 	: ");
					scanf("%d", &berat);
					tabungan_botol_kaca = berat*50;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_botol_kaca);
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\nMasukkan berat sampah botol kaca (kg) 	: ");
					scanf("%d", &berat);
					tabungan_botol_kaca = berat*25;
					printf("\nTransaksi Berhasil.\nTotal rupiah yang diperoleh 		: Rp %d\n", tabungan_botol_kaca);
					konfirmasi ();
				}
			}
			else{
				printf("Mohon Maaf Pilihan Tidak Tersedia!\n");
				konfirmasi ();
			}
			tabungan = tabungan + tabungan_plastik + tabungan_kertas +  tabungan_logam + tabungan_botol_kaca;
		}
		else if(pilihan_transaksi==3){
			printf("Jumlah Saldo Tabungan Anda adalah Rp %d", tabungan);
			konfirmasi ();
		}
		else{
			menu=2;
			keluar ();
		}
	}
	return (0);
}
