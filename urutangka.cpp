#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
main(){
int A[5];
int x,j,k,temp;

cout<<"Masukkan 5 data berupa angka\n";
for(x=0;x<5;x++){
cout<<"data ke-"<<x+1<<" :";cin>>A[x];}

cout<<"\nSebelum urut :\n";
for (x=0;x<5;x++){
        cout<<setw(3)<<A[x];}

for(j=4;j>0;j--){
                for(k=0;k<j;k++){
                        if(A[k]>A[k+1]){
                                temp=A[k+1];
                                A[k+1]=A[k];
                                A[k]=temp;
                }
        }
}
cout<<"\n\nsetelah urut :"<<endl;
for (x=0;x<5;x++){
        cout<<setw(3)<<A[x];}
getch();}
