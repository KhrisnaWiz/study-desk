# study-desk
Khrisna's study desk

Program Hitung Luas Tanah

Program ini dibuat untuk menghitung luas tanah dengan bentuk persegi panjang menggunakan bahasa pemrograman C.

Deskripsi
Program ini akan meminta input panjang dan lebar tanah dari pengguna, kemudian menghitung dan menampilkan luas tanah dalam satuan meter persegi.

Langkah-langkah untuk Menjalankan Program

1. Persiapkan Lingkungan Pengembangan
Pastikan Anda sudah menginstal compiler C di komputer Anda, seperti:
- GCC (GNU Compiler Collection)
- MinGW (untuk Windows)
- Clang (untuk macOS)

Jika belum menginstalnya, Anda bisa mengunduhnya sesuai dengan sistem operasi Anda:
- Windows: [MinGW](https://sourceforge.net/projects/mingw/)
- macOS: GCC biasanya sudah terinstal, jika belum bisa menginstalnya melalui Homebrew dengan perintah brew install gcc.
- Linux: Biasanya GCC sudah terinstal, jika belum, Anda bisa menginstalnya menggunakan perintah sudo apt install gcc (untuk distribusi berbasis Debian/Ubuntu).

2. Simpan Kode Program
Salin kode program yang ada di bawah ini dan simpan ke dalam file dengan ekstensi .c, misalnya hitung_luas_tanah.c.


#include <stdio.h>

int main() {
    float panjang, lebar, luas;

    // Input panjang dan lebar tanah
    printf("Masukkan panjang tanah (dalam meter): ");
    scanf("%f", &panjang);
    printf("Masukkan lebar tanah (dalam meter): ");
    scanf("%f", &lebar);

    // Menghitung luas tanah
    luas = panjang * lebar;

    // Menampilkan hasil
    printf("Luas tanah adalah: %.2f meter persegi
", luas);

    return 0;
}


3. Kompilasi Program
Buka terminal atau command prompt, lalu arahkan ke direktori tempat Anda menyimpan file .c tersebut. Kemudian, kompilasi program dengan menggunakan perintah:

bash
gcc hitung_luas_tanah.c -o hitung_luas_tanah


Perintah ini akan menghasilkan file eksekusi bernama hitung_luas_tanah (atau hitung_luas_tanah.exe di Windows).

4. Jalankan Program
Setelah berhasil dikompilasi, jalankan program dengan perintah:

- Di Linux/macOS:
  bash
  ./hitung_luas_tanah
  

- Di Windows:
  bash
  hitung_luas_tanah.exe


5. Input Data
Setelah menjalankan program, Anda akan diminta untuk memasukkan panjang dan lebar tanah. Masukkan angka sesuai dengan satuan meter, misalnya:

Masukkan panjang tanah (dalam meter): 10
Masukkan lebar tanah (dalam meter): 5

6. Hasil
Program akan menghitung dan menampilkan hasil luas tanah dalam satuan meter persegi. Sebagai contoh, outputnya akan terlihat seperti ini:

Luas tanah adalah: 50.00 meter persegi

