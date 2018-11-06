#include<iostream>
using namespace std;
int main ()
{
    cout<< "Tugas Praktikum4"<< "Program Menghtiung Total Pembayaran"<< endl;
    cout<< "========================================================" << endl;
    int jumlah_beli=0,total_beli=0,x,y,a;
    long int
    harga=0,harga_barang=0,total=0,bayar=0,diskon;
    cout<< "Masukkan jumlah barang (N) :"; cin>>y;
    x=1;

    while(x<=y)
    {
        cout<< "Barang Ke-"; cin>>a;
        cout<< "Masukkan banyaknya barang: "; cin>>jumlah_beli;
        cout<< "Masukkan harga barang:Rp"; cin>>harga;
        harga_barang = harga*jumlah_beli;
        total=total + harga_barang;
        total_beli += jumlah_beli;
        x++;
        }
        if(total>=1000000)
        {

            diskon=total*10/100;
        }
        else if (total>500000&&total<1000000)
        {

            diskon=total*5/100;
        }else{
         diskon=0;
        }
        cout<< "====================================================" <<endl;
        bayar=total-diskon;
        cout<< "Total Barang yang di Beli : "<<total_beli<<endl;
        cout<< "Total Semua Pembelian :Rp"<<total<<endl;
        cout<< "Mendapatkan Diskon Sebesar :Rp"<<diskon<<endl;
        cout<< "Total Yang Harus di Bayar =Rp"<<bayar<<endl;
}
