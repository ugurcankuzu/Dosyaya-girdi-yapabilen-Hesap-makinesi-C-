#include <iostream>
#include <locale.h>
#include <fstream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Turkish");
    cout << "****************HESAP MAKİNESİ****************\n\n";


    int s1, s2,secim,okulnumarası, a = 0;
    string ad,soyad;
    cout <<"Lutfen adınızı giriniz: ";
    cin >> ad;
    cout <<"Lutfen soyadınızı giriniz: ";
    cin >> soyad;
    cout << "Lutfen okulnumaranızı giriniz: ";
    cin >> okulnumarası;

    cout << "Lutfen 1.sayiyi giriniz: ";
    cin >> s1;
    cout << "Lutfen 2.sayiyi giriniz:";
    cin >> s2;
    cout << "1.Toplama\n2.çıkarma\n3.Çarpma\n4.Bölme\nLütfen yapmak istediğiniz işlemi giriniz:\n\n ";
    cin >> secim;


    if (secim == 1) {

        cout << "Sonuç:\n";
        while (a < 41) {
            cout << (s1 + s2);
            cout << endl;
            a++;
        }

    } else if (secim == 2) {
        cout << "Sonuç:\n";
        while (a < 41) {
            cout << (s1 - s2);
            cout << endl;
            a++;
        }
    } else if (secim == 3) {
        cout << "Sonuç:\n";
        while (a < 41) {
            cout << (s1 * s2);
            cout << endl;
            a++;
        }
    } else if (secim == 4) {
        cout << "Sonuç:\n";
        while (a < 41) {
            cout << (s1 / s2);
            cout << endl;
            a++;
        }
    } else {
        cout << "Lütfen doğru giriniz!!!";
    }
    ofstream dosya;
    dosya.open("Final.doc");
    dosya << "Ad: " << ad << endl;
    dosya << "Soyad:" << soyad << endl;
    dosya << "Okul Numarası:" << okulnumarası << endl;
    dosya << "Sayı1: " << s1<< endl;
    dosya << "sayı2: "<< s2 << endl;

    dosya.close();


}