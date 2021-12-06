/*******************************************************************************************************************
									PROGRAM LAYANAN BANK SAMPAH JUMPAI ASRI LESTARI
Tanggal		: 04/12/2021
Oleh		: Ni Komang Putri Sandya
Revisi		: 0
Deskripsi	: Membuat variabel, fungsi login_admin untuk aktivasi program dengan strcmp, dan fungsi utama
*******************************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//membuat tipe data abstrak (ADT) untuk menyimpan variabel username dan password dari pengguna
typedef struct{ 
	char username[50];
	char password[50];
}pengguna;

//deklarasi prototype fungsi
void login_admin (char username [10], char password [10]);
void welcome ();
void login_user ();

//deklarasi variabel global
char username [10], password [10];
int pilihan_menu;

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

int main () {
	int login=0, pilihan_transaksi, tabungan_awal, tabungan_akhir, tabungan_plastik, tabungan_kertas, tabungan_logam, 
	tabungan_botol_kaca, berat, jumlah_penarikan, pilihan_sampah, menu=1;
	
	pengguna user; 
	
	login_admin (username, password);
	sleep(2);
	system("cls");
	
return (0);
}

