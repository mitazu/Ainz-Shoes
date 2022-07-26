#include<stdio.h>
#include<conio.h>
#include<windows.h>
///..........................................................................///
///                                --*--                                     ///
//                       BISMILLAHIRROHMANIRROHIM                            ///
///                           FIRST PROJECT                                  ///
///                          BY MITA ZURIATI                                 ///
///                   PRODI D3 MANAJEMEN INFORMATIKA                         ///
///                          PUB ANGKATAN'19                                 ///
///                             (NEOPHYTE)                                   ///
///                 PELATIH : KAK ELISA SEPTIANI LUBIS                       ///
///                        TUTOR : TEH IMA NIRMALA                           ///
///                                                                          ///
///                              115 x 45                                    ///
///                                --*--                                     ///
///..........................................................................///
//============================================================================//
//..............................PROTOTYPE.....................................//
//============================================================================//
void beliLagi();
void beliOrPesan();
void bingkai();
void bingkaiLogin();
void bingkaiStruk();
void bingkaiData();
void dataw();
void dataPembeli();
void hargaSh();
void hargaOrData();
void isiAlamat();
void isiNama();
void isiNomorHp();
void info();
void keluar();
void kembali(int x,int y,int v, int w);
void login();
void loguser();
void logpass();
void pilihDataw();
void pilihJumlah();
void pilihMenu();
void pilihUkuran();
void pilihWarna();
void pembayaran();
void persegi(int a,int b,int c, int d,int e);
void pointer (int x,int bat,int y,int warna);
void ss();
void struk();
void tabel();
void tampAwal();
void tampMenu();
void tampBoot();
void tampFlat();
void tampHigh();
void tampSnea();
void tampSlip();
void tampWedg();
void update();
void updateData();
void updateHarga();
void updateLagi();
void updateLagi2();
void yakin();


//....................................................

int valAng(char a[]);
int valHur(char a[]);
int valNom(char a[]);
int valAl(char a[]);
//============================================================================//
//.............................VARIABEL GLOBAL................................//
//============================================================================//
char user[20];
char pass[20];
char pilih;
char nama[35];
char alamat[35];
char nomorHp[35];
char jumlah[10];
char bayar[20];
char upharga[20];
char updata[20];
char strukDat[100][100];
char strukWar[100][100];
char jenis[20][20]={"SNEAKERS","SLIP ON","BOOTS","HIGH HEELS","WEDGES","FLATSHOES"};
char warna[20][20]={"Hitam","Coklat","Abu-abu","Putih","Navy"};
int stokSnea[20][20]={{50,40,30,20,10},{51,41,31,21,11},{52,42,32,22,12},{53,43,33,23,13},{54,44,34,24,14}};
int stokSlip[20][20]={{51,40,30,20,10},{51,41,31,21,11},{52,42,32,22,12},{53,43,33,23,13},{54,44,34,24,14}};
int stokBoot[20][20]={{52,40,30,20,10},{51,41,31,21,11},{52,42,32,22,12},{53,43,33,23,13},{54,44,34,24,14}};
int stokHigh[20][20]={{53,40,30,20,10},{51,41,31,21,11},{52,42,32,22,12},{53,43,33,23,13},{54,44,34,24,14}};
int stokWedg[20][20]={{54,40,30,20,10},{51,41,31,21,11},{52,42,32,22,12},{53,43,33,23,13},{54,44,34,24,14}};
int stokFlat[20][20]={{55,40,30,20,10},{51,41,31,21,11},{52,42,32,22,12},{53,43,33,23,13},{54,44,34,24,14}};
int harga[20][20]={{110000,112000,113000,114000,115000},{121000,122000,123000,124000,125000},{131000,132000,133000,134000,135000},{111000,122000,123000,124000,125000},{151000,152000,153000,154000,145000},{126000,127000,128000,129000,127000}};
int plhwrn;
int plhuk;
int plhdt;
int jumlahHarga;
int strukHar[100];
int strukUk[100];
int strukJml[100];
int xx=0;
int total=0;
int tmp=0;
int s=0;
int pesan=0;
int apdet;

//============================================================================//
//....................................MENU AWAL...............................//
//============================================================================//

void tampMenu(){
persegi(0,4,4,30,42);
persegi(7,5,16,29,18);
persegi(7,5,21,29,23);
persegi(7,5,26,29,28);
persegi(7,5,31,29,33);
persegi(7,5,36,29,38);
textbackground(0);
textcolor(7);
gotoxy(5,7); cprintf("@@@@@@@ @@@@ @@@@ @  @ ");
gotoxy(5,8); cprintf("@  @  @ @    @  @ @  @ ");
gotoxy(5,9);cprintf("@  @  @ @@@  @  @ @  @ ");
gotoxy(5,10);cprintf("@  @  @ @    @  @ @  @ ");
gotoxy(5,11);cprintf("@  @  @ @@@@ @  @ @@@@ ");
gotoxy(5,13);cprintf("@@@@@@@@@@@@@@@@@@@@@@");

textbackground(7);textcolor(0);
gotoxy(10,17);cprintf("1.PENJUALAN");
gotoxy(10,22);cprintf("2.UPDATE DATA");
gotoxy(10,27);cprintf("3.INFO");
gotoxy(10,32);cprintf("4.KELUAR");
gotoxy(10,37);cprintf("PILIHAN:");
pilihMenu();
}

void pilihMenu(){
textbackground(7);textcolor(0);
gotoxy(19,37);cprintf(" ");
gotoxy(19,37);pilih=

getche();

if(pilih=='1'){
	persegi(4,5,16,29,18);
   textbackground(4);textcolor(15);
	gotoxy(10,17);cprintf("1.PENJUALAN");
   beliOrPesan();
}else if(pilih=='2'){
	persegi(4,5,21,29,23);
	textbackground(4);textcolor(15);
	gotoxy(10,22);cprintf("2.UPDATE DATA");
   update();
}else if(pilih=='3'){
	persegi(4,5,26,29,28);
	textbackground(4);textcolor(15);
	gotoxy(10,27);cprintf("3.INFO");
   info();
}else if(pilih=='4'){
	persegi(4,5,31,29,33);
	textbackground(4);textcolor(15);
	gotoxy(10,32);cprintf("4.KELUAR");
   persegi(4,4,4,112,42);
   keluar();
}else{
	textbackground(7);textcolor(4);
	gotoxy(32,37);cprintf("PILIHAN TIDAK TERSEDIA.SILAHKAN PILIH ULANG");Sleep(2000);
   gotoxy(32,37);cprintf("                                           ");
   pilihMenu();
}
}
//============================================================================//
//..............................STRUK.........................................//
//============================================================================//
void hargaSh(){
textcolor(0);
textbackground(7);
jumlahHarga=harga[plhdt][plhwrn]*atoi(jumlah);
gotoxy(36,35);cprintf("Jumlah Harga : %d",jumlahHarga);
total+=jumlahHarga;
strukHar[tmp]=jumlahHarga;
tmp++;
}


void ss(){
textbackground(0);textcolor(15);
	gotoxy(33,10+s);pilih=getch();
   if(pilih==77){
		s=0;
   	persegi(7,28,7,87,38);
   }else{
     ss();
   }
}

void struk(){
bingkaiStruk();
textcolor(4);textbackground(7);
if(pesan==1){
	gotoxy(31,11);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	gotoxy(31,12);cprintf("%c                                                   %c",186,186);
	gotoxy(31,13);cprintf("%c                                                   %c",186,186);
	gotoxy(31,14);cprintf("%c                                                   %c",186,186);
	gotoxy(31,15);cprintf("%c                                                   %c",186,186);
	gotoxy(31,16);cprintf("%c                                                   %c",186,186);
	gotoxy(31,17);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

	gotoxy(33,12);cprintf("Nama Pembeli : %s",nama);
	gotoxy(33,14);cprintf("Alamat       : %s",alamat);
	gotoxy(33,16);cprintf("No. Handphone: %s",nomorHp);
	s+=9;
}
for(int a=0;a<tmp;a++){
	textcolor(0);textbackground(7);
	gotoxy(33,11+s);cprintf("%s,%s,Ukrn %d, x%d",strukDat[a],strukWar[a],strukUk[a],strukJml[a]);
	gotoxy(65,11+s);cprintf("%d",strukHar[a]);        
	s+=3;
	if(s%21==0){
   	textcolor(15);textbackground(0);
   	gotoxy(38,41);cprintf("Tekan > untuk melihat lanjutan struk!");
      ss();
	}
}

textcolor(15);textbackground(0);
gotoxy(38,41);cprintf("                                     ");
textbackground(7);textcolor(0);
gotoxy(57,11+s);cprintf("Total : %d",total);
gotoxy(50,13+s);cprintf("Jumlah Bayar : ");
textcolor(4);
gotoxy(65,13+s);cprintf("Masukkan uang Anda!");Sleep(2200);
gotoxy(65,13+s);cprintf("                   ");
pembayaran();
}


void pembayaran(){
textcolor(0);textbackground(7);
int a=0,x=0;
gotoxy(65,13+s);bayar[a]=getch();
while(bayar[a]!=13){
	if(bayar[a]==8){
      a--;
      if(a<0){
      	a=0;
      }gotoxy(65+a,13+s);cprintf(" ");
   }else{
   	cprintf("%c",bayar[a]);
      a++;
   }if(a>=10){
   	a=10;gotoxy(75,13+s);cprintf(" ");
   }gotoxy(65+a,13+s);bayar[a]=getch();
}bayar[a]=NULL;
for(int i=0;i<strlen(bayar);i++){
	if(bayar[i]==' '){
   	x++;
}
}if(x==strlen(bayar)){
	textcolor(4);
   gotoxy(50,15+s);cprintf("Inputan tidak boleh kosong!");Sleep(1000);
   gotoxy(50,15+s);cprintf("                           ");
   gotoxy(65,13+s);cprintf("            ");
   pembayaran();
}else if(valAng(bayar)==0&&strlen(bayar)!=0&&bayar[0]!='0'){
	if(atoi(bayar)>total){
   	gotoxy(53,15+s);cprintf("Kembalian : %d",atoi(bayar)-total);
      total=0;tmp=0;s=0;pesan=0;xx=0;
      textcolor(15);textbackground(0);
		gotoxy(38,41);cprintf("TEKAN '0' UNTUK KEMBALI KE MENU UTAMA");
      kembali(50,42,15,0);
      bingkai();
      tampMenu();
   }else if(atoi(bayar)==total){
      textcolor(4);
      gotoxy(57,15+s);cprintf("Uang anda Pas!");
      tmp=0;s=0;pesan=0;total=0;xx=0;
      textcolor(15);textbackground(0);
		gotoxy(38,41);cprintf("TEKAN '0' UNTUK KEMBALI KE MENU UTAMA");
      kembali(50,42,15,0);
      bingkai();
      tampMenu();
   }else if(atoi(bayar)<total){
   	textcolor(4);
      gotoxy(50,15+s);cprintf("Uang Anda kurang. Input uang kembali!");Sleep(1200);
      gotoxy(50,15+s);cprintf("                                     ");
      gotoxy(65,13+s);cprintf("            ");
      pembayaran();
   }
}else{
	textcolor(4);
 	gotoxy(50,15+s);cprintf("Invalid. Silahkan input ulang!");Sleep(1200);
   gotoxy(50,15+s);cprintf("                              ");
   gotoxy(65,13+s);cprintf("            ");
   pembayaran();
}
}


