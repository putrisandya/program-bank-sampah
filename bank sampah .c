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

Tanggal		: 01/01/2022
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 10
Deskripsi	: Memperbaiki tampilan program, menambah variabel temp, menambah variabel lain dalam struct pengguna,
		  membuat fungsi sampah plastik, sampah kertas, sampah logam, dan sampah botol kaca
		  
Tanggal		: 02/01/2022
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 11
Deskripsi	: Membuat struk bukti transaksi

Tanggal		: 02/01/2022
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 12
Deskripsi	: Membuat struk bukti transaksi cek saldo

Tanggal		: 02/02/2022
Oleh		: Putu Agus Yoga Budhi Darma (2105551011)
Revisi		: 13
Deskripsi	: Menambahkan waktu, memperbaiki menu login user, dan menambahkan tanggal pada bukti transaksi

Tanggal		: 02/01/2022
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 14
Deskripsi	: Memperbaiki tampilan program

Tanggal		: 05/01/2022
Oleh		: Ni Komang Putri Sandya (2105551006)
Revisi		: 15
Deskripsi	: Memperbaiki pemanggilan variabel pada bukti transaksi, perhitungan tabungan, dan tampilan program
*******************************************************************************************************************/

#include<stdio.h>	//memanggil fungsi standar input output dalam bahasa c
#include<string.h>	//memanggil fungsi terkait operasi string dalam bahasa c
#include<stdlib.h>	//memanggil fungsi standar library dalam bahasa c
#include <time.h>	//memanggil fungsi terkait operasi waktu dalam bahasa c

//membuat tipe data struct untuk menyimpan identitas pengguna dalam beberapa variabel
struct pengguna{
	char username[10];
	char password[10];
	char nama[20];
	char alamat[20];
	char telepon[13];
}user;

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
void sampah_plastik();
void sampah_kertas();
void sampah_logam();
void sampah_botol_kaca();

//deklarasi variabel global
char username [10], password [10];
int pilihan_menu;
int pilihan;
char temp[255];

//fungsi login admin
void login_admin (char username [10], char password [10]){
	printf("\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|                MENU AKTIVASI PROGRAM                 |\n");
	printf("\t\t--------------------------------------------------------\n\n");
	printf("\t\tMasukkan Username 	: ");
	scanf("%s",username);
	printf("\t\tMasukkan Password 	: ");
	scanf("%s",password);
	printf("\n\t\t--------------------------------------------------------\n");
	
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
	printf("\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|    PROGRAM LAYANAN BANK SAMPAH JUMPAI ASRI LESTARI   |\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|                 MENU LAYANAN :                       |\n");
}

