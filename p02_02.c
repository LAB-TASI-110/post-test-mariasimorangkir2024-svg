#include <stdio.h>
#include <string.h>

int main() {

    int N;
    int stok[100];
    char barang[100][100];
    char kategori[100];
    int total = 0;

    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    // input data barang
    for(int i = 0; i < N; i++){
        printf("Data ke-%d (contoh: 22pcs Dasi SD): ", i+1);
        scanf("%dpcs %[^\n]", &stok[i], barang[i]);
    }

    // kategori yang ingin dicari
    printf("Masukkan kategori barang yang ingin dihitung: ");
    scanf(" %[^\n]", kategori);

    // proses menghitung
    for(int i = 0; i < N; i++){
        if(strcmp(barang[i], kategori) == 0){
            total += stok[i];
        }
    }

    printf("Total stok %s = %d pcs\n", kategori, total);

    return 0;
}
