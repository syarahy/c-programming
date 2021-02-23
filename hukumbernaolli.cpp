#include<iostream>
#include<math.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int Pilihan(){
    double pilihan;

    cout<<"\nMasukkan Pilihan yang ingin dicari (1. tekanan / 2. kecepatan aliran) : ";
    cin>>pilihan;

    return pilihan;

}


void HitungPilihan(int pilih){
    double rho, g=9.81, gamma;

    double tekanan[2], kecepatan_aliran[2], ketinggian[2];

    cout<<"\nMasukkan Massa Jenis Fluida (kg/m3): ";
    cin>>rho;

    if(pilih==1)
    {
        for(int i=0; i<1; i++)
        {
            cout<<"\nMasukkan Tekanan "<<i+1<<": ";
            cin>>tekanan[i];

            for(int i=0; i<2; i++)
            {
                cout<<"\nMasukkan Kecepatan Aliran "<<i+1<<": ";
                cin>>kecepatan_aliran[i];
                cout<<"\nMasukkan Ketinggian Benda "<<i+1<<": ";
                cin>>ketinggian[i];
                }
            }

        gamma=rho*g;
        tekanan[1]=tekanan[0] + (1.0/2 * rho * pow(kecepatan_aliran[0], 2)) + (gamma * ketinggian[0]) - (gamma*ketinggian[1]) + (1.0/2* rho * pow(kecepatan_aliran[2], 2));

        cout<<"\n\nJumlah Tekanan 2 adalah : "<<tekanan[1];
        }

    else if(pilih==2){
        for(int i=0; i<1; i++)
        {
            cout<<"\nMasukkan Kecepatan Aliran "<<i+1<<": ";
            cin>>kecepatan_aliran[i];
            for(int i =0; i<2; i++)
            {
                cout<<"\nMasukkan Jumlah Tekanan "<<i+1<<": ";
                cin>>tekanan[i];
                cout<<"\nMasukkan Ketinggian Benda"<<i+1<<": ";
                cin>>ketinggian[i];
                }
            }
        gamma=rho*g;
        kecepatan_aliran[1]=sqrt(((tekanan[0] + (1.0/2 * rho * pow(kecepatan_aliran[0], 2)) + (gamma * ketinggian[0]) - (gamma*ketinggian[1]))*2)/rho);
        cout<<"\n\nJumlah Kecepatan Aliran 2 adalah : "<<kecepatan_aliran[1];
        }

    else{
    }
}

int main(){
int a;
a=Pilihan();
HitungPilihan(a);

return 0;

}
