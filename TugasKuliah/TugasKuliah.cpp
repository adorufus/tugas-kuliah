#include <iostream>
#include <string>

using namespace std;

void showUniqueChar(int count, string character) {
    string test = "";
    for (int i = 1; i <= count; i++) {
        test.append(character);
    }
    cout << test;
}

int main()
{

    int starsCount = 50;
    int sisi_persegi, sisi_alas_segitiga, sisi_miring_segitiga, sisi_miring_segitiga_2, tinggi_segitiga, alas_jajar_genjang, sisi_miring_sejajar, tinggi_jajar_genjang = 0;

    showUniqueChar(starsCount, "*");
    cout << "\n";
    showUniqueChar(5, " ");  cout << "Aplikasi Luas dan Keliling Ruang Bangun";
    cout << "\n";
    showUniqueChar(starsCount, "*");
    cout << "\n";
    cout << "masukan sisi persegi: "; cin >> sisi_persegi;
    cout << "masukan alas segitiga: "; cin >> sisi_alas_segitiga;
    cout << "masukan sisi miring segitiga: "; cin >> sisi_miring_segitiga;
    cout << "masukan sisi miring segitiga: "; cin >> sisi_miring_segitiga_2;
    cout << "masukan tinggi segitiga: "; cin >> tinggi_segitiga;
    cout << "masukan alas jajar genjang: "; cin >> alas_jajar_genjang;
    cout << "masukan sisi miring sejajar jajar genjang: "; cin >> sisi_miring_sejajar;
    cout << "masukan tinggi jajar genjang: "; cin >> tinggi_jajar_genjang;
    cout << "\n";
    showUniqueChar(starsCount, "*");
    cout << "\n";
    showUniqueChar(10, " ");  cout << "Hasil Perhitungan Ruang Bangun";
    cout << "\n";
    showUniqueChar(starsCount, "*");
    cout << "\n";
    showUniqueChar(15, " ");  cout << "Luas Ruang Bangun";
    cout << "\n";
    showUniqueChar(starsCount, "=");
    cout << "\n";

    //hitung semua luas
    cout << "Luas persegi = " << sisi_persegi * sisi_persegi * sisi_persegi << endl;
    cout << "Luas segitiga = " << sisi_alas_segitiga * tinggi_segitiga / 2 << endl;
    cout << "Luas jajar genjang = " << alas_jajar_genjang * tinggi_jajar_genjang << endl;

    cout << "\n";
    showUniqueChar(13, " ");  cout << "Keliling Ruang Bangun";
    cout << "\n";
    showUniqueChar(starsCount, "=");
    cout << "\n";

    //hitung semua luas
    cout << "Keliling persegi = " << 4 * sisi_persegi << endl;
    cout << "Keliling segitiga = " << sisi_alas_segitiga + sisi_miring_segitiga + sisi_miring_segitiga_2 << endl;
    cout << "Keliling jajar genjang = " << 2 * (alas_jajar_genjang + tinggi_jajar_genjang) << endl;
    showUniqueChar(starsCount, "*");
}
