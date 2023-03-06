#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int pil, a, total, uang, kem;
char nama[20], jamin[20];

void kembalian()
{
    printf("\nUang Yang Diberikan  :"); scanf("%d", &uang);
    kem=uang - total; printf("Kembalian Anda : %d", kem);
}
void bio()
{
    printf("Atas nama              : %s", nama); printf("\nJaminan yang diberikan : %s", jamin);
}
void main()
{
    printf("Nama Dan Jaminan");
    printf("\nNama :"); scanf("%s", &nama);
    printf("Jaminan :"); scanf("%s", &jamin); system("cls");
    printf("|====================================|");
    printf("\n|<<<<<WELCOME TO BAR-BAR E-SPORT>>>>>");
    printf("\n|====================================|");
    printf("\nJenis-Jenis Unit :");
    printf("\n[1] VARRIO    |Rp 13.000 /jam");
    printf("\n[2] VIXION    |Rp 18.000 /jam");
    printf("\n[3] BEAT      |Rp 10.000 /jam");
    printf("\n[4] CB 150R   |Rp 20.000 /jam");
    printf("\n[5] SATRIA    |Rp 11.000 /jam");
    printf("\n[5] TIGER     |Rp 30.000 /jam");
    printf("\n[6] NMAX      |Rp 45.000 /jam");
    printf("\n[6] ASTREA    |Rp 7.000  /jam");
    printf("\n[7] XMAX      |Rp 70.000 /jam");
    printf("\n[7] CBR 150   |Rp 110.000/jam");
    printf("\nPilih Jenis Unit :");
    scanf("%d", &pil);

    switch(pil)
    {
case 1:
    printf("\nLamanya Unit Yang Disewa/jam : "); scanf("%d", &a);
    total = 13000 * a;
    bio();
    printf("\nTotal yang harus dibayar = %d", total);
    kembalian();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 10:
        break;
    }
}*/
int lama, total, kem, uang;
char nama[20], jamin[20];
void sewa(){
    struct sewa mo1, mo2, mo3;
    strcpy(mo1.merk, "[1] VARRIO"); mo1.harga=15000; mo1.jumlah=3;
    strcpy(mo2.merk, "[2] BEAT BOR UP"); mo2.harga=18000; mo2.jumlah=8;
    strcpy(mo3.merk, "[3] NMAX"); mo3.harga=10000; mo3.jumlah=4;
}
struct sewa{
    char merk[20];
    int harga;
    int jumlah;
};
void main()
{
    struct sewa mo1, mo2, mo3;
    strcpy(mo1.merk, "[1] VARRIO"); mo1.harga=15000; mo1.jumlah=3;
    strcpy(mo2.merk, "[2] BEAT BOR UP"); mo2.harga=18000; mo2.jumlah=8;
    strcpy(mo3.merk, "[3] NMAX"); mo3.harga=10000; mo3.jumlah=4;
    printf("\n|<<<<<WELCOME TO BAR-BAR E-SPORT>>>>>|");
    printf("\n|------------------------------------|");
    //printf("\nUnit            |        Harga");
    printf("\n%s\t\tRp.%d\tUnit= %d\n", sewa.mo1.merk, mo1.harga, mo1.jumlah);
    printf("%s\t\tRp.%d\tUnit= %d\n", mo2.merk, mo2.harga, mo2.jumlah);
    printf("%s\t\tRp.%d\tUnit= %d\n", mo3.merk, mo3.harga, mo3.jumlah);
    printf("[4] Exit");

    int pil;
    printf("\nPilih Jenis Unit : "); scanf("%d", &pil);

    switch(pil){
    case 1:
        system("cls");
        data_costumer();
        system("cls");
        prin_data();
        getch();
        system("cls");
        main();
        break;
    case 3:
        break;
    }
}
void data_costumer()
{
    printf("ISI DATA COSTUMER DULU.\n\n");
    printf("Nama depan      : "); scanf("%s", &nama);
    printf("Jaminan         : "); scanf("%s", &jamin);
    printf("Lama Sewa(hari) : "); scanf("%d", &lama);
}
void prin_data()
{
    printf("Atas Nama              :%s \n", nama);
    printf("Jaminan Yang Diberikan :%s \n", jamin);
    printf("Sewa                   :%d hari", lama);
}
void total_harga()
{
    total = mo1.harga * lama;
    printf("\nTotal yang harus dibayar = Rp.%d", total);
    printf("\nUang Yang Diberikan : "); scanf("%d", &uang);
    kem = uang - total;
    printf("Kembalian = Rp.%d", kem);
}
