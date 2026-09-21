#include <stdio.h>

int main() {
    int nilai;
    char huruf_ifelse, huruf_switch;

    // Input dari pengguna
    printf("Masukkan nilai angka (0-100): ");
    scanf("%d", &nilai);

    // Validasi input agar berada di rentang 0-100
    if (nilai < 0 || nilai > 100) {
        printf("Nilai tidak valid! Masukkan angka antara 0 hingga 100.\n");
        return 1;
    }

    // 1. Implementasi Menggunakan IF-ELSE
    if (nilai >= 80) {
        huruf_ifelse = 'A';
    } else if (nilai >= 70) {
        huruf_ifelse = 'B';
    } else if (nilai >= 60) {
        huruf_ifelse = 'C';
    } else if (nilai >= 50) {
        huruf_ifelse = 'D';
    } else {
        huruf_ifelse = 'E';
    }

    // 2. Implementasi Menggunakan SWITCH-CASE
    // Nilai dibagi 10 untuk menyederhanakan rentang angka
    switch (nilai / 10) {
        case 10:
        case 9:
        case 8:
            huruf_switch = 'A';
            break;
        case 7:
            huruf_switch = 'B';
            break;
        case 6:
            huruf_switch = 'C';
            break;
        case 5:
            huruf_switch = 'D';
            break;
        default:
            huruf_switch = 'E';
            break;
    }

    // Menampilkan hasil konversi
    printf("\nHasil Konversi:\n");
    printf("- Menggunakan IF-ELSE   : %c\n", huruf_ifelse);
    printf("- Menggunakan SWITCH-CASE: %c\n", huruf_switch);

    return 0;
}