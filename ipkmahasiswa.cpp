#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
    int x,n;
    float nilaimhs[100];
    char pilihan;
    int cumlaude=0, sangat_memuaskan = 0, memuaskan = 0, biasa_aja = 0, tidak_lulus = 0;

    srand((unsigned)time(NULL));
    cout<<"\n-----------------------------------------\n";
    cout<<"            Aurel Lativa Shavana             ";
    cout<<"\n-----------------------------------------\n";
    cout << "\nMasukan Jumlah Mahasiswa : ";
	cin >> n;
    for(x=0;x<n;x++)
    {
        nilaimhs[x] = (float)rand()/RAND_MAX*4;
        cout<<"\nIPK mahasiswa ke-"<<x+1<<" = ";
        cout << setprecision(2) << nilaimhs[x];

    }
    cout<<"\n-----------------------------------------\n";
    cout<<"urutkan?(y/n)\n";
    cin>>pilihan;
    cout<<"-----------------------------------------\n";
    if (pilihan=='y')
        {
        for(x=0;x<n;x++)
        {
            if (nilaimhs[x]>= 3.5)
                {
                    cout << "IPK mahasiswa ke-"<<x+1<<" = "<< nilaimhs[x] <<" (Cumlaude)\n";
                    cumlaude += 1;
                }

            else if (nilaimhs[x]>= 3.01 && nilaimhs[x] <= 3.5)
                {
                    cout << "IPK mahasiswa ke-"<<x+1<<" = " << nilaimhs[x] <<" (Sangat Memuaskan)\n";
                    sangat_memuaskan += 1;
                }

            else if (nilaimhs[x]>= 2.51 && nilaimhs[x] <= 3.00)
                {
                    cout << "IPK mahasiswa ke-"<<x+1<<" = "<< nilaimhs[x] <<" (Memuaskan)\n";
                    memuaskan += 1;
                }

            else if (nilaimhs[x]>= 2.00 && nilaimhs[x] <= 2.5)
                {
                    cout << "IPK mahasiswa ke-"<<x+1<<" = " << nilaimhs[x] << " (Biasa Saja)\n";
                    biasa_aja += 1;
                }

            else
                {
                    cout << "IPK mahasiswa ke-"<<x+1<<" = " << nilaimhs[x] << " (Tidak Lulus)\n";
                    tidak_lulus += 1;
                }
                }

            cout<<"-----------------------------------------\n";
            cout<<"Jumlah Mahasiswa Dengan Gelar Cumlaude = "<<cumlaude<<"\n";
            cout<<"Jumlah Mahasiswa Dengan Gelar Sangat Memuaskan = "<<sangat_memuaskan<<"\n";
            cout<<"Jumlah Mahasiswa Dengan Gelar Memuaskan = "<<memuaskan<<"\n";
            cout<<"Jumlah Mahasiswa Dengan Gelar Biasa Saja = "<<biasa_aja<<"\n";
            cout<<"Jumlah Mahasiswa Yang Tidak Lulus = "<<tidak_lulus<<"\n";
            cout<<"-----------------------------------------\n";

            int terbesar=cumlaude;
                if (sangat_memuaskan > terbesar){
                    terbesar=sangat_memuaskan;
                }
                if (memuaskan > terbesar){
                    terbesar=memuaskan;
                }
                if (biasa_aja > terbesar){
                    terbesar=biasa_aja;
                }
                if (tidak_lulus > terbesar){
                    terbesar=tidak_lulus;
                }
            cout<<"Jumlah terbesar adalah = "<<terbesar;

        }
            cout<<"\n-----------------------------------------\n";
            cout<<"-----------------------------------------\n";
            cout<<"            Aurel Lativa Shavana             ";
            cout<<"\n-----------------------------------------\n";


    return(0);
}