//============================================================================//
//...........................TAMPILAN.........................................//
//============================================================================//

void tampAwal(){
for(int a=10;a<=20;a++){
textbackground(7);
textcolor(a);
gotoxy(31,10);cprintf("        %c%c%c        %c%c%c%c%c %c%c%c%c%c   %c%c%c%c%c %c%c%c%c%c%c%c%c%c      ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(15);
gotoxy(31,11);cprintf("       %c%c%c%c%c        %c%c%c   %c%c%c%c%c   %c%c%c  %c%c%c%c%c%c%c%c%c         ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);  Sleep(15);
gotoxy(31,12);cprintf("      %c%c%c %c%c%c       %c%c%c   %c%c%c%c%c%c  %c%c%c       %c%c%c       ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);  Sleep(15);
gotoxy(31,13);cprintf("     %c%c%c   %c%c%c      %c%c%c   %c%c%c %c%c%c %c%c%c      %c%c%c        ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(15);
gotoxy(31,14);cprintf("    %c%c%c     %c%c%c     %c%c%c   %c%c%c  %c%c%c%c%c%c     %c%c%c         ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(15);
gotoxy(31,15);cprintf("   %c%c%c       %c%c%c    %c%c%c   %c%c%c   %c%c%c%c%c    %c%c%c          ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(15);
gotoxy(31,16);cprintf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c    %c%c%c%c   %c%c%c%c%c%c%c%c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(15);
gotoxy(31,17);cprintf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c    %c%c%c   %c%c%c%c%c%c%c%c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);   Sleep(15);
}
textcolor(0);
      gotoxy(10,20);cprintf("          **                                                                  **             ");Sleep(100);
		gotoxy(10,21);cprintf("       ***  ***        *                  ** * **                          ***  ***          ");Sleep(99);
      gotoxy(10,22);cprintf("      ****    **       **             **************                      ****    **         ");Sleep(98);
      gotoxy(10,23);cprintf("     ******            **            ******* ** *******        ****      ******              ");Sleep(97);
      gotoxy(10,24);cprintf("      *************    **           *****           ****     ********     *************      ");Sleep(96);
      gotoxy(10,25);cprintf("       *************   ** *****    *****             ****   ***      *     *************     ");Sleep(95);
      gotoxy(10,26);cprintf("         ************  ****   ***  ****               ***  **         *     *************    ");Sleep(94);
      gotoxy(10,27);cprintf("    *****        ****  ***     *** ****               ***  ************ *****        ****    ");Sleep(93);
      gotoxy(10,28);cprintf("     ***         ***   ***     ***  ***               **   **            ***         ***     ");Sleep(94);
      gotoxy(10,29);cprintf("      **         **    ***     ***   ***             **    **        *    **         **      ");Sleep(93);
		gotoxy(10,30);cprintf("       *         *     **      **     ***          *        ***     *     *         *       ");Sleep(92);
		gotoxy(10,31);cprintf("           *  *        *       *          * * * *              *****          *  *          ");Sleep(91);
Sleep(2000);
persegi(7,4,4,112,40);
bingkaiLogin();
}
void tabel(){
textbackground(7);textcolor(4);
gotoxy(40,4);cprintf("- A I N Z   S H O E S -");
	 for(int y=1;y<=18;y++){
   	gotoxy(36,y+5);cprintf("%c",219);
      gotoxy(52,y+5);cprintf("%c",219);
      gotoxy(92,y+5);cprintf("%c",219);
      gotoxy(109,y+5);cprintf("%c",219);
      if(y>2){
      	gotoxy(60,y+5);cprintf("%c",219);
      	gotoxy(68,y+5);cprintf("%c",219);
         gotoxy(76,y+5);cprintf("%c",219);
      	gotoxy(84,y+5);cprintf("%c",219);
      }
    }
    for(int x=1;x<=74;x++){
   	gotoxy(x+35,5);cprintf("%c",219);
      gotoxy(x+35,11);cprintf("%c",219);
      gotoxy(x+35,23);cprintf("%c",219);
      if((x>18)&&(x<59)){
      	gotoxy(x+33,8);cprintf("%c",219);
      }
    }
textcolor(0);
gotoxy(42,8);cprintf("WARNA");
gotoxy(71,7);cprintf("STOK");
gotoxy(55,10);cprintf("36");
gotoxy(63,10);cprintf("37");
gotoxy(71,10);cprintf("38");
gotoxy(79,10);cprintf("39");
gotoxy(87,10);cprintf("40");
gotoxy(98,8);cprintf("HARGA");
}
void pointer (int x,int bat, int y,int warna){
textcolor(warna);
	for(int i=x;i<=x+bat;i++){
   	gotoxy(i,y);cprintf("%c",219);
   }
   for(int i=x;i<=x+bat;i++){
   	gotoxy(i,y+4);cprintf("%c",219);
   }
}void persegi(int a, int b, int c,int d,int e){
textcolor(a);
for(int x=b;x<=d;x++){
	for(int y=c;y<=e;y++){
    	gotoxy(x,y);cprintf("%c",219);
   }
}
}

void bingkaiData(){
persegi(7,36,4,110,41);
persegi(0,4,4,30,42);
persegi(7,6,6,28,8);
persegi(7,6,11,28,13);
persegi(7,6,16,28,18);
persegi(7,6,21,28,23);
persegi(7,6,26,28,28);
persegi(7,6,31,28,33);
persegi(7,6,36,28,38);
}

void bingkaiLogin(){
textcolor(0);
for(int a=1;a<=5;a++){
	for(int b=1;b<=29;b++){
    	gotoxy(43+b,20+a);cprintf("%c",219);
   }
}
textcolor(8);
for(int a=43;a<=73;a++){
	gotoxy(a,20);cprintf("%c",219);
   gotoxy(a,26);cprintf("%c",219);
}for(int a=20;a<=26;a++){
	gotoxy(43,a);cprintf("%c",219);
   gotoxy(73,a);cprintf("%c",219);
} loguser();
}


void bingkai(){
persegi(8,2,2,114,44);
persegi(7,3,3,113,43);
textbackground(7);
textcolor(4);
gotoxy(92,42);cprintf("copyright by: mitazu");
}

void bingkaiStruk(){
persegi(7,28,7,87,38);
textbackground(7);
textcolor(4);
	for(int i=0;i<=59;i++){
		gotoxy(28+i,5);cprintf("%c",177);
   	gotoxy(28+i,39);cprintf("%c",177);
   	gotoxy(28+i,6);cprintf("%c",177);
   	gotoxy(28+i,40);cprintf("%c",177);
	}
gotoxy(34,8);cprintf("\" S T R U K  B E L A N J A  A I N Z  S H O E S \"");
gotoxy(30,9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202);
}

//============================================================================//
//............................................................................//
//============================================================================//

void info(){
textbackground(4);textcolor(15);
gotoxy(43,10);cprintf("===========================================================");
gotoxy(43,29);cprintf("===========================================================");
gotoxy(43,11);cprintf("                                                           ");Sleep(20);
gotoxy(43,12);cprintf("                     SELAMAT DATANG DI                     ");Sleep(20);
gotoxy(43,13);cprintf("                 APLIKASI PENJUALAN SEPATU                 ");Sleep(20);
gotoxy(43,14);cprintf("                       AINZ SHOES                          ");Sleep(20);
gotoxy(43,15);cprintf("                                                           ");Sleep(20);
gotoxy(43,16);cprintf("   APLIKASI INI DIBUAT UNTUK MEMUDAHKAN PENJUAL DALAM      ");Sleep(20);
gotoxy(43,17);cprintf("    MENGELOLA SERTA MENJUAL PRODUK SEPATU YANG DIJUAL.     ");Sleep(20);
gotoxy(43,18);cprintf("   SEMOGA APLIKASI INI DAPAT BERGUNA UNTUK BANYAK ORANG:)  ");Sleep(20);
gotoxy(43,19);cprintf("                                                           ");Sleep(20);
gotoxy(43,20);cprintf("                                                           ");Sleep(20);
gotoxy(43,21);cprintf("  tentang produk:                                          ");Sleep(20);
gotoxy(43,22);cprintf("  Menjual berbagai jenis sepatu wanita berkualitas dengan  ");Sleep(20);
gotoxy(43,23);cprintf("  berbaga warna yang menarik.Terbuat dari bahan terbaik    ");Sleep(20);
gotoxy(43,24);cprintf("  sehingga terasa nyaman saat digunakan dan tahan lama.    ");Sleep(20);
gotoxy(43,25);cprintf("                                                           ");Sleep(20);
gotoxy(43,26);cprintf("                                                           ");Sleep(20);
gotoxy(43,27);cprintf("  Happy Shooping..                                         ");Sleep(20);
gotoxy(43,28);cprintf("                                                           ");Sleep(20);
textcolor(0);textbackground(7);
gotoxy(43,31);cprintf("         TEKAN '0' UNTUK KEMBALI KE MENU UTAMA");
kembali(60,32,0,7);
}

void kembali(int x,int y,int v, int w){
textcolor(v);textbackground(w);
gotoxy(x,y);pilih=getch();
if(pilih=='0'){
	persegi(7,3,3,113,43);
	tampMenu();
}else{
	textcolor(4);
   gotoxy(x,y);cprintf("INPUTAN SALAH!");Sleep(1000);
   gotoxy(x,y);cprintf("              ");
   kembali(x,y,v,w);
}
}

//============================================================================//
//.............................PENJUALAN......................................//
//============================================================================//

void pilihDataw(){
textbackground(7);
textcolor(0);
gotoxy(20,37);cprintf(" ");
gotoxy(20,37);pilih=getche();
if(pilih=='1'){
	plhdt=0;
	persegi(4,6,6,28,8);
   textbackground(4);textcolor(15);
   strcpy(strukDat[tmp],"SNEAKERS");
   gotoxy(12,7);cprintf("1.SNEAKERS  ");
   tabel();
   tampSnea();
   pilihWarna();
}else if(pilih=='2'){
	plhdt=1;
	persegi(4,6,11,28,13);
   textbackground(4);textcolor(15);
   gotoxy(12,12);cprintf(" 2.SLIP ON  ");
   strcpy(strukDat[tmp],"SLIP ON");
  	tabel();
   tampSlip();
   pilihWarna();
}else if(pilih=='3'){
	plhdt=2;
	persegi(4,6,16,28,18);
   textbackground(4);textcolor(15);
  	gotoxy(12,17);cprintf("  3.BOOTS   ");
   strcpy(strukDat[tmp],"BOOTS");
  	tabel();
   tampBoot();
   pilihWarna();
}else if(pilih=='4'){
	plhdt=3;
	persegi(4,6,21,28,23);
   textbackground(4);textcolor(15);
  	gotoxy(12,22);cprintf("4.HIGH HEELS");
   strcpy(strukDat[tmp],"HIGH HEELS");
  	tabel();
   tampHigh();
   pilihWarna();
}else if(pilih=='5'){
	plhdt=4;
	persegi(4,6,26,28,28);
  	textbackground(4);textcolor(15);
  	gotoxy(12,27);cprintf(" 5.WEDGES   ");
   strcpy(strukDat[tmp],"WEDGES");
  	tabel();
   tampWedg();
   pilihWarna();

}else if(pilih=='6'){
	plhdt=5;
  	persegi(4,6,31,28,33);
  	textbackground(4);textcolor(15);
  	gotoxy(12,32);cprintf("6.FLATSHOES");
   strcpy(strukDat[tmp],"FLATSHOES");
  	tabel();
   tampFlat();
   pilihWarna();
}else if(pilih=='0'){
	if(xx==0 && apdet==0){
   	if(pesan==1) yakin();
  		else{
      	persegi(0,4,4,30,42);
   		beliOrPesan();
      }
   }else if((apdet==1 || apdet ==2)&& xx==0 ){
      persegi(0,4,4,30,42);
   	hargaOrData();
   }else if(xx!=0){
   	textcolor(4);
      if(apdet==1 ||apdet==2){
         gotoxy(32,37);cprintf("Tidak dapat kembali.");
      	gotoxy(32,38);cprintf("Silahkan selesaikan update-an anda terlebih dulu");Sleep(1000);
      }else{
      	gotoxy(32,37);cprintf("Tidak dapat kembali.");
      	gotoxy(32,38);cprintf("Silahkan selesaikan belanjaan anda terlebih dulu");Sleep(1000);
      }gotoxy(32,37);cprintf("                     ");
      gotoxy(32,38);cprintf("                                                ");
      pilihDataw();
   }
}else{
  	textbackground(7);textcolor(4);
  	gotoxy(32,37);cprintf("PILIHAN TIDAK TERSEDIA.SILAHKAN PILIH ULANG");Sleep(2000);
  	gotoxy(32,37);cprintf("                                           ");
	pilihDataw();
}
}
void pilihWarna(){
textbackground(0);textcolor(15);
gotoxy(6,41);cprintf("Tekan '0' untuk kembali");
textbackground(7);textcolor(0);
gotoxy(36,25);cprintf("Pilih Warna :");
gotoxy(50,25);pilih=getche();
if(pilih=='0'){
	dataw();
}else if(pilih=='1'||pilih=='2'||pilih=='3'||pilih=='4'||pilih=='5'){
	textbackground(0);
   xx=1;gotoxy(6,41);cprintf("                       ");
}textbackground(7);
	if(pilih=='1'){
   	plhwrn=0;
   	if(apdet==2){
         updateHarga();
      }else{
      	strcpy(strukWar[tmp],"HITAM");
      	pilihUkuran();}
   }else if(pilih=='2'){
   	plhwrn=1;
      if(apdet==2){
         updateHarga();
      }else{
      	strcpy(strukWar[tmp],"COKLAT");
   		pilihUkuran();}
   }else if(pilih=='3'){
   	plhwrn=2;
      if(apdet==2){
         updateHarga();
      }else{
      	strcpy(strukWar[tmp],"ABU-ABU");
   		pilihUkuran();}
   }else if(pilih=='4'){
   	plhwrn=3;
      if(apdet==2){
         updateHarga();
      }else{
      	strcpy(strukWar[tmp],"PUTIH");
   		pilihUkuran();}
   }else if(pilih=='5'){
   	plhwrn=4;
      if(apdet==2){
         updateHarga();
      }else{
      	strcpy(strukWar[tmp],"NAVY");
   		pilihUkuran();}
   }else{
   	textcolor(4);
   	gotoxy(50,25);cprintf("Pilihan tidak ada. Silahkan pilih ulang!");Sleep(1000);
      gotoxy(50,25);cprintf("                                        ");
      pilihWarna();
   }
}

void pilihUkuran(){
textcolor(0);textbackground(7);
gotoxy(36,29);cprintf("Pilih Ukuran:");
textcolor(15);textbackground(0);
gotoxy(50,28);cprintf("      "); gotoxy(58,28);cprintf("      ");
gotoxy(50,29);cprintf("  36  "); gotoxy(58,29);cprintf("  37  ");
gotoxy(50,30);cprintf("      "); gotoxy(58,30);cprintf("      ");

gotoxy(66,28);cprintf("      "); gotoxy(74,28);cprintf("      ");
gotoxy(66,29);cprintf("  38  "); gotoxy(74,29);cprintf("  39  ");
gotoxy(66,30);cprintf("      "); gotoxy(74,30);cprintf("      ");

gotoxy(82,28);cprintf("      ");
gotoxy(82,29);cprintf("  40  ");
gotoxy(82,30);cprintf("      ");
pointer(50,5,27,4);pointer (58,29,27,7);
int tamp=1,b=0;
   while (b != 13){
      b=getch();
      if (b == 77){
      	if(tamp == 1){
            tamp=2;
            pointer(50,5,27,7);pointer (58,5,27,4);pointer(66,22,27,7);
			}else if (tamp == 2){
            tamp=3;
            pointer (50,13,27,7);pointer (66,5,27,4);pointer(74,14,27,7);
         }else if (tamp == 3){
            tamp=4;
            pointer (50,21,27,7);pointer (74,5,27,4);pointer(82,6,27,7);
         }else if (tamp == 4){
            tamp=5;
            pointer (50,29,27,7);pointer (82,5,27,4);
         }else if (tamp == 5){
            tamp=1;
            pointer (50,5,27,4);pointer (58,29,27,7);
         }
      }else if(b == 75){
      	if(tamp == 1){
            tamp=5;
            pointer (50,29,27,7);pointer (82,5,27,4);
         }else if (tamp == 2){
            tamp=1;
            pointer (50,5,27,4);pointer (58,29,27,7);
         }else if (tamp == 3){
            tamp=2;
            pointer(50,5,27,7);pointer(58,5,27,4);pointer(66,22,27,7);
         }else if (tamp == 4){
            tamp=3;
            pointer (50,13,27,7);pointer (66,5,27,4);pointer(74,14,27,7);
         }else if (tamp == 5){
            tamp=4;
            pointer (50,21,27,7);pointer (74,5,27,4);pointer(82,6,27,7);
         }
		}else if(b!=0 && b!=13){
         textcolor(4);
		   textbackground(7);
         gotoxy(45,37); cprintf("Gunakan \"%c\" untuk geser kiri & \"%c\" untuk geser kanan",17,16);
   		gotoxy(45,38); cprintf("              Gunakan ENTER untuk Memilih");  Sleep(1000);
         gotoxy(45,37); cprintf("                                                           " );
  		   gotoxy(45,38); cprintf("                                                           ");
       }
	}if(tamp==1){
      plhuk=0;
   }else if(tamp==2){
   	plhuk=1;
   }else if(tamp==3){
   	plhuk=2;
   }else if(tamp==4){
   	plhuk=3;
   }else if(tamp==5){
   	plhuk=4;
   }
if(apdet==1){
	if(plhdt==0){
    	if(tamp==1 && stokSnea[plhwrn][plhuk]<300 ){
      	strukUk[tmp]=36;
      	updateData();
   	}else if(tamp==2&& stokSnea[plhwrn][plhuk]<300){
   		strukUk[tmp]=37;
         updateData();
   	}else if(tamp==3&& stokSnea[plhwrn][plhuk]<300){
   		strukUk[tmp]=38;
      	updateData();
   	}else if(tamp==4&& stokSnea[plhwrn][plhuk]<300){
   		strukUk[tmp]=39;
      	updateData();
   	}else if(tamp==5&& stokSnea[plhwrn][plhuk]<300){
   		strukUk[tmp]=40;
      	updateData();
   	}else if(stokSnea[plhwrn][plhuk]>=300){
      	textcolor(4);
   		textbackground(7);
      	gotoxy(50,33);cprintf("Stok sudah penuh. Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                             ");
      	pilihUkuran();
   	}
   }else if(plhdt==1){
      if(tamp==1 && stokSlip[plhwrn][plhuk]<300 ){
      	strukUk[tmp]=36;
     	 	updateData();
   	}else if(tamp==2&& stokSlip[plhwrn][plhuk]<300){
   		strukUk[tmp]=37;
      	updateData();
   	}else if(tamp==3&& stokSlip[plhwrn][plhuk]<300){
   		strukUk[tmp]=38;
      	updateData();
   	}else if(tamp==4&& stokSlip[plhwrn][plhuk]<300){
   		strukUk[tmp]=39;
      	updateData();
   	}else if(tamp==5&& stokSlip[plhwrn][plhuk]<300){
   		strukUk[tmp]=40;
      	updateData();
   	}else if(stokSlip[plhwrn][plhuk]>=300){
   		textcolor(4);textbackground(7);
      	gotoxy(50,33);cprintf("Stok sudah penuh. Silahkan pilih ukuran lain!");Sleep(1500);
         gotoxy(50,33);cprintf("                                             ");
      	pilihUkuran();
   	}
   }else if(plhdt==2){
      if(tamp==1 && stokBoot[plhwrn][plhuk]<300 ){
      	strukUk[tmp]=36;
      	updateData();
   	}else if(tamp==2&& stokBoot[plhwrn][plhuk]<300){
   		strukUk[tmp]=37;
      	updateData();
   	}else if(tamp==3&& stokBoot[plhwrn][plhuk]<300){
   		strukUk[tmp]=38;
      	updateData();
   	}else if(tamp==4&& stokBoot[plhwrn][plhuk]<300){
   		strukUk[tmp]=39;
      	updateData();
   	}else if(tamp==5&& stokBoot[plhwrn][plhuk]<300){
   		strukUk[tmp]=40;
      	updateData();
   	}else if( stokBoot[plhwrn][plhuk]>=300){
   		textcolor(4);textbackground(7);
      	gotoxy(50,33);cprintf("Stok sudah penuh. Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                             ");
      	pilihUkuran();
   	}
   }else if(plhdt==3){
      if(tamp==1 && stokHigh[plhwrn][plhuk]<300 ){
      	strukUk[tmp]=36;
      	updateData();
   	}else if(tamp==2&& stokHigh[plhwrn][plhuk]<300){
   		strukUk[tmp]=37;
      	updateData();
   	}else if(tamp==3&& stokHigh[plhwrn][plhuk]<300){
   		strukUk[tmp]=38;
      	updateData();
   	}else if(tamp==4&& stokHigh[plhwrn][plhuk]<300){
   		strukUk[tmp]=39;
      	updateData();
   	}else if(tamp==5&& stokHigh[plhwrn][plhuk]<300){
   		strukUk[tmp]=40;
      	updateData();
   	}else if(stokHigh[plhwrn][plhuk]>=300){
   		textbackground(7);textcolor(4);
      	gotoxy(50,33);cprintf("Stok sudah penuh. Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                             ");
      	pilihUkuran();
   	}
   }else if(plhdt==4){
      if(tamp==1 && stokWedg[plhwrn][plhuk]<300 ){
      	strukUk[tmp]=36;
      	updateData();
   	}else if(tamp==2&& stokWedg[plhwrn][plhuk]<300){
   		strukUk[tmp]=37;
      	updateData();
   	}else if(tamp==3&& stokWedg[plhwrn][plhuk]<300){
   		strukUk[tmp]=38;
      	updateData();
   	}else if(tamp==4&& stokWedg[plhwrn][plhuk]<300){
   		strukUk[tmp]=39;
     	 	updateData();
   	}else if(tamp==5&& stokWedg[plhwrn][plhuk]<300){
   		strukUk[tmp]=40;
      	updateData();
   	}else if(stokWedg[plhwrn][plhuk]>=300){
   		textbackground(7);textcolor(4);
      	gotoxy(50,33);cprintf("Stok sudah penuh. Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                             ");
      	pilihUkuran();
   	}
   }else if(plhdt==5){
      if(tamp==1 && stokFlat[plhwrn][plhuk]<300 ){
      	strukUk[tmp]=36;
      	updateData();
   	}else if(tamp==2&& stokFlat[plhwrn][plhuk]<300){
   		strukUk[tmp]=37;
     	   updateData();
   	}else if(tamp==3&& stokFlat[plhwrn][plhuk]<300){
   		strukUk[tmp]=38;
      	updateData();
   	}else if(tamp==4&& stokFlat[plhwrn][plhuk]<300){
   		strukUk[tmp]=39;
      	updateData();
   	}else if(tamp==5&& stokFlat[plhwrn][plhuk]<300){
   		strukUk[tmp]=40;
      	updateData();
   	}else if(stokFlat[plhwrn][plhuk]>=300){
   		textbackground(7);textcolor(4);
      	gotoxy(50,33);cprintf("Stok sudah penuh Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                            ");
      	pilihUkuran();
   	}
   }
}else{
   if(plhdt==0){
    	if(tamp==1 && stokSnea[plhwrn][plhuk]>0 ){
      	strukUk[tmp]=36;
      	pilihJumlah();
   	}else if(tamp==2&& stokSnea[plhwrn][plhuk]>0){
   		strukUk[tmp]=37;
      	pilihJumlah();
   	}else if(tamp==3&& stokSnea[plhwrn][plhuk]>0){
   		strukUk[tmp]=38;
      	pilihJumlah();
   	}else if(tamp==4&& stokSnea[plhwrn][plhuk]>0){
   		strukUk[tmp]=39;
      	pilihJumlah();
   	}else if(tamp==5&& stokSnea[plhwrn][plhuk]>0){
   		strukUk[tmp]=40;
      	pilihJumlah();
   	}else if(stokSnea[plhwrn][plhuk]<=0){
      	textcolor(4);
   		textbackground(7);
      	gotoxy(50,33);cprintf("Stok habis. Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                       ");
      	pilihUkuran();
   	}
   }else if(plhdt==1){
      if(tamp==1 && stokSlip[plhwrn][plhuk]>0 ){
      	strukUk[tmp]=36;
     	 	pilihJumlah();
   	}else if(tamp==2&& stokSlip[plhwrn][plhuk]>0){
   		strukUk[tmp]=37;
      	pilihJumlah();
   	}else if(tamp==3&& stokSlip[plhwrn][plhuk]>0){
   		strukUk[tmp]=38;
      	pilihJumlah();
   	}else if(tamp==4&& stokSlip[plhwrn][plhuk]>0){
   		strukUk[tmp]=39;
      	pilihJumlah();
   	}else if(tamp==5&& stokSlip[plhwrn][plhuk]>0){
   		strukUk[tmp]=40;
      	pilihJumlah();
   	}else if(stokSlip[plhwrn][plhuk]<=0){
   		textcolor(4);textbackground(7);
      	gotoxy(50,33);cprintf("Stok habis. Silahkan pilih ukuran lain!");Sleep(1500);
         gotoxy(50,33);cprintf("                                       ");
      	pilihUkuran();
   	}
   }else if(plhdt==2){
      if(tamp==1 && stokBoot[plhwrn][plhuk]>0 ){
      	strukUk[tmp]=36;
      	pilihJumlah();
   	}else if(tamp==2&& stokBoot[plhwrn][plhuk]>0){
   		strukUk[tmp]=37;
      	pilihJumlah();
   	}else if(tamp==3&& stokBoot[plhwrn][plhuk]>0){
   		strukUk[tmp]=38;
      	pilihJumlah();
   	}else if(tamp==4&& stokBoot[plhwrn][plhuk]>0){
   		strukUk[tmp]=39;
      	pilihJumlah();
   	}else if(tamp==5&& stokBoot[plhwrn][plhuk]>0){
   		strukUk[tmp]=40;
      	pilihJumlah();
   	}else if( stokBoot[plhwrn][plhuk]<=0){
   		textcolor(4);textbackground(7);
      	gotoxy(50,33);cprintf("Stok habis. Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                       ");
      	pilihUkuran();
   	}
   }else if(plhdt==3){
      if(tamp==1 && stokHigh[plhwrn][plhuk]>0 ){
      	strukUk[tmp]=36;
      	pilihJumlah();
   	}else if(tamp==2&& stokHigh[plhwrn][plhuk]>0){
   		strukUk[tmp]=37;
      	pilihJumlah();
   	}else if(tamp==3&& stokHigh[plhwrn][plhuk]>0){
   		strukUk[tmp]=38;
      	pilihJumlah();
   	}else if(tamp==4&& stokHigh[plhwrn][plhuk]>0){
   		strukUk[tmp]=39;
      	pilihJumlah();
   	}else if(tamp==5&& stokHigh[plhwrn][plhuk]>0){
   		strukUk[tmp]=40;
      	pilihJumlah();
   	}else if(stokHigh[plhwrn][plhuk]<=0){
   		textbackground(7);textcolor(4);
      	gotoxy(50,33);cprintf("Stok habis. Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                       ");
      	pilihUkuran();
   	}
   }else if(plhdt==4){
      if(tamp==1 && stokWedg[plhwrn][plhuk]>0 ){
      	strukUk[tmp]=36;
      	pilihJumlah();
   	}else if(tamp==2&& stokWedg[plhwrn][plhuk]>0){
   		strukUk[tmp]=37;
      	pilihJumlah();
   	}else if(tamp==3&& stokWedg[plhwrn][plhuk]>0){
   		strukUk[tmp]=38;
      	pilihJumlah();
   	}else if(tamp==4&& stokWedg[plhwrn][plhuk]>0){
   		strukUk[tmp]=39;
     	 	pilihJumlah();
   	}else if(tamp==5&& stokWedg[plhwrn][plhuk]>0){
   		strukUk[tmp]=40;
      	pilihJumlah();
   	}else if(stokWedg[plhwrn][plhuk]<=0){
   		textbackground(7);textcolor(4);
      	gotoxy(50,33);cprintf("Stok habis. Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                       ");
      	pilihUkuran();
   	}
   }else if(plhdt==5){
      if(tamp==1 && stokFlat[plhwrn][plhuk]>0 ){
      	strukUk[tmp]=36;
      	pilihJumlah();
   	}else if(tamp==2&& stokFlat[plhwrn][plhuk]>0){
   		strukUk[tmp]=37;
     	   pilihJumlah();
   	}else if(tamp==3&& stokFlat[plhwrn][plhuk]>0){
   		strukUk[tmp]=38;
      	pilihJumlah();
   	}else if(tamp==4&& stokFlat[plhwrn][plhuk]>0){
   		strukUk[tmp]=39;
      	pilihJumlah();
   	}else if(tamp==5&& stokFlat[plhwrn][plhuk]>0){
   		strukUk[tmp]=40;
      	pilihJumlah();
   	}else if(stokFlat[plhwrn][plhuk]<=0){
   		textbackground(7);textcolor(4);
      	gotoxy(50,33);cprintf("Stok habis. Silahkan pilih ukuran lain!");Sleep(1500);
      	gotoxy(50,33);cprintf("                                       ");
      	pilihUkuran();
   	}
   }
}
}

void pilihJumlah(){
int x=plhuk*8;
int y=plhwrn*2;
textcolor(0);
textbackground(7);
gotoxy(36,33);cprintf("Masukkan Jumlah : ");
int a=0;
   gotoxy(54,33);jumlah[a]=getch();
   textcolor(0);
	textbackground(7);
   while(jumlah[a]!=13){
      if(jumlah[a]==8){
      	a--;
      	if(a<0){
      		a=0;
      	}gotoxy(54+a,33);cprintf(" ");
      }else{
         cprintf("%c",jumlah[a]);
      	a++;
      }if(a>4){
      	a=4;gotoxy(58,33);cprintf(" ");
      }gotoxy(54+a,33);jumlah[a]=getch();
   }jumlah[a]=NULL;
if(valAng(jumlah)==0&&strlen(jumlah)<5&&strlen(jumlah)!=0&&jumlah[0]!='0'){
	strukJml[tmp]=atoi(jumlah);
   if(plhdt==0){
   	if(atoi(jumlah)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	pilihJumlah();
   	}else if(atoi(jumlah)>stokSnea[plhwrn][plhuk]){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok tidak cukup.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                      ");
      	pilihJumlah();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokSnea[plhwrn][plhuk]-=atoi(jumlah);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokSnea[plhwrn][plhuk]);
         hargaSh();
      	beliLagi();
   	}
   }else if(plhdt==1){
       if(atoi(jumlah)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	pilihJumlah();
   	}else if(atoi(jumlah)>stokSlip[plhwrn][plhuk]){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok tidak cukup.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                      ");
      	pilihJumlah();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokSlip[plhwrn][plhuk]-=atoi(jumlah);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokSlip[plhwrn][plhuk]);
         hargaSh();
      	beliLagi();
   	}
   }else if(plhdt==2){
       if(atoi(jumlah)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	pilihJumlah();
   	}else if(atoi(jumlah)>stokBoot[plhwrn][plhuk]){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok tidak cukup.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                      ");
      	pilihJumlah();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokBoot[plhwrn][plhuk]-=atoi(jumlah);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokBoot[plhwrn][plhuk]);
         hargaSh();
      	beliLagi();
   	}
   }else if(plhdt==3){
       if(atoi(jumlah)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	pilihJumlah();
   	}else if(atoi(jumlah)>stokHigh[plhwrn][plhuk]){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok tidak cukup.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                      ");
      	pilihJumlah();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokHigh[plhwrn][plhuk]-=atoi(jumlah);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokHigh[plhwrn][plhuk]);
         hargaSh();
      	beliLagi();
   	}
   }else if(plhdt==4){
       if(atoi(jumlah)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	pilihJumlah();
   	}else if(atoi(jumlah)>stokWedg[plhwrn][plhuk]){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok tidak cukup.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                      ");
      	pilihJumlah();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokWedg[plhwrn][plhuk]-=atoi(jumlah);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokWedg[plhwrn][plhuk]);
         hargaSh();
      	beliLagi();
   	}
   }else if(plhdt==5){
       if(atoi(jumlah)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	pilihJumlah();
   	}else if(atoi(jumlah)>stokFlat[plhwrn][plhuk]){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok tidak cukup.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                      ");
      	pilihJumlah();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokFlat[plhwrn][plhuk]-=atoi(jumlah);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokFlat[plhwrn][plhuk]);
         hargaSh();
      	beliLagi();
   	}
   }
}else{
	textcolor(4);
   gotoxy(54,33);cprintf("Inputan tidak valid!!");Sleep(1000);
   gotoxy(54,33);cprintf("                     ");
   pilihJumlah();
}
}