//fungsi login user
void login_user (){
	printf("\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|                  MENU LOGIN USER                     |\n");
	printf("\t\t--------------------------------------------------------\n");
}
//fungsi buat_akun_user
void buat_akun_user (){
	printf("\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|                  MENU BUAT AKUN USER                  |\n");
	printf("\t\t--------------------------------------------------------\n");
}
//fungsi tentang
void tentang (){
	printf("\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|                  PROGRAM INI DIBUAT OLEH :           |\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|	    	Ni Komang Putri Sandya 	   (2105551006)    |\n");
	printf("\t\t|	    	Putu Agus Yoga Budhi Darma (2105551011)    |\n\n");
	printf("\t\t--------------------------------------------------------\n");
}
//fungsi penyetoran
void penyetoran (){
	printf("\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|                   MENU PENYETORAN                    |\n");
	printf("\t\t--------------------------------------------------------\n");
}
//fungsi jenis sampah
void jenis_sampah (){
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|                  Jenis Sampah :                      |\n");
	printf("\t\t|                  1. PLASTIK                          |\n");
	printf("\t\t|                  2. KERTAS                           |\n");
	printf("\t\t|                  3. LOGAM                            |\n");
	printf("\t\t|                  4. BOTOL KACA                       |\n");
	printf("\t\t--------------------------------------------------------\n");
}
//fungsi konfirmasi
void konfirmasi (){
	printf("\n\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|          Ingin melanjutkan transaksi lain ?          |\n");
	printf("\t\t|            Tekan 1 untuk kembali ke menu             |\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t                   Pilihan Menu : ");
	scanf("%d", &pilihan_menu);
}
//fungsi penarikan
void penarikan (){
	printf("\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|                   MENU PENARIKAN                     |\n");
	printf("\t\t--------------------------------------------------------\n");
}
//fungsi keluar
void keluar (){
	printf("\n");
	printf("\t\t--------------------------------------------------------\n");
	printf("\t\t|      Terima kasih Telah Menggunakan Layanan Ini!     |\n");
	printf("\t\t|                Selamat beraktivitas!                 |\n");
	printf("\t\t--------------------------------------------------------\n");
	
}
//fungsi menampilkan jenis-jenis sampah plastik
void sampah_plastik(){
	//membuat pointer plastik untuk menunjuk pada file "sampah plastik.txt"
	FILE *plastik;
	//membuka file "sampah plastik.txt" dengan mode read
	plastik = fopen("sampah plastik.txt", "r");
	if (plastik == NULL){
		printf("\n\t\t\t\tERROR!, File tidak tersedia\n");
	}
	while (fgets(temp, sizeof(temp), plastik)){
		printf("%s", temp);
	}
	fclose(plastik);
}
//fungsi menampilkan jenis-jenis sampah kertas
void sampah_kertas(){
	//membuat pointer kertas untuk menunjuk pada file "sampah kertas.txt"
	FILE *kertas;
	//membuka file "sampah kertas.txt" dengan mode read
	kertas = fopen("sampah kertas.txt", "r");
	if (kertas == NULL){
		printf("\n\t\t\t\tERROR!, File tidak tersedia\n");
	}
	while (fgets(temp, sizeof(temp), kertas)){
		printf("%s", temp);
	}
	fclose(kertas);
}
//fungsi menampilkan jenis-jenis sampah logam
void sampah_logam(){
	//membuat pointer logam untuk menunjuk pada file "sampah logam.txt"
	FILE *logam;
	//membuka file "sampah logam.txt" dengan mode read
	logam = fopen("sampah logam.txt", "r");
	if (logam == NULL){
		printf("\n\t\t\t\tERROR!, File tidak tersedia\n");
	}
	while (fgets(temp, sizeof(temp), logam)){
		printf("%s", temp);
	}
	fclose(logam);
}
//fungsi menampilkan jenis-jenis sampah botol kaca
void sampah_botol_kaca(){
	//membuat pointer botol untuk menunjuk pada file "sampah botol.txt"
	FILE *botol;
	//membuka file "sampah botol.txt" dengan mode read
	botol = fopen("sampah botol.txt", "r");
	if (botol == NULL){
		printf("\n\t\t\t\tERROR!, File tidak tersedia\n");
	}
	while (fgets(temp, sizeof(temp), botol)){
		printf("%s", temp);
	}
	fclose(botol);
}
//fungsi utama
int main () {
	int login=0, pilihan_transaksi, pilihan_sampah, menu=1;
	float tabungan=0, tabungan_plastik=0, tabungan_kertas=0, tabungan_logam=0, 
	tabungan_botol_kaca=0, jumlah_penarikan=0, berat;
	
	//deklarasi waktu
	time_t rawtime;
	struct tm * timeinfo;
	
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	
	login_admin (username, password);
	sleep(2);
	system("cls");
	while(login==0){	
		login:	
		welcome ();
		printf("\t\t|                 1. LOGIN USER                        |\n");
		printf("\t\t|                 2. BUAT AKUN                         |\n");
		printf("\t\t|                 3. TENTANG                           |\n");
		printf("\t\t--------------------------------------------------------\n");
		printf("\t\t\t\tPilihan menu : ");
		scanf("%d", &pilihan_menu);
		printf("\t\t--------------------------------------------------------\n");
		system("cls");
		if(pilihan_menu==1){
			//membuat pointer record untuk menunjuk file "user.txt"
			FILE *record;
			//membuka file dengan mode read
			record = fopen("user.txt", "r");
			if (record == NULL){
				printf("\n\t\t\t\tERROR!, File tidak tersedia\n");
				goto keluar;
			}
			login_user ();
			printf("\n\t\tMasukkan Username		: ");
			scanf("%s", &user.username);
			printf("\t\tMasukkan Password		: ");
			scanf("%s", &user.password);
			//perulangan untuk mendeteksi akhir dari file record
			while (!feof(record)){
				if(strcmp(username, user.username)==0 && strcmp(password, user.password)==0){
					printf("\n\t\t--------------------------------------------------------\n");
					printf("\n\t\t                 LOGIN BERHASIL!                        \n");
					sleep(2);
					login=1;
					goto transaksi;
				}
				else{
					pprintf("\t\t--------------------------------------------------------\n\n");
					printf("\t\t                    LOGIN GAGAL!                          \n");
					printf("\t\t       Username dan Password tidak tersedia.              \n");
					sleep(3);
					system("cls");
					goto login;
				}
			}
			//menutup file record 
			fclose (record);
		}
		else if(pilihan_menu==2){
			//membuat pointer regis untuk menunjuk pada file "user.txt"
			FILE *regis;
			//membuka file "user.txt" dengan mode w
			regis = fopen("user.txt", "a");
			
			buat_akun_user ();
			printf("\t\t\t\tSILAKAN MELAKUKAN REGISTRASI AKUN!\n\n");
			getchar();
			printf("\t\tNama			: ");
			gets(user.nama);
			printf("\t\tAlamat			: ");
			gets(user.alamat);
			printf("\t\tNo Telepon		: ");
			scanf("%s", &user.telepon);
			printf("\t\t--------------------------------------------------------\n\n");
			printf("\t\t               Selamat Datang %s!                      \n", user.nama);
			printf("\t\t  Silakan buat username & password (max 10 karakter)   \n\n");
			printf("\t\t--------------------------------------------------------\n");
			printf("\n\t\tMasukkan Username		: ");
			scanf("%s", &user.username);
			printf("\t\tMasukkan Password		: ");
			scanf("%s", &user.password);
			printf("\t\t--------------------------------------------------------\n");
			
			//menuliskan data yang diinput user ke dalam file "user.txt"
			fprintf(regis, "\t\t     RIWAYAT LOGIN USER\n");
			fprintf(regis, "\t\tWaktu			: %s", asctime (timeinfo));
			fprintf(regis, "\t\tNama			: %s\n", user.nama);
			fprintf(regis, "\t\tAlamat			: %s\n", user.alamat);
			fprintf(regis, "\t\tNo Telepon			: %s\n", user.telepon);
			fprintf(regis, "\t\tUsername			: %s\n", user.username);
			fprintf(regis, "\t\tPassword			: %s\n\n", user.password);
			fprintf(regis,"\n");
			printf("\n\t\t\t AKUN BERHASIL TERDAFTAR. SILAKAN LOGIN!\n");
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
			printf("\t\t--------------------------------------------------------\n");
			printf("\t\t|              Pilihan Tidak Tersedia!                 |\n");
			printf("\t\t|            Mohon Inputkan Dengan Benar!              |\n");
			printf("\t\t--------------------------------------------------------\n");
			sleep(5);
			system("cls");
		}
	}
	
	while(menu==1){
		transaksi:
		system("cls");
		welcome ();
		printf("\t\t|                  1. PENARIKAN                        |\n");
		printf("\t\t|                  2. PENYETORAN                       |\n");
		printf("\t\t|                  3. CEK SALDO                        |\n");
		printf("\t\t|                  4. KELUAR                           |\n");
		printf("\t\t--------------------------------------------------------\n");
		printf("\t\t\t\tPilihan Transaksi : ");
		scanf("%d", &pilihan_transaksi);
		system("cls");
		if(pilihan_transaksi==1){
			penarikan ();
			printf("\t\tSaldo Tabungan Saat ini	: Rp %2.f\n", tabungan);
			printf("\t\tMasukkan jumlah penarikan	: Rp ");
			scanf("%f", &jumlah_penarikan);
			if(jumlah_penarikan>tabungan){
				printf("\t\t--------------------------------------------------------\n\t");
				printf("\t\t|       Mohon Maaf Saldo Anda Tidak Cukup!             |\n\n");
				printf("\t\t--------------------------------------------------------\n");
				konfirmasi ();
			}
			else{
				tabungan = tabungan - jumlah_penarikan;
				printf("\n\t\tAnda Telah Menarik		: Rp %2.f\n", jumlah_penarikan);
				printf("\t\tSisa Saldo Anda			: Rp %2.f", tabungan);
				printf("\n\t\t\t>>SEDANG MENCETAK BUKTI TRANSAKSI ANDA>>>");
				sleep(5);
				system("cls");
				//membuat pointer tarik untuk menunjuk pada file "bukti transaksi.txt"
				FILE *tarik;
				//membuka file "bukti transaksi.txt" dengan mode a
				tarik = fopen("bukti transaksi.txt", "a");
				system("cls");
				printf("\n");
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				printf("\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\tWaktu             : %s                                  \n", asctime (timeinfo));
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t                 BUKTI PENARIKAN SALDO                  \n");
				printf("\t\tUsername          : %s                                  \n", user.username);
				printf("\t\tNama              : %s                                  \n", user.nama);
				printf("\t\tAlamat            : %s                                  \n", user.alamat);
				printf("\t\tTelepon           : %s                                  \n", user.telepon);
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\tJumlah Penarikan  : %2.f                                \n", jumlah_penarikan);
				printf("\t\tSaldo Saat Ini    : %2.f                                \n", tabungan);
				printf("\t\t--------------------------------------------------------\n");
				
				//menuliskan riwayat transaksi user ke dalam file "bukti transaksi.txt"
				fprintf(tarik,"\t\t--------------------------------------------------------\n");
				fprintf(tarik,"\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				fprintf(tarik,"\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				fprintf(tarik,"\t\t--------------------------------------------------------\n");
				fprintf(tarik,"\t\tWaktu             : %s                                  \n", asctime (timeinfo));
				fprintf(tarik,"\t\t--------------------------------------------------------\n");
				fprintf(tarik,"\t\t                BUKTI PENYETORAN SAMPAH                 \n");
				fprintf(tarik,"\t\tUsername          : %s                                  \n", user.username);
				fprintf(tarik,"\t\tNama              : %s                                  \n", user.nama);
				fprintf(tarik,"\t\tAlamat            : %s                                  \n", user.alamat);
				fprintf(tarik,"\t\tTelepon           : %s                                  \n", user.telepon);
				fprintf(tarik,"\t\t--------------------------------------------------------\n");
				fprintf(tarik,"\t\tJumlah Penarikan  : %2.f                                \n", jumlah_penarikan);
				fprintf(tarik,"\t\tSaldo Saat Ini    : %2.f                                \n", tabungan);
				fprintf(tarik,"\t\t--------------------------------------------------------\n\n");
				fclose(tarik);
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
				sampah_plastik();
				printf("\t\tPilihan Sampah Plastik 			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1000;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1800;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1300;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}	
				else if(pilihan==4){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*2300;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1000;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}		
				else if(pilihan==6){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1000;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==7){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*1200;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==8){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*200;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==9){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah plastik (kg) 	: ");
					scanf("%f", &berat);
					tabungan_plastik = berat*800;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_plastik);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else{
					printf("\t\t--------------------------------------------------------\n\n");
					printf("\t\t                Pilihan Tidak Tersedia!                 \n");
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();						
				}
				printf("\t\t\t>>SEDANG MENCETAK BUKTI TRANSAKSI ANDA>>>");
				sleep(5);
				system("cls");
				//membuat pointer strukp untuk menunjuk pada file "bukti transaksi.txt"
				FILE *strukp;
				//membuka file "bukti transaksi.txt" dengan mode a
				strukp = fopen("bukti transaksi.txt", "a");
				system("cls");
				printf("\n");
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				printf("\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\tWaktu             : %s                                  \n", asctime (timeinfo));
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t                BUKTI PENYETORAN SAMPAH                 \n");
				printf("\t\tUsername          : %s                                  \n", user.username);
				printf("\t\tNama              : %s                                  \n", user.nama);
				printf("\t\tAlamat            : %s                                  \n", user.alamat);
				printf("\t\tTelepon           : %s                                  \n", user.telepon);
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\tJenis Sampah      : Plastik                             \n");
				printf("\t\tBerat Sampah      : %1.f                                \n", berat);
				printf("\t\tJumlah Penyetoran : %2.f                                \n", tabungan_plastik);
				printf("\t\t--------------------------------------------------------\n");
					
				//menuliskan riwayat transaksi user ke dalam file "bukti transaksi.txt"
				fprintf(strukp,"\t\t--------------------------------------------------------\n");
				fprintf(strukp,"\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				fprintf(strukp,"\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				fprintf(strukp,"\t\t--------------------------------------------------------\n");
				fprintf(strukp,"\t\tWaktu             : %s                                  \n", asctime (timeinfo));
				fprintf(strukp,"\t\t--------------------------------------------------------\n");
				fprintf(strukp,"\t\t                BUKTI PENYETORAN SAMPAH                 \n");
				fprintf(strukp,"\t\tUsername          : %s                                  \n", user.username);
				fprintf(strukp,"\t\tNama              : %s                                  \n", user.nama);
				fprintf(strukp,"\t\tAlamat            : %s                                  \n", user.alamat);
				fprintf(strukp,"\t\tTelepon           : %s                                  \n", user.telepon);
				fprintf(strukp,"\t\t--------------------------------------------------------\n");
				fprintf(strukp,"\t\tJenis Sampah      : Plastik                             \n");
				fprintf(strukp,"\t\tBerat Sampah      : %1.f                                \n", berat);
				fprintf(strukp,"\t\tJumlah Penyetoran : %2.f                                \n", tabungan_plastik);
				fprintf(strukp,"\t\t--------------------------------------------------------\n\n");
				fclose(strukp);
				konfirmasi ();
			}
			else if(pilihan_sampah==2){
				system("cls");
				sampah_kertas();
				printf("\n\t\tPilihan Sampah Kertas			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*1500;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*1200;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*700;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==4){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*600;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*500;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==6){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah kertas (kg) 	: ");
					scanf("%f", &berat);
					tabungan_kertas = berat*2000;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_kertas);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else{
					printf("\t\t--------------------------------------------------------\n\n");
					printf("\t\t                Pilihan Tidak Tersedia!                 \n");
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();		
				}
				printf("\t\t\t>>SEDANG MENCETAK BUKTI TRANSAKSI ANDA>>>");
				sleep(5);
				system("cls");
				//membuat pointer strukk untuk menunjuk pada file "bukti transaksi.txt"
				FILE *strukk;
				//membuka file "bukti transaksi.txt" dengan mode a
				strukk = fopen("bukti transaksi.txt", "a");
				system("cls");
				printf("\n");
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				printf("\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\tWaktu             : %s                                  \n", asctime (timeinfo));
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t                BUKTI PENYETORAN SAMPAH                 \n");
				printf("\t\tUsername          : %s                                  \n", user.username);
				printf("\t\tNama              : %s                                  \n", user.nama);
				printf("\t\tAlamat            : %s                                  \n", user.alamat);
				printf("\t\tTelepon           : %s                                  \n", user.telepon);
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\tJenis Sampah      : Kertas                              \n");
				printf("\t\tBerat Sampah      : %1.f                                \n", berat);
				printf("\t\tJumlah Penyetoran : %2.f                                \n", tabungan_kertas);
				printf("\t\t--------------------------------------------------------\n");
				
				//menuliskan riwayat transaksi user ke dalam file "bukti transaksi.txt"
				fprintf(strukk,"\t\t--------------------------------------------------------\n");
				fprintf(strukk,"\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				fprintf(strukk,"\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				fprintf(strukk,"\t\t--------------------------------------------------------\n");
				fprintf(strukk,"\t\tWaktu             : %s                                  \n", asctime (timeinfo));
				fprintf(strukk,"\t\t--------------------------------------------------------\n");
				fprintf(strukk,"\t\t                BUKTI PENYETORAN SAMPAH                 \n");
				fprintf(strukk,"\t\tUsername          : %s                                  \n", user.username);
				fprintf(strukk,"\t\tNama              : %s                                  \n", user.nama);
				fprintf(strukk,"\t\tAlamat            : %s                                  \n", user.alamat);
				fprintf(strukk,"\t\tTelepon           : %s                                  \n", user.telepon);
				fprintf(strukk,"\t\t--------------------------------------------------------\n");
				fprintf(strukk,"\t\tJenis Sampah      : Kertas                              \n");
				fprintf(strukk,"\t\tBerat Sampah      : %1.f                                \n", berat);
				fprintf(strukk,"\t\tJumlah Penyetoran : %2.f                                \n", tabungan_kertas);
				fprintf(strukk,"\t\t--------------------------------------------------------\n\n");
				fclose(strukk);
				konfirmasi ();
			}
			else if(pilihan_sampah==3){
				system("cls");
				sampah_logam();
				printf("\n\t\tPilihan Sampah Logam			: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*9000;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*8000;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*1500;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==4){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*1000;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*45000;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==6){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah logam (kg) 	: ");
					scanf("%f", &berat);
					tabungan_logam = berat*300;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_logam);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else{
					printf("\t\t--------------------------------------------------------\n\n");
					printf("\t\t                Pilihan Tidak Tersedia!                 \n");
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();	
				}
				printf("\t\t\t>>SEDANG MENCETAK BUKTI TRANSAKSI ANDA>>>");
				sleep(5);
				system("cls");
				//membuat pointer strukl untuk menunjuk pada file "bukti transaksi.txt"
				FILE *strukl;
				//membuka file "bukti transaksi.txt" dengan mode a
				strukl = fopen("bukti transaksi.txt", "a");
				system("cls");
				printf("\n");
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				printf("\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\tWaktu             : %s                                  \n", asctime (timeinfo));
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t                BUKTI PENYETORAN SAMPAH                 \n");
				printf("\t\tUsername          : %s                                  \n", user.username);
				printf("\t\tNama              : %s                                  \n", user.nama);
				printf("\t\tAlamat            : %s                                  \n", user.alamat);
				printf("\t\tTelepon           : %s                                  \n", user.telepon);
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\tJenis Sampah      : Logam                               \n");
				printf("\t\tBerat Sampah      : %1.f                                \n", berat);
				printf("\t\tJumlah Penyetoran : %2.f                                \n", tabungan_logam);
				printf("\t\t--------------------------------------------------------\n");
				
				//menuliskan riwayat transaksi user ke dalam file "bukti transaksi.txt"
				fprintf(strukl,"\t\t--------------------------------------------------------\n");
				fprintf(strukl,"\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				fprintf(strukl,"\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				fprintf(strukl,"\t\t--------------------------------------------------------\n");
				fprintf(strukl,"\t\tWaktu             : %s                                  \n", asctime (timeinfo));
				fprintf(strukl,"\t\t--------------------------------------------------------\n");
				fprintf(strukl,"\t\t                BUKTI PENYETORAN SAMPAH                 \n");
				fprintf(strukl,"\t\tUsername          : %s                                  \n", user.username);
				fprintf(strukl,"\t\tNama              : %s                                  \n", user.nama);
				fprintf(strukl,"\t\tAlamat            : %s                                  \n", user.alamat);
				fprintf(strukl,"\t\tTelepon           : %s                                  \n", user.telepon);
				fprintf(strukl,"\t\t--------------------------------------------------------\n");
				fprintf(strukl,"\t\tJenis Sampah      : Logam                               \n");
				fprintf(strukl,"\t\tBerat Sampah      : %1.f                                \n", berat);
				fprintf(strukl,"\t\tJumlah Penyetoran : %2.f                                \n", tabungan_logam);
				fprintf(strukl,"\t\t--------------------------------------------------------\n\n");
				fclose(strukl);
				konfirmasi ();
			}
			else if(pilihan_sampah==4){
				system("cls");
				sampah_botol_kaca();
				printf("\n\t\tPilihan Sampah Botol Kaca		: ");
				scanf("%d", &pilihan);
				if(pilihan==1){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan banyak botol bir (biji) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*600;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==2){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan banyak botol bir (biji) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*200;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==3){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah botol kaca (kg) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*100;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==4){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah botol kaca (kg) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*50;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else if(pilihan==5){
					printf("\t\t--------------------------------------------------------\n");
					printf("\t\tMasukkan berat sampah botol kaca (kg) 	: ");
					scanf("%f", &berat);
					tabungan_botol_kaca = berat*25;
					printf("\t\t--------------------------------------------------------\n");
					printf("\n\t\t\t\tTRANSAKSI BERHASIL!\n");
					printf("\n\t\t--------------------------------------------------------\n");
					printf("\t\tTotal rupiah yang diperoleh 		: Rp %2.f\n", tabungan_botol_kaca);
					printf("\t\t--------------------------------------------------------\n");
					konfirmasi ();
				}
				else{
					printf("\t\t--------------------------------------------------------\n\n");
					printf("\t\t                Pilihan Tidak Tersedia!                 \n");
					printf("\t\t--------------------------------------------------------\n");
				konfirmasi ();		
				} 
				
				printf("\t\t\t>>SEDANG MENCETAK BUKTI TRANSAKSI ANDA>>>");
				sleep(5);
				system("cls");
				//membuat pointer strukb untuk menunjuk pada file "bukti transaksi.txt"
				FILE *strukb;
				//membuka file "bukti transaksi.txt" dengan mode a
				strukb = fopen("bukti transaksi.txt", "a");
				system("cls");
				printf("\n");
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				printf("\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				printf("\t\t--------------------------------------------------------\n");
				printf ( "\t\t\t    Waktu : %s", asctime (timeinfo) );
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\t                BUKTI PENYETORAN SAMPAH                 \n");
				printf("\t\tUsername          : %s                                  \n", user.username);
				printf("\t\tNama              : %s                                  \n", user.nama);
				printf("\t\tAlamat            : %s                                  \n", user.alamat);
				printf("\t\tTelepon           : %s                                  \n", user.telepon);
				printf("\t\t--------------------------------------------------------\n");
				printf("\t\tJenis Sampah      : Botol Kaca                          \n");
				printf("\t\tBerat Sampah      : %1.f                                \n", berat);
				printf("\t\tJumlah Penyetoran : %2.f                                \n", tabungan_botol_kaca);
				printf("\t\t--------------------------------------------------------\n");
				
				//menuliskan riwayat transaksi user ke dalam file "bukti transaksi.txt"
				fprintf(strukb,"\t\t--------------------------------------------------------\n");
				fprintf(strukb,"\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
				fprintf(strukb,"\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
				fprintf(strukb,"\t\t--------------------------------------------------------\n");
				fprintf(strukb,"\t\tWaktu             : %s                                  \n", asctime (timeinfo));
				fprintf(strukb,"\t\t--------------------------------------------------------\n");
				fprintf(strukb,"\t\t                BUKTI PENYETORAN SAMPAH                 \n");
				fprintf(strukb,"\t\tUsername          : %s                                  \n", user.username);
				fprintf(strukb,"\t\tNama              : %s                                  \n", user.nama);
				fprintf(strukb,"\t\tAlamat            : %s                                  \n", user.alamat);
				fprintf(strukb,"\t\tTelepon           : %s                                  \n", user.telepon);
				fprintf(strukb,"\t\t--------------------------------------------------------\n");
				fprintf(strukb,"\t\tJenis Sampah      : Botol Kaca                          \n");
				fprintf(strukb,"\t\tBerat Sampah      : %1.f                                \n", berat);
				fprintf(strukb,"\t\tJumlah Penyetoran : %2.f                                \n", tabungan_botol_kaca);
				fprintf(strukb,"\t\t--------------------------------------------------------\n\n");
				fclose(strukb);
				konfirmasi ();
			}
			tabungan = tabungan + tabungan_plastik + tabungan_kertas + tabungan_logam + tabungan_botol_kaca;
			tabungan_plastik=0;
			tabungan_kertas=0;
			tabungan_logam=0;
			tabungan_botol_kaca=0;
		}
		else if(pilihan_transaksi==3){
			printf("\n\t\t--------------------------------------------------------\n");
			printf("\t\t\tJumlah Saldo Tabungan Anda adalah Rp %2.f\n", tabungan);
			printf("\t\t----------------------------------------------------------\n");
			printf("\t\t\t>>SEDANG MENCETAK BUKTI TRANSAKSI ANDA>>>");
			sleep(5);
			system("cls");
			//membuat pointer saldo untuk menunjuk pada file "bukti transaksi.txt"
			FILE *saldo;
			//membuka file "bukti transaksi.txt" dengan mode a	
			saldo = fopen("bukti transaksi.txt", "a");
			system("cls");
			printf("\n");
			printf("\t\t--------------------------------------------------------\n");
			printf("\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
			printf("\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
			printf("\t\t--------------------------------------------------------\n");
			printf("\t\tWaktu             : %s                                  \n", asctime (timeinfo));
			printf("\t\t--------------------------------------------------------\n");
			printf("\t\t                    INFORMASI SALDO                     \n");
			printf("\t\tUsername          : %s                                  \n", user.username);
			printf("\t\tNama              : %s                                  \n", user.nama);
			printf("\t\tAlamat            : %s                                  \n", user.alamat);
			printf("\t\tTelepon           : %s                                  \n", user.telepon);
			printf("\t\t--------------------------------------------------------\n");
			printf("\t\tTotal Saldo       : %2.f                                \n", tabungan);
			printf("\t\t--------------------------------------------------------\n");
			
			//menuliskan riwayat transaksi user ke dalam file "bukti transaksi.txt"
			fprintf(saldo,"\t\t--------------------------------------------------------\n");
			fprintf(saldo,"\t\t|           BANK SAMPAH JUMPAI ASRI LESTARI            |\n");
			fprintf(saldo,"\t\t|            Desa Jumpai, Klungkung, Bali              |\n");
			fprintf(saldo,"\t\t--------------------------------------------------------\n");
			fprintf(saldo,"\t\tWaktu             : %s                                  \n", asctime (timeinfo));
			fprintf(saldo,"\t\t--------------------------------------------------------\n");
			fprintf(saldo,"\t\t                    INFORMASI SALDO                     \n");
			fprintf(saldo,"\t\tUsername          : %s                                  \n", user.username);
			fprintf(saldo,"\t\tNama              : %s                                  \n", user.nama);
			fprintf(saldo,"\t\tAlamat            : %s                                  \n", user.alamat);
			fprintf(saldo,"\t\tTelepon           : %s                                  \n", user.telepon);
			fprintf(saldo,"\t\t--------------------------------------------------------\n");
			fprintf(saldo,"\t\tTotal Saldo       : %2.f                                \n", tabungan);
			fprintf(saldo,"\t\t--------------------------------------------------------\n\n");
			fclose(saldo);
			konfirmasi ();
		}
		else if(pilihan_transaksi==4){
			goto keluar;
		}
		else{
			menu=2;
			printf("\n\t\t--------------------------------------------------------\n");
			printf("\t\t                Pilihan Tidak Tersedia!                   \n");
			printf("\t\t---------------------------------------------------------\n");
			goto keluar;
		}
	}
	
	konfirmasi1 :
		printf("\n\n");
		printf("\t\t--------------------------------------------------------\n");
		printf("\t\t|           Ingin melanjutkan transaksi lain ?         |\n");
		printf("\t\t|              Tekan 1 untuk melanjutkan               |\n");
		printf("\t\t|              Tekan 2 untuk keluar                    |\n");
		printf("\t\t--------------------------------------------------------\n");
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
