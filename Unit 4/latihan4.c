#include <stdio.h>

float hitungKelilingPersegi(float sisi) {
    return 4 * sisi;
}

float hitungLuasPersegi(float sisi) {
    return sisi * sisi;
}

float hitungVolumeKubus(float sisi) {
    return sisi * sisi * sisi;
}

int main() {
    float sisi;
    printf("Masukkan panjang sisi: ");
    scanf("%f", &sisi);

    float kelilingPersegi = hitungKelilingPersegi(sisi);
    float luasPersegi = hitungLuasPersegi(sisi);
    float volumeKubus = hitungVolumeKubus(sisi);

    printf("Keliling persegi: %.2f\n", kelilingPersegi);
    printf("Luas persegi: %.2f\n", luasPersegi);
    printf("Volume kubus: %.2f\n", volumeKubus);

    return 0;
}
