#include <iostream>

/**
    Author : @zoelabbb
    Tools : Pembayaran Travel Agent
    Version : V.0.1 --> Using nested if
    Telegram : https://t.me/domicadoesca
    Find My Repository  : https://github.com/zoelabbb?tab=repositories
**/

using namespace std;

int main()
{
    string nama_petugas, nama_customer, tujuan_wisata, kode_grup, JG, MN, BT;
    string F, C, BA, tanggal_keberangkatan;
    int harga, harga_bagi, ppn;

    cout << " TRAVEL AGEN PASTI NYAMAN " << endl;
    cout << " Input Nama Petugas : ";
    cin >> nama_petugas;
    cout << " Input Nama Customer : ";
    cin >> nama_customer;
    cout << " Pilih kode tujuan wisata [JG/MN/BT] : ";
    cin >> tujuan_wisata;
    cout << " Pilih kode grup [F/C] : ";
    cin >> kode_grup;
    cout << " Tanggal keberangkatan : ";
    cin >> tanggal_keberangkatan;
    cout << endl;

    cout << " BUKTI PEMESANAN PAKET LIBURAN " << endl;
    cout << " TRAVEL AGEN PASTI NYAMAN " << endl;
    cout << "=================================================================" << endl;
    cout << " Nama Petugas  : " << nama_petugas << endl;
    cout << " Nama Customer : " << nama_customer << endl;
    cout << " Tanggal keberangkatan : " << tanggal_keberangkatan << endl;
    cout << "=================================================================" << endl;
     //Tujuan wisata
     if(tujuan_wisata == "JG" | tujuan_wisata == "jg")
    {
        cout << " Tujuan Wisata : JOGJAKARTA " << endl;
    }else if(tujuan_wisata == "MN" | tujuan_wisata == "mn")
    {
        cout << " Tujuan Wisata : MANADO " << endl;
    }else if(tujuan_wisata == "BT" | tujuan_wisata == "bt")
    {
        cout << " Tujuan Wisata : BATAM " << endl;
    }
    //Paket Wisata
    if(kode_grup == "F" | kode_grup == "f")
    {
        cout << " Paket Wisata : Family" << endl;
    }else if(kode_grup == "C" | kode_grup == "c")
    {
        cout << " Paket Wisata : Company" << endl;
    }
    //Harga
    if(tujuan_wisata == "JG" && kode_grup == "F")
    {
        cout << " Harga : 1500000 " << endl;
    }else if(tujuan_wisata == "JG" && kode_grup == "C")
    {
        cout << " Harga : 3000000 " << endl;
    }else if(tujuan_wisata == "MN" && kode_grup == "C")
    {
        cout << " Harga : 7500000 " << endl;
    }else if(tujuan_wisata == "MN" && kode_grup == "F")
    {
        cout << " Harga : 4500000 " << endl;
    }else if(tujuan_wisata == "BT" && kode_grup == "C")
    {
        cout << " Harga : 8000000 " << endl;
    }else if(tujuan_wisata == "MN" && kode_grup == "F")
    {
        cout << " Harga : 5000000 " << endl;
    }
    //Biaya akomodasi
    cout << " Biaya Akomodasi : ";
    cin >> BA;
    //Total biaya
    if(tujuan_wisata == "JG" && kode_grup == "F" && BA == "5")
    {
        ppn = 1500000 * 5 / 100;
        harga = 1500000 + ppn;
        cout << " Total biaya : " << harga << endl;
    }else if(tujuan_wisata == "JG" && kode_grup == "C" && BA == "10")
    {
        ppn = 3000000 * 10 / 100;
        harga = 3000000 + ppn;
        cout << " Total biaya : " << harga << endl;
    }else if(tujuan_wisata == "MN" && kode_grup == "C" && BA == "5")
    {
        ppn = 7500000 * 5 / 100;
        harga = 7500000 + ppn;
        cout << " Total biaya : " << harga << endl;
    }else if(tujuan_wisata == "MN" && kode_grup == "F" && BA == "15")
    {
        ppn = 4500000 * 15 / 100;
        harga = 4500000 + ppn;
        cout << " Total biaya : " << harga << endl;
    }else if(tujuan_wisata == "BT" && kode_grup == "C" && BA == "5")
    {
        ppn = 8000000 * 5 / 100;
        harga = 8000000 + ppn;
        cout << " Total biaya : " << harga << endl;
    }else if(tujuan_wisata == "MN" && kode_grup == "F" && BA == "10")
    {
        ppn = 5000000 * 10 / 100;
        harga = 5000000 + ppn;
        cout << " Total biaya : " << harga << endl;
    }
    return 0;
}
