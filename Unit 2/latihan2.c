#include <stdio.h>

int hitung_pengeluaran(int jumlah_transaksi, int nominal_transaksi[]) {
    if (jumlah_transaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }
    
    int total_pengeluaran = 0;
    for (int i = 0; i < jumlah_transaksi; i++) {
        total_pengeluaran += nominal_transaksi[i];
    }
    
    return total_pengeluaran;
}

int main() {
    int jumlah_transaksi;
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlah_transaksi);
    
    if (jumlah_transaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }
    
    int nominal_transaksi[jumlah_transaksi];
    printf("Masukkan nominal transaksi:\n");
    for (int i = 0; i < jumlah_transaksi; i++) {
        scanf("%d", &nominal_transaksi[i]);
    }
    
    int total_pengeluaran = hitung_pengeluaran(jumlah_transaksi, nominal_transaksi);
    
    printf("Total pengeluaran hari ini: %d\n", total_pengeluaran);
    
    return 0;
}
