#include <stdio.h>

int main() {

    int pilihMakanan, pilihMinuman;
    int jumlahMakanan, jumlahMinuman;
    int hargaMakanan = 0, hargaMinuman = 0;
    int total, bayar, kembalian;

    printf("===== Sistem Pemesanan Kafetaria IT Del =====\n\n");

    /* MENU MAKANAN */
    printf("Menu Makanan\n");
    printf("1. Nasi Goreng        Rp12000\n");
    printf("2. Ayam Penyet        Rp15000\n");
    printf("3. Nasi Kuning        Rp10000\n");
    printf("4. Mie Goreng         Rp12000\n");
    printf("5. Bakso              Rp15000\n");

    printf("\nPilih makanan (1-5): ");
    scanf("%d", &pilihMakanan);

    printf("Jumlah pesanan makanan: ");
    scanf("%d", &jumlahMakanan);

    switch(pilihMakanan){
        case 1: hargaMakanan = 12000 * jumlahMakanan; break;
        case 2: hargaMakanan = 15000 * jumlahMakanan; break;
        case 3: hargaMakanan = 10000 * jumlahMakanan; break;
        case 4: hargaMakanan = 12000 * jumlahMakanan; break;
        case 5: hargaMakanan = 15000 * jumlahMakanan; break;
        default:
            printf("Pilihan makanan tidak tersedia!\n");
            return 0;
    }

    /* MENU MINUMAN */
    printf("\nMenu Minuman\n");
    printf("1. Teh Manis Hangat   Rp5000\n");
    printf("2. Teh Manis Dingin   Rp7000\n");
    printf("3. Kopi               Rp5000\n");
    printf("4. Jus                Rp10000\n");
    printf("5. Milo               Rp10000\n");

    printf("\nPilih minuman (1-5): ");
    scanf("%d", &pilihMinuman);

    printf("Jumlah pesanan minuman: ");
    scanf("%d", &jumlahMinuman);

    switch(pilihMinuman){
        case 1: hargaMinuman = 5000 * jumlahMinuman; break;
        case 2: hargaMinuman = 7000 * jumlahMinuman; break;
        case 3: hargaMinuman = 5000 * jumlahMinuman; break;
        case 4: hargaMinuman = 10000 * jumlahMinuman; break;
        case 5: hargaMinuman = 10000 * jumlahMinuman; break;
        default:
            printf("Pilihan minuman tidak tersedia!\n");
            return 0;
    }

    /* TOTAL */
    total = hargaMakanan + hargaMinuman;

    printf("\nTotal Harga: Rp%d\n", total);

    /* PEMBAYARAN */
    printf("Masukkan jumlah uang pembayaran: Rp");
    scanf("%d", &bayar);

    if(bayar < total){
        printf("Uang tidak cukup!\n");
    } else {
        kembalian = bayar - total;
        printf("Kembalian: Rp%d\n", kembalian);
    }

    printf("\nTerima kasih telah memesan di Kafetaria IT Del.\n");

    return 0;
}