void beliLagi(){
textcolor(0);textbackground(7);
gotoxy(36,39);cprintf("Mau pesan lagi?");
textbackground(0);textcolor(15);
gotoxy(52,38);cprintf("        ");
gotoxy(52,39);cprintf("   Ya   ");
gotoxy(52,40);cprintf("        ");

gotoxy(63,38);cprintf("        ");
gotoxy(63,39);cprintf(" Tidak  ");
gotoxy(63,40);cprintf("        ");

pointer(52,7,37,4);
int tamp=1,b=0;
   while (b != 13){
   	b=getch();
      if (b == 77){
      	if(tamp == 1){
            tamp=2;
            pointer(52,7,37,7);pointer(63,7,37,4);
			}else if (tamp == 2){
            tamp=1;
            pointer(52,7,37,4);pointer(63,7,37,7);
         }
      }else if(b == 75){
      	if(tamp == 1){
            tamp=2;
            pointer(52,7,37,7);pointer(63,7,37,4);
         }else if (tamp == 2){
            tamp=1;
            pointer(52,7,37,4);pointer(63,7,37,7);
         }
		}else if(b!=0 && b!=13){
         textcolor(4);textbackground(7);
         gotoxy(35,43); cprintf("Gunakan \"%c\" untuk geser kiri & \"%c\" untuk geser kanan",17,16);Sleep(1000);
         gotoxy(35,43); cprintf("                                                          " );
       }
	}
if (tamp==1){
	dataw();
}
else if(tamp==2){
	persegi(0,4,4,112,42);
	struk();
}
}
void yakin(){
textbackground(7);textcolor(0);
gotoxy(52,18);cprintf("          Anda yakin ingin kembali?");
gotoxy(52,19);cprintf("Data pembeli yang telah diinputkan akan hilang!");
textbackground(0);textcolor(15);
gotoxy(60,22);cprintf("         ");
gotoxy(60,23);cprintf("    Ya   ");
gotoxy(60,24);cprintf("         ");

gotoxy(81,22);cprintf("         ");
gotoxy(81,23);cprintf("  Tidak  ");
gotoxy(81,24);cprintf("         ");
pointer(60,8,21,4);

textbackground(7);
int tamp=1,b=0;
   while (b != 13){
   	b=getch();
      if (b == 77){
      	if(tamp == 1){
            tamp=2;
            pointer(60,8,21,7);pointer(81,8,21,4);
			}else if (tamp == 2){
            tamp=1;
            pointer(60,8,21,4);pointer(81,8,21,7);
         }
      }else if(b == 75){
      	if(tamp == 1){
            tamp=2;
            pointer(60,8,21,7);pointer(81,8,21,4);
         }else if (tamp == 2){
            tamp=1;
            pointer(60,8,21,4);pointer(81,8,21,7);
         }
		}else if(b!=0 && b!=13){
         textcolor(4);
		   textbackground(7);
         gotoxy(40,27); cprintf("Gunakan \"%c\" untuk geser kiri & \"%c\" untuk geser kanan",17,16);
   		gotoxy(40,28); cprintf("              Gunakan ENTER untuk Memilih");  Sleep(1000);
         gotoxy(40,27); cprintf("                                                           " );
  		   gotoxy(40,28); cprintf("                                                           ");
       }
	}
   if(tamp==1){
   	pesan=0;
      persegi(0,4,4,30,42);
      persegi(7,36,4,110,41);
   	beliOrPesan();
   }else if(tamp==2){
   	persegi(7,36,4,110,41);
   	pilihDataw();
   }

}

