#include <iostream>

using namespace std;

int main()
{
    //Kasus 1
    cout << "========================================================"<< endl;
    cout << "Nama       : saya Mawar\n"<< endl;
    cout << "Jurusan    : Teksnik Informatika\n"<< endl;
    cout << "Universitas: Universitas Dian Nuswantoro\n"<< endl;
    cout << "========================================================"<< endl;

    //Kasus 2
    // eror yang terjadi kurangnya tanda " di akhir dan diawal kalimat, dan eror kedua kurang tanda ;

    //kasus 3 -

    string Nama_saya;
    string Jurusan;
    string Universitas;

    //cetak input
    cout <<"masukan Nama saya   :";
    getline(cin, Nama_saya);
    cout <<"Masukan Jurusan     :";
    getline(cin, Jurusan);
    cout <<"Masukan Universitas :";
    getline(cin, Universitas);

    //Kasus 3 - Kalkulator sederhana


    int a, b;


    cout << "masukan bilangan a:";
    cin >> a;
    cout << "masukan bilangan b:";
    cin >> b;




    cout <<a<< " + " <<b<< "=" <<a+b<< endl;
    cout <<a<< " - " <<b<< "=" <<a-b<< endl;
    cout <<a<< " * " <<b<< "=" <<a*b<< endl;
    cout <<a<< " / " <<b<< "=" <<(float)a/b<< endl;


    return 0;
}
