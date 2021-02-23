#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int angka_awal=0, selisih, angka_hasil, jumlah=0, i, n;

    cout<<"----------------------------------------";
    cout<<"\nMENGHITUNG JUMLAH DERET BILANGAN";
    cout<<"\n----------------------------------------";
    awal:
    cout<<"Masukkan bilangan awal  : ";
    cin>>angka_awal;
    cout<<"Masukkan selisih        : ";
    cin>>selisih;
    cout<<"Masukkan panjang deret  : ";
    cin>>n;

    cout<<"Deret ke-"<<n<<" : ";
    cout<<angka_awal<<", ";
    jumlah=jumlah+angka_awal;
    for(i=0; i<n-1; i++){
             angka_hasil=angka_awal+selisih;
             angka_awal=angka_hasil;
             cout<<angka_hasil<<", ";
             jumlah=jumlah+angka_awal;
    }

    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah;

    char pilihan;
    cout<<"\n\n Apakah Anda Ingin Mengisi Data Lagi ? (y=yes / n=no) : ";
    cin>>pilihan;
        if(pilihan =='y' || pilihan =='Y')
            goto awal;
        else
            goto end;


        end:
        cout<<"\n\n ---------------------------------------------------";
        cout<<"\n                      Terimakasih                     ";
        cout<<"\n\n ---------------------------------------------------";


    getch();
    return 0;
}