//=============================================================================
//.................................UPDATE.....................................
//=============================================================================

void update(){
textbackground(7);textcolor(0);
hargaOrData();
}

void updateData(){
int x=plhuk*8;
int y=plhwrn*2;
textcolor(0);
textbackground(7);
gotoxy(36,33);cprintf("Masukkan Jumlah : ");
int a=0;
   gotoxy(54,33);updata[a]=getch();
   textcolor(0);
	textbackground(7);
   while(updata[a]!=13){
      if(updata[a]==8){
      	a--;
      	if(a<0){
      		a=0;
      	}gotoxy(54+a,33);cprintf(" ");
      }else{
         cprintf("%c",updata[a]);
      	a++;
      }if(a>4){
      	a=4;gotoxy(58,33);cprintf(" ");
      }gotoxy(54+a,33);updata[a]=getch();
   }updata[a]=NULL;
if(valAng(updata)==0&&strlen(updata)<5&&strlen(updata)!=0&&updata[0]!='0'){
	strukJml[tmp]=atoi(updata);
   if(plhdt==0){
   	if(atoi(updata)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input data dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateData();
   	}else if(atoi(updata)+stokSnea[plhwrn][plhuk]>300){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok melebihi batas.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                         ");
      	updateData();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokSnea[plhwrn][plhuk]+=atoi(updata);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokSnea[plhwrn][plhuk]);
      	updateLagi2();
   	}
   }else if(plhdt==1){
       if(atoi(updata)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateData();
   	}else if(atoi(updata)+stokSlip[plhwrn][plhuk]>300){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok melebihi batas.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                         ");
      	updateData();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokSlip[plhwrn][plhuk]+=atoi(updata);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokSlip[plhwrn][plhuk]);
         updateLagi2();
   	}
   }else if(plhdt==2){
       if(atoi(updata)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateData();
   	}else if(atoi(updata)+stokBoot[plhwrn][plhuk]>300){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok melebihi batas.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                         ");
      	updateData();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokBoot[plhwrn][plhuk]+=atoi(updata);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokBoot[plhwrn][plhuk]);
         updateLagi2();
   	}
   }else if(plhdt==3){
       if(atoi(updata)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateData();
   	}else if(atoi(updata)+stokHigh[plhwrn][plhuk]>300){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok melebihi batas.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                         ");
      	updateData();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokHigh[plhwrn][plhuk]+=atoi(updata);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokHigh[plhwrn][plhuk]);
         updateLagi2();
   	}
   }else if(plhdt==4){
       if(atoi(updata)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateData();
   	}else if(atoi(updata)+stokWedg[plhwrn][plhuk]>300){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok melebihi batas.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                         ");
      	updateData();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokWedg[plhwrn][plhuk]+=atoi(updata);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokWedg[plhwrn][plhuk]);
         updateLagi2();
   	}
   }else if(plhdt==5){
       if(atoi(updata)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input jumlah dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateData();
   	}else if(atoi(updata)+stokFlat[plhwrn][plhuk]>300){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Stok melebihi batas.Silahkan input ulang!");Sleep(1000);
      	gotoxy(54,33);cprintf("                                         ");
      	updateData();
		}else{
   		textbackground(7);
   		textcolor(0);
   		stokFlat[plhwrn][plhuk]+=atoi(updata);
         gotoxy(55+x,13+y);cprintf("    ");
      	gotoxy(55+x,13+y);cprintf("%d",stokFlat[plhwrn][plhuk]);
         updateLagi2();
   	}
   }
}else{
	textcolor(4);
   gotoxy(54,33);cprintf("Inputan tidak valid!!");Sleep(1000);
   gotoxy(54,33);cprintf("                     ");
   updateData();
}
}

