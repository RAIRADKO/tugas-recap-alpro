#include <stdio.h>

int main() {
    // Deklarasi variabel
    int jarak, waktu, kecepatan;

    // Membaca input dari pengguna
    scanf("%d %d", &jarak, &waktu); // Membaca jarak dan waktu
    scanf("%d %d", &kecepatan, &waktu); // Membaca kecepatan dan waktu
    scanf("%d %d", &jarak, &kecepatan); // Membaca jarak dan kecepatan

    // Konversi input menjadi float
    float jarak_f = (float) jarak;
    float waktu_f = (float) waktu;
    float kecepatan_f = (float) kecepatan;

    // Menghitung kecepatan, jarak, dan waktu
    float v = kecepatan_f;
    float s = jarak_f;
    float t = waktu_f;

    // Menampilkan hasil perhitungan dengan 2 angka dibelakang koma
    printf("%.2f\n", v); // Menampilkan kecepatan
    printf("%.2f\n", s); // Menampilkan jarak
    printf("%.2f\n", t); // Menampilkan waktu

    return 0;
}
