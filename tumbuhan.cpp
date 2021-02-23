#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main ()
{
    struct ciri_ciri
    {
        char akar[15], batang[20], daun[20], biji[20];
    };

    struct tumbuhan
    {
        int no;
        char kelas[20];
        char nama[20];
        struct ciri_ciri ciri[20];
    };

    struct tumbuhan tbhn[20];

    cout<<"-------------------------------------------------\n";
    cout<<"     Program Daftar Tumbuhan Berbiji             \n";
    cout<<"-------------------------------------------------\n";
    int x,y,z,w;
    awal:
    cout<<"Masukan jumlah data tumbuhan yang ingin di input : ";
    cin>>y;
    for(x=0;x<y;x++)
    {
        cout<<"Nomor                    : ";
        cin>>tbhn[x].no;
        cout<<"Kelas (Dikotil/Monokotil): ";
        cin>>tbhn[x].kelas;
        cout<<"Nama Tumbuhan            : ";
        cin>>tbhn[x].nama;
        cout<<
        endl;
        {
            for(z=0;z<1;z++)
            {
                cout<<"Masukkan ciri-ciri tumbuhan\n";
                cout<<"Akar                 : ";
                cin>>tbhn[x].ciri[z].akar;
                cout<<"Batang               : ";
                cin>>tbhn[x].ciri[z].batang;
                cout<<"Daun                 : ";
                cin>>tbhn[x].ciri[z].daun;
                cout<<"Biji                 : ";
                cin>>tbhn[x].ciri[z].biji;
                cout<<
                endl;
                }
            }
        }

    cout<<
    endl;
    cout<<"-------------------------------------------------------------------------------\n";
    cout<<"NO"<<"  Kelas Tumbuhan"<<"\t"<<"Nama Tumbuhan"<<"\t\t\t"<<"Ciri"<<"\t"<<
    endl;
    cout<<"\t\t\t\t\t"<<"akar"<<"\t"<<"  batang"<<"\t"<<"daun"<<"\t"<<"  biji"<<
    endl;
    cout<<"--------------------------------------------------------------------------------\n";

    for(x=0;x<y;x++)
        {
            cout<<tbhn[x].no<<"\t"<<tbhn[x].kelas<<"\t\t"<<tbhn[x].nama<<"\t\t";
        {
        for(z=0;z<1;z++)
            {
                cout<<tbhn[x].ciri[z].akar<<"\t  "<<tbhn[x].ciri[z].batang<<"\t"<<tbhn[x].ciri[z].daun<<"\t  "<<tbhn[x].ciri[z].biji<<
                endl<<"\t\t\t\t\t\t";
            }
        cout<<
        endl;

        {
        char pilihan;
        cout<<"\n\n Apakah Anda Ingin Mengisi Data Lagi ? (y=yes / n=no) : ";
        cin>>pilihan;
        if(pilihan =='y' || pilihan =='Y')
            goto awal;
        else
            goto end;
        }
    }
    }
    end:
        cout<<"\n\n ---------------------------------------------------";
        cout<<"\n              Terimakasih Sudah Mengisi Daftar        ";
        cout<<"\n\n ---------------------------------------------------";
}