void updateHarga(){
textcolor(0);textbackground(7);
int y=plhwrn*2;
gotoxy(36,27);cprintf("Masukkan harga baru : ");
int a=0;
gotoxy(58,27);upharga[a]=getch();
while(upharga[a]!=13){
	if(upharga[a]==8){
   	a--;
      if(a<0){
      	a=0;
      }gotoxy(58+a,27);cprintf(" ");
   }else{
		cprintf("%c",upharga[a]);
      a++;
   }if(a>8){
   	a=8;gotoxy(64,27);cprintf(" ");
   }gotoxy(58+a,27);upharga[a]=getch();
}upharga[a]=NULL;
if(valAng(upharga)==0&&strlen(upharga)<8&&strlen(upharga)!=0&&upharga[0]!='0'){
	if(plhdt==0){
   	if(atoi(upharga)<1){
   		textcolor(4);
      	gotoxy(54,29);cprintf("Input harga dengan benar!");Sleep(1000);
      	gotoxy(54,29);cprintf("                          ");
      	updateHarga();
   	}else{
   		textbackground(7);
   		textcolor(0);
   		harga[0][plhwrn]=atoi(upharga);
         gotoxy(94,13+y);cprintf("        ");
      	gotoxy(94,13+y);cprintf("%d",harga[0][plhwrn]);
         updateLagi();
   	}
   }else if(plhdt==1){
       if(atoi(upharga)<1){
   		textcolor(4);
      	gotoxy(54,29);cprintf("Input harga dengan benar!");Sleep(1000);
      	gotoxy(54,29);cprintf("                          ");
      	updateHarga();
   	}else{
   		textbackground(7);
   		textcolor(0);
   		harga[1][plhwrn]=atoi(upharga);
         gotoxy(94,13+y);cprintf("        ");
      	gotoxy(94,13+y);cprintf("%d",harga[1][plhwrn]);
         updateLagi();
   	}
   }else if(plhdt==2){
       if(atoi(upharga)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input harga dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateHarga();
   	}else{
   		textbackground(7);
   		textcolor(0);
   		harga[2][plhwrn]=atoi(upharga);
         gotoxy(94,13+y);cprintf("        ");
      	gotoxy(94,13+y);cprintf("%d",harga[2][plhwrn]);
         updateLagi();
   	}
   }else if(plhdt==3){
       if(atoi(upharga)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input harga dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateHarga();
   	}else{
   		textbackground(7);
   		textcolor(0);
   		harga[3][plhwrn]=atoi(upharga);
         gotoxy(94,13+y);cprintf("        ");
      	gotoxy(94,13+y);cprintf("%d",harga[3][plhwrn]);
         updateLagi();
   	}
   }else if(plhdt==4){
       if(atoi(upharga)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input harga dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateHarga();
   	}else{
   		textbackground(7);
   		textcolor(0);
   		harga[4][plhwrn]=atoi(upharga);
         gotoxy(94,13+y);cprintf("        ");
      	gotoxy(94,13+y);cprintf("%d",harga[4][plhwrn]);
         updateLagi();
   	}
   }else if(plhdt==5){
       if(atoi(upharga)<1){
   		textcolor(4);
      	gotoxy(54,33);cprintf("Input harga dengan benar!");Sleep(1000);
      	gotoxy(54,33);cprintf("                          ");
      	updateHarga();
   	}else{
   		textbackground(7);
   		textcolor(0);
   		harga[2][plhwrn]=atoi(upharga);
         gotoxy(94,13+y);cprintf("        ");
      	gotoxy(94,13+y);cprintf("%d",harga[2][plhwrn]);
         updateLagi();
   	}
   }
}else{
	textcolor(4);
	gotoxy(58,27);cprintf("        ");
   gotoxy(54,33);cprintf("Inputan tidak valid!!");Sleep(1000);
   gotoxy(54,33);cprintf("                     ");
   updateHarga();
}
}
void updateLagi(){
textcolor(0);textbackground(7);
gotoxy(36,32);cprintf("Mau update harga lagi?");
textbackground(0);
textcolor(15);
gotoxy(60,31);cprintf("        ");
gotoxy(60,32);cprintf("   Ya   ");
gotoxy(60,33);cprintf("        ");

gotoxy(70,31);cprintf("        ");
gotoxy(70,32);cprintf(" Tidak  ");
gotoxy(70,33);cprintf("        ");

pointer(60,7,30,4);
int tamp=1,b=0;
   while (b != 13){
   	b=getch();
      if (b == 77){
      	if(tamp == 1){
            tamp=2;
            pointer(60,7,30,7);pointer (70,7,30,4);
			}else if (tamp == 2){
            tamp=1;
            pointer (60,7,30,4);pointer (70,7,30,7);
         }
      }else if(b == 75){
      	if(tamp == 1){
            tamp=2;
            pointer(60,7,30,7);pointer (70,7,30,4);
         }else if (tamp == 2){
            tamp=1;
            pointer (60,7,30,4);pointer (70,7,30,7);
         }
		}else if(b!=0 && b!=13){
         textcolor(4);
		   textbackground(7);
         gotoxy(40,37); cprintf("Gunakan \"%c\" untuk geser kiri & \"%c\" untuk geser kanan",17,16);
   		gotoxy(40,38); cprintf("              Gunakan ENTER untuk Memilih");  Sleep(1000);
         gotoxy(40,37); cprintf("                                                           " );
  		   gotoxy(40,28); cprintf("                                                           ");
      }
	}
if (tamp==1){
	dataw();
}else if(tamp==2){
	persegi(0,4,4,30,42);
	persegi(7,36,4,110,41);
	xx=0;
	hargaOrData();
}
}

