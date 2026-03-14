//12S25033 - Maria Octavia Simorangkir

#include <stdio.h>
#include <string.h>

int main() {

    char kota[10];
    float beratButet, beratUcok, totalBerat;
    int ongkirPerKg;
    float totalOngkir, diskon;
    char keterangan[20];

    printf("Masukkan kode kota dan berat paket Butet (ketik END untuk selesai)\n");

    while(1){

        scanf("%s", kota);

        if(strcmp(kota,"END")==0){
            break;
        }

        scanf("%f", &beratButet);

        /* menentukan ongkir berdasarkan kota */
        if(strcmp(kota,"MDN")==0){
            ongkirPerKg = 8000;
            strcpy(keterangan,"Dalam Pulau");
        }
        else if(strcmp(kota,"BLG")==0){
            ongkirPerKg = 5000;
            strcpy(keterangan,"Dalam Pulau");
        }
        else if(strcmp(kota,"JKT")==0){
            ongkirPerKg = 12000;
            strcpy(keterangan,"Luar Pulau");
        }
        else if(strcmp(kota,"SBY")==0){
            ongkirPerKg = 13000;
            strcpy(keterangan,"Luar Pulau");
        }

        /* menghitung berat ucok */
        beratUcok = (3.0/2.0) * beratButet;

        /* total berat */
        totalBerat = beratButet + beratUcok;

        /* total ongkir */
        totalOngkir = totalBerat * ongkirPerKg;

        diskon = 0;

        /* promo diskon */
        if(totalBerat > 10){
            diskon = 0.10 * totalOngkir;
        }

        totalOngkir = totalOngkir - diskon;

        /* OUTPUT */
        printf("\n=== STRUK PEMBAYARAN ===\n");
        printf("Kota Tujuan        : %s\n", kota);
        printf("Berat Paket Butet  : %.2f kg\n", beratButet);
        printf("Berat Paket Ucok   : %.2f kg\n", beratUcok);
        printf("Total Berat        : %.2f kg\n", totalBerat);
        printf("Total Ongkos Kirim : Rp %.0f\n", totalOngkir);

        if(totalBerat > 10){
            printf("Promo              : Diskon 10%%\n");
        }
        else{
            printf("Promo              : Tidak ada diskon\n");
        }

        if(strcmp(keterangan,"Luar Pulau")==0){
            printf("Asuransi           : Gratis\n");
        }
        else{
            printf("Asuransi           : Tidak ada\n");
        }

        printf("\n");
    }

    return 0;
}
