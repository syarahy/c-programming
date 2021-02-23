#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void seri(){
        int x;
        double hasil = 0;
        cout<<"masukkan jumlah R : ";
        cin>>x;
        double data[x];
        for(int i=0;i<x;i++){
                cout<<"R "<<i+1<<": ";
                cin>>data[i];
        }
        for(int j=0;j<x;j++){
                hasil = hasil + data[j];
        }
        cout<<"hasilnya : "<<hasil<<" Ampere"<<endl;
}

void parallel(){
        int x;
        double hasil= 0,Phasil;
        cout<<"masukkan jumlah R : ";
        cin>>x;
        double data[x];
        for(int y=0;y<x;y++){
                cout<<"R "<<y+1<<": ";
                cin>>data[y];
        }
        for(int z=0; z<x;z++){
                hasil = hasil + (1/data[z]);
                Phasil = 1/hasil;
        }
        cout<<"hasilnya : "<<Phasil<<" Ampere"<<endl;
}

int main(){
        int pilih;
        string jawab;
        do {
        system("cls");
        cout<<"Rangkaian seri & Parallel \n";
        cout<<"menu \n";
        cout<<"1. Rangkaian Seri \n";
        cout<<"2. Rangkaian Parallel \n";
        cout<<"3. Keluar \n";
        cout<<"pilihan : "; cin>>pilih;
                switch(pilih){
                        case 1 : {
                                seri();
                                cout<<"Apakah anda mau melanjutkan ? (Y/N) ";
                                cin>>jawab;
                        break;
                        };
                        case 2 : {
                                parallel();
                                cout<<"Apakah anda mau melanjutkan ? (Y/N) ";
                                cin>>jawab;
                        break;
                        }
                        case 3 : {
                                cout<<"Apakah anda yakin mau keluar ? (Y/N) ";
                                cin>>jawab;
                                cout<<"Terima Kasih :) ";
                                break;
                        }
                }
        }
        while(jawab=="y" || jawab=="Y");
}