void updateLagi2(){
textcolor(0);textbackground(7);
gotoxy(36,39);cprintf("Mau update data lagi?");
textbackground(0);textcolor(15);
gotoxy(58,38);cprintf("        ");
gotoxy(58,39);cprintf("   Ya   ");
gotoxy(58,40);cprintf("        ");

gotoxy(68,38);cprintf("        ");
gotoxy(68,39);cprintf(" Tidak  ");
gotoxy(68,40);cprintf("        ");

pointer(58,7,37,4);
int tamp=1,b=0;
   while (b != 13){
   	b=getch();
      if (b == 77){
      	if(tamp == 1){
            tamp=2;
            pointer(58,7,37,7);pointer (68,7,37,4);
			}else if (tamp == 2){
            tamp=1;
            pointer (58,7,37,4);pointer (68,7,37,7);
         }
      }else if(b == 75){
      	if(tamp == 1){
            tamp=2;
            pointer(58,7,37,7);pointer (68,7,37,4);
         }else if (tamp == 2){
            tamp=1;
            pointer (58,7,37,4);pointer (68,7,37,7);
         }
		}else if(b!=0 && b!=13){
         textcolor(4);
		   textbackground(7);
         gotoxy(40,42); cprintf("Gunakan \"%c\" untuk geser kiri & \"%c\" untuk geser kanan",17,16);
   		gotoxy(40,43); cprintf("              Gunakan ENTER untuk Memilih");  Sleep(1000);
         gotoxy(40,42); cprintf("                                                           " );
  		   gotoxy(40,43); cprintf("                                                           ");
   	}
	}
if (tamp==1){
	dataw();
}else if(tamp==2){
	persegi(0,4,4,30,42);
	persegi(7,36,4,110,41);
	xx=0;
	hargaOrData();
}
}
//============================================================================//
//.............................ISI DATA PENJUALAN.............................//
//============================================================================//
void dataw(){
bingkaiData();
textbackground(0);
textcolor(15);
gotoxy(6,41);cprintf("Tekan '0' Untuk Kembali");
if(xx!=0){
	gotoxy(6,41);cprintf("                       ");
}
textbackground(7);
textcolor(0);
gotoxy(12,7);cprintf("1.SNEAKERS  ");
gotoxy(12,12);cprintf(" 2.SLIP ON  ");
gotoxy(12,17);cprintf("  3.BOOTS   ");
gotoxy(12,22);cprintf("4.HIGH HEELS");
gotoxy(12,27);cprintf(" 5.WEDGES   ");
gotoxy(12,32);cprintf("6.FLATSHOES");
gotoxy(12,37);cprintf(" PILIH: ");
pilihDataw();
}

void tampSnea(){
int i=1,x=0,y=0,wrn=0,a,b;
for(a=0,b=0;i<=5;){
	gotoxy(40,13+y);cprintf("%d. %s",i,warna[wrn]);
   gotoxy(55+x,13+y);cprintf("%d",stokSnea[a][b]);
   x+=8;b++;
   if(b==5){i++;x=0;y+=2;wrn++;a++;b=0;}
}a=0;
for(int j=0;a<5;j+=2,a++){            
   gotoxy(94,13+j);cprintf("%d",harga[0][a]);
}
}
void tampSlip(){
int i=0,x=0,y=0,wrn=0,a,b;
for(a=0,b=0;i<5;){
	gotoxy(40,13+y);cprintf("%d. %s",i+1,warna[wrn]);
   gotoxy(55+x,13+y);cprintf("%d",stokSlip[a][b]);
   x+=8;b++;
   if(b==5){i++;x=0;y+=2;wrn++;a++;b=0;}
}a=0;
for(int j=0;a<5;j+=2,a++){
   gotoxy(94,13+j);cprintf("%d",harga[1][a]);
}
}
void tampBoot(){
int i=0,x=0,y=0,wrn=0,a,b;
for(a=0,b=0;i<5;){
	gotoxy(40,13+y);cprintf("%d. %s",i+1,warna[wrn]);
   gotoxy(55+x,13+y);cprintf("%d",stokBoot[a][b]);
   x+=8;b++;
   if(b==5){i++;x=0;y+=2;wrn++;a++;b=0;}
}a=0;
for(int j=0;a<5;j+=2,a++){
   gotoxy(94,13+j);cprintf("%d",harga[2][a]);
}
}
void tampHigh(){
int i=0,x=0,y=0,wrn=0,a,b;
for(a=0,b=0;i<5;){
	gotoxy(40,13+y);cprintf("%d. %s",i+1,warna[wrn]);
   gotoxy(55+x,13+y);cprintf("%d",stokHigh[a][b]);
   x+=8;b++;
   if(b==5){i++;x=0;y+=2;wrn++;a++;b=0;}
}a=0;
for(int j=0;a<5;j+=2,a++){
   gotoxy(94,13+j);cprintf("%d",harga[3][a]);
}
}
void tampWedg(){
int i=0,x=0,y=0,wrn=0,a,b;
for(a=0,b=0;i<5;){
	gotoxy(40,13+y);cprintf("%d. %s",i+1,warna[wrn]);
   gotoxy(55+x,13+y);cprintf("%d",stokWedg[a][b]);
   x+=8;b++;
   if(b==5){i++;x=0;y+=2;wrn++;a++;b=0;}
}a=0;
for(int j=0;a<5;j+=2,a++){
   gotoxy(94,13+j);cprintf("%d",harga[4][a]);
}
}
void tampFlat(){
int i=0,x=0,y=0,wrn=0,a,b;
for(a=0,b=0;i<5;){
	gotoxy(40,13+y);cprintf("%d. %s",i+1,warna[wrn]);
   gotoxy(55+x,13+y);cprintf("%d",stokFlat[a][b]);
   x+=8;b++;
   if(b==5){i++;x=0;y+=2;wrn++;a++;b=0;}
}a=0;
for(int j=0;a<5;j+=2,a++){
   gotoxy(94,13+j);cprintf("%d",harga[5][a]);
}
}
//============================================================================//
//............................DATA PEMBELI....................................//
//============================================================================//
void dataPembeli(){
persegi(4,42,8,104,33);
persegi(0,40,10,101,35);
textbackground(0);textcolor(15);
gotoxy(45,12);cprintf("- A I N Z  S H O E S -");
gotoxy(47,18);cprintf("NAMA          :");
gotoxy(47,22);cprintf("ALAMAT        : Jl. ");
gotoxy(47,26);cprintf("NO. HANDPHONE :");
isiNama();
}

void isiNama(){
textbackground(0);textcolor(15);
int a=0,x=0;
gotoxy(63,18);nama[a]=getch();
   while(nama[a]!=13){
      if(nama[a]==8){
      textcolor(15);a--;
      	if(a<0){
      		a=0;
      	}gotoxy(63+a,18);printf(" ");
      }else{
         printf("%c",nama[a]);
      	a++;
      }if(a>35){
      	a=35;gotoxy(98,18);printf(" ");
      }gotoxy(63+a,18);nama[a]=getch();
   }nama[a]=NULL;
for(int i=0;i<strlen(nama);i++){
	if(nama[i]==' '){
   	x++;
   }
}
if(valHur(nama)==0&&strlen(nama)<=30&&strlen(nama)!=0){
      isiAlamat();
}else if(strlen(nama)>30){
		textcolor(4);
      gotoxy(63,18);cprintf("                                   ");
		gotoxy(57,30);cprintf("Maksimal 30 digit!!");Sleep(1000);
      gotoxy(57,30);cprintf("                      ");
      isiNama();
}else if(x==strlen(nama)){
      textcolor(4);
   	gotoxy(63,18);cprintf("                                   ");
		gotoxy(57,30);cprintf("Inputan tidak boleh kosong!");Sleep(1000);
      gotoxy(57,30);cprintf("                           ");
      isiNama();
}else{
		textcolor(4);
   	gotoxy(63,18);cprintf("                                   ");
   	gotoxy(57,30);cprintf("Inputan tidak valid");Sleep(1000);
      gotoxy(57,30);cprintf("                       ");
      isiNama();
}
}

void isiAlamat(){
textbackground(0);textcolor(15);
int a=0,x=0;
gotoxy(67,22);alamat[a]=getch();
	while(alamat[a]!=13){
      if(alamat[a]==8){
      textcolor(15);a--;
      	if(a<0){
      		a=0;
      	}gotoxy(67+a,22);printf(" ");
      }else{
         printf("%c",alamat[a]);
      	a++;
      }if(a>31){
      	a=31;gotoxy(98,22);printf(" ");
      }gotoxy(67+a,22);alamat[a]=getch();
   }alamat[a]=NULL;
for(int i=0;i<strlen(alamat);i++){
	if(alamat[i]==' '){
   	x++;
   }
}

if(!(valAl(alamat)==0&&strlen(alamat)<=30&&strlen(alamat)!=0)){
	textcolor(4);
	gotoxy(67,22);cprintf("                               ");
   gotoxy(57,30);cprintf("Inputan tidak valid");Sleep(1000);
   gotoxy(57,30);cprintf("                       ");
   isiAlamat();
}else if(x==strlen(alamat)){
      textcolor(4);
   	gotoxy(63,26);cprintf("                                   ");
		gotoxy(57,30);cprintf("Inputan tidak boleh kosong!");Sleep(1000);
      gotoxy(57,30);cprintf("                           ");
      isiAlamat();
}else if(strlen(alamat)>25){
	textcolor(4);
	gotoxy(67,22);cprintf("                               ");
   gotoxy(57,30);cprintf("Maksimal 30 digit");Sleep(1000);
   gotoxy(57,30);cprintf("                      ");
   isiAlamat();
}else{
	isiNomorHp();
}
}

void isiNomorHp(){
textbackground(0);textcolor(15);
int a=0,x=0;
gotoxy(63,26);nomorHp[a]=getch();
	while(nomorHp[a]!=13){
      if(nomorHp[a]==8){
      textcolor(15);a--;
      	if(a<0){
      		a=0;
      	}gotoxy(63+a,26);printf(" ");
      }else{
         printf("%c",nomorHp[a]);
      	a++;
      }if(a>35){
      	a=35;gotoxy(98,26);printf(" ");
      }gotoxy(63+a,26);nomorHp[a]=getch();
   }nomorHp[a]=NULL;
   for(int i=0;i<strlen(nomorHp);i++){
		if(nomorHp[i]==' '){
   		x++;
   	}
	}
	if(valNom(nomorHp)==0&&strlen(nomorHp)>=11&&strlen(nomorHp)<=13&&strlen(nomorHp)!=0){
      persegi(7,40,7,105,36);
		textcolor(4);
		textbackground(7);
		for(int a=1;a<=3;a++){
			gotoxy(62,23);cprintf("  loading .  ");Sleep(500);
			gotoxy(62,23);cprintf("  loading .. ");Sleep(500);
			gotoxy(62,23);cprintf("  loading ...");Sleep(500);
		}dataw();
   }else if(x==strlen(nomorHp)){
      textcolor(4);
   	gotoxy(63,26);cprintf("                                   ");
		gotoxy(57,30);cprintf("Inputan tidak boleh kosong!");Sleep(1000);
      gotoxy(57,30);cprintf("                           ");
      isiNomorHp();
   }else if(valNom(nomorHp)!=0){
   	textcolor(4);
   	gotoxy(63,26);cprintf("                                   ");
		gotoxy(57,30);cprintf("Inputan tidak valid!!");Sleep(1000);
      gotoxy(57,30);cprintf("                     ");
      isiNomorHp();
   }else if(!(strlen(nomorHp)<=13&&strlen(nomorHp)>=11)){
   	textcolor(4);
   	gotoxy(63,26);cprintf("                                   ");
		gotoxy(57,30);cprintf("Input 11-13 digit!!");Sleep(1000);
      gotoxy(57,30);cprintf("                    ");
      isiNomorHp();
   }
}

//============================================================================//
//.................................ATAU.......................................//
//============================================================================//
void beliOrPesan(){
textbackground(0);textcolor(15);
gotoxy(56,15);cprintf("                          ");
gotoxy(56,16);cprintf("     Pembelian di Toko    ");
gotoxy(56,17);cprintf("                          ");

gotoxy(56,21);cprintf("                          ");
gotoxy(56,22);cprintf(" Pemesanan dan Pengiriman ");
gotoxy(56,23);cprintf("                          ");

gotoxy(56,27);cprintf("                          ");
gotoxy(56,28);cprintf("          Kembali         ");
gotoxy(56,29);cprintf("                          ");
pointer(56,25,14,4);

int tamp=1,b=0;
   while (b != 13){
   	b=getch();
      if (b == 80){
      	if(tamp == 1){
            tamp=2;
            pointer(56,25,14,7);pointer (56,25,20,4); pointer(56,25,26,7);
			}else if (tamp == 2){
            tamp=3;
            pointer(56,25,14,7);pointer (56,25,20,7); pointer(56,25,26,4);
         }else if(tamp==3){
         	tamp=1;
            pointer(56,25,14,4);pointer (56,25,20,7); pointer(56,25,26,7);
         }
      }else if(b == 72){
      	if(tamp == 1){
            tamp=3;
            pointer(56,25,14,7);pointer (56,25,20,7); pointer(56,25,26,4);
         }else if (tamp == 2){
            tamp=1;
            pointer(56,25,14,4);pointer (56,25,20,7); pointer(56,25,26,7);
         }else if(tamp==3){
          	tamp=2;
            pointer(56,25,14,7);pointer (56,25,20,4); pointer(56,25,26,7);
         }
		}else if(b!=0 && b!=13){
         textcolor(4);
		   textbackground(7);
         gotoxy(45,32); cprintf("Gunakan \"%c\" untuk geser kiri & \"%c\" untuk geser kanan",30,31);
   		gotoxy(45,33); cprintf("              Gunakan ENTER untuk Memilih");  Sleep(1000);
         gotoxy(45,32); cprintf("                                                           " );
  		   gotoxy(45,33); cprintf("                                                           ");
       }
	}
	if(tamp==1){
      dataw();
   }else if(tamp==2){
   	pesan=1;
    	dataPembeli();
   }else if(tamp==3){
   	persegi(7,36,4,110,41);
      tampMenu();
   }
}

void hargaOrData(){
textbackground(0);textcolor(15);
gotoxy(59,15);cprintf("                    ");
gotoxy(59,16);cprintf("     Update Data    ");
gotoxy(59,17);cprintf("                    ");

gotoxy(59,21);cprintf("                    ");
gotoxy(59,22);cprintf("    Update Harga    ");
gotoxy(59,23);cprintf("                    ");

gotoxy(59,27);cprintf("                    ");
gotoxy(59,28);cprintf("       Kembali      ");
gotoxy(59,29);cprintf("                    ");
pointer(59,19,14,4);

int tamp=1,b=0;
   while (b != 13){
   	b=getch();
      if (b == 80){
      	if(tamp == 1){
            tamp=2;
            pointer(59,19,14,7);pointer (59,19,20,4); pointer(59,19,26,7);
			}else if (tamp == 2){
            tamp=3;
            pointer(59,19,14,7);pointer (59,19,20,7); pointer(59,19,26,4);
         }else if(tamp==3){
         	tamp=1;
            pointer(59,19,14,4);pointer (59,19,20,7); pointer(59,19,26,7);
         }
      }else if(b == 72){
      	if(tamp == 1){
            tamp=3;
            pointer(59,19,14,7);pointer (59,19,20,7); pointer(59,19,26,4);
         }else if (tamp == 2){
            tamp=1;
            pointer(59,19,14,4);pointer (59,19,20,7); pointer(59,19,26,7);
         }else if(tamp==3){
          	tamp=2;
            pointer(59,19,14,7);pointer (59,19,20,4); pointer(59,19,26,7);
         }
		}else if(b!=0 && b!=13){
         textcolor(4);
		   textbackground(7);
         gotoxy(45,32); cprintf("Gunakan \"%c\" untuk geser kiri & \"%c\" untuk geser kanan",30,31);
   		gotoxy(45,33); cprintf("              Gunakan ENTER untuk Memilih");  Sleep(1000);
         gotoxy(45,32); cprintf("                                                           " );
  		   gotoxy(45,33); cprintf("                                                           ");
       }
	}
	if(tamp==1){
   	apdet=1;
      dataw();
   }else if(tamp==2){
   	apdet=2;
   	dataw();
   }else if(tamp==3){
   	apdet=0;
   	persegi(7,36,4,110,41);
      tampMenu();
   }
}

//============================================================================//
//..........................MASUK DAN KELUAR..................................//
//============================================================================//

void loguser(){
textbackground(0);
textcolor(15);
gotoxy(45,22);cprintf("Username : ");
gotoxy(45,24);cprintf("Password : ");
int a=0,x=0;
   gotoxy(57,22);user[a]=getch();
   while(user[a]!=13){
      if(user[a]==8){
      textcolor(15);a--;
      	if(a<0){
      		a=0;
      	}gotoxy(57+a,22);printf(" ");
      }else{
         printf("%c",user[a]);
      	a++;

      }if(a>8){
      	a=8;gotoxy(65,22);printf(" ");
      }gotoxy(57+a,22);user[a]=getch();
   }user[a]=NULL;
for(int i=0;i<strlen(user);i++){
	if(user[i]==' '){
   	x++;
   }
}if(x==0&& strlen(user)!=0){
	logpass();
}else if(x==strlen(user)){
	textcolor(4);textbackground(7);
   gotoxy(45,28);cprintf("Inputan tidak boleh kosong");Sleep(1000);
   gotoxy(45,28);cprintf("                          ");
   gotoxy(57,22);printf("          ");
   loguser();
}else if(x!=0){
	textcolor(4);textbackground(7);
   gotoxy(47,28);cprintf("Tidak boleh ada spasi");Sleep(1000);
   gotoxy(47,28);cprintf("                                 ");
   gotoxy(57,22);printf("          ");
   loguser();
}
}
void logpass(){
textbackground(0);
textcolor(15);
   int a=0,x=0;
   gotoxy(57,24);pass[a]=getch();
   while(pass[a]!=13){
      if(pass[a]==8){
      textcolor(15);a--;
      	if(a<0){
      		a=0;
      	}gotoxy(57+a,24);printf(" ");
      }else{
         printf("*");
      	a++;
      }if(a>8){
      	a=8;gotoxy(65,24);printf(" ");
      }gotoxy(57+a,24);pass[a]=getch();
   }pass[a]=NULL;
for(int i=0;i<strlen(pass);i++){
	if(pass[i]==' '){
   	x++;
   }
}
if(x==0&& strlen(pass)!=0){
	login();
}else if(x==strlen(pass)){
	textcolor(4);textbackground(7);
   gotoxy(45,28);cprintf("Inputan tidak boleh kosong");Sleep(1000);
   gotoxy(45,28);cprintf("                          ");
   gotoxy(57,24);printf("          ");
   logpass();
}else if(x!=0){
	textcolor(4);textbackground(7);
   gotoxy(47,28);cprintf("Tidak boleh ada spasi");Sleep(1000);
   gotoxy(47,28);cprintf("                    ");
   gotoxy(57,24);printf("          ");
   logpass();
}
}
void login(){
   textbackground(7);
   textcolor(4);
	if((strcmp(user,"mitazu")==0) && (strcmp(pass,"libra")==0)){
   	int b;
      for(int a=1,b=1;a<=100;a++){
      	gotoxy(53,30);cprintf("Loading %d %",a); Sleep(20);
         if(a%2==0){
         gotoxy(b+32,32);cprintf("%c",219);Sleep(40);b++;}
      }gotoxy(53,30);cprintf("LOGIN BERHASIL ");Sleep(1000);
       persegi(7,4,4,112,40);
       tampMenu();
   }else if(strcmp(user,"mitazu")==0){
   	gotoxy(45,28);cprintf("PASSWORD INVALID. COBA LAGI!");Sleep(2300);
      gotoxy(45,28);cprintf("                            ");
      gotoxy(57,24);printf("          ");
      gotoxy(57,22);printf("          ");
      loguser();
   }else if(strcmp(pass,"libra")==0){
   	gotoxy(45,28);cprintf("USERNAME INVALID. COBA LAGI!");Sleep(2300);
      gotoxy(45,28);cprintf("                            ");
      gotoxy(57,24);printf("          ");
      gotoxy(57,22);printf("          ");
      loguser();
   }else{
   	gotoxy(40,28);cprintf("PASSWORD DAN USERNAME INVALID. COBA LAGI!"); Sleep(2300);
      gotoxy(40,28);cprintf("                                         ");
      gotoxy(57,24);printf("          ");
      gotoxy(57,22);printf("          ");
      loguser();
   }
}

void keluar(){
textbackground(4);
textcolor(15);
gotoxy(44,19);cprintf("Anda yakin ingin keluar?");
textbackground(15);textcolor(0);
gotoxy(44,22);cprintf("         ");
gotoxy(44,23);cprintf("    Ya   ");
gotoxy(44,24);cprintf("         ");

gotoxy(60,22);cprintf("         ");
gotoxy(60,23);cprintf("  Tidak  ");
gotoxy(60,24);cprintf("         ");
pointer(44,8,21,0);

textbackground(4);
int tamp=1,b=0;
   while (b != 13){
   	b=getch();
      if (b == 77){
      	if(tamp == 1){
            tamp=2;
            pointer(44,8,21,4);pointer (60,8,21,0);
			}else if (tamp == 2){
            tamp=1;
            pointer (44,8,21,0);pointer (60,8,21,4);
         }
      }else if(b == 75){
      	if(tamp == 1){
            tamp=2;
            pointer (44,8,21,4);pointer (60,8,21,0);
         }else if (tamp == 2){
            tamp=1;
            pointer (44,8,21,0);pointer (60,8,21,4);
         }
		}else if(b!=0 && b!=13){
         textcolor(15);
		   textbackground(4);
         gotoxy(40,27); cprintf("Gunakan \"%c\" untuk geser kiri & \"%c\" untuk geser kanan",17,16);
   		gotoxy(40,28); cprintf("              Gunakan ENTER untuk Memilih");  Sleep(1000);
         gotoxy(40,27); cprintf("                                                           " );
  		   gotoxy(40,28); cprintf("                                                           ");
       }
	}
   if(tamp==1){
   	textbackground(0);
      for(int i=2;i<=44;i++){
         if(i%2==0){
         	for(int j=2;j<=114;j++){
         		gotoxy(j,i);cprintf(" ");
            }
         }else if(i%2==1){
         	for(int k=114;k>=2;k--){
            	gotoxy(k,i);cprintf(" ");
            }
         }
      }gotoxy(40,21);printf("TERIMAKASIH TELAH MENGGUNAKAN APLIKASI INI^^");
      textcolor(15);textbackground(0);
   	gotoxy(59,23);cprintf("%c %c %c",219,219,219);Sleep(1500);
      gotoxy(59,23);cprintf("%c %c   ",219,219);Sleep(1500);
      gotoxy(59,23);cprintf("%c    ",219);Sleep(1500);
      gotoxy(59,23);cprintf("   ");Sleep(50);
      exit(0);
   }else if(tamp==2){
   	persegi(7,4,4,112,42);
    	tampMenu();
   }
}


//============================================================================//
//...............................VALIDASI.....................................//
//============================================================================//

//............................VALIDASI ANGKA..................................//
int valAng(char a[]){
int x=0;int y=0;
if(a[0]==' '){
	y=1;
   return y;
}
for(int i=0;i<strlen(a);i++){
	if(!(a[i]>='0'&&a[i]<='9')){
   	x++;
   }
}
return x;
}

//.............................VALIDASI NOMOR HP................................

int valNom(char a[]){
   int x=0;int y=0;
   if(a[0]==' '||a[strlen(a)-1]==' '){
      y=1;
      return y;
   }else if(a[0]!='0'||a[1]!='8'||a[2]=='0'||a[2]=='4'||a[2]=='6'){
   	y=1;
      return y;
	}for(int i=0;i<strlen(a);i++){
 		if(!(a[i]>='0'&&a[i]<='9')){
    		x++;
 		}
	}
   return x;
}


//............................VALIDASI NAMA...................................//

 int valHur(char a[]){
	int i=0,j=0;
   	if(a[0]==' '||a[strlen(a)-1]==' '||a[0]=='-'||a[strlen(a)-1]=='-'){
			i=1;
      	return i;
    	}
	for(int x=0;x<strlen(a);x++){
 		if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||a[x]==' '&&a[x+1]!=' '||a[x]=='\''&&a[x+1]!='\''||a[x]=='-'&&a[x+1]!='-')){
    		j++;
  		}if(a[x]=='-'&& (a[x+1]==' '||a[x-1]==' ')){
      	j++;
      }
    }return j;
 }

//..........................VALIDASI ALAMAT...................................//

int valAl(char a[]){
int i=0,j=0;
   if(a[0]==' '||a[strlen(a)-1]==' '||a[0]=='.'||a[0]==','||a[0]=='-'){
   	i=1;
      return i;
   }
	for(int x=0;x<strlen(a);x++){
 		if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||a[x]=='.'&&a[x+1]!='.'||a[x]>='0'&&a[x]<='9'||a[x]=='-'&&a[x+1]!='-'||a[x]==','&&a[x+1]!=','||a[x]==' '&&a[x+1]!=' '||(a[x]=='-'&&(!(a[x+1]>='0'&&a[x+1]<='9'))))){
    		j++;
 		}
	}
   return j;
}

//============================================================================//
//...................................MAIN.....................................//
//============================================================================//
main(){
bingkai();
tampAwal();
getch();

}
