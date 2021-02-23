#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

 int dataA[20], dataB[20];//data setiap himpunan
 int a, b;//banyak data anggota

 cout<<"Masukan Banyak Data A = ";
 cin>>a;

 cout<<"Masukan Banyak Data B = ";
 cin>>b;

 for(int i=0; i<a; i++){
  cout<<"Masukan anggota A ke - "<<i<<" = ";
  cin>>dataA[i];
 }

  for(int i=0; i<b; i++){
  cout<<"Masukan anggota B ke - "<<i<<" = ";
  cin>>dataB[i];
 }

 cout<<"Himpunan A = {";
 for(int i=0; i<a; i++){
  cout<<dataA[i]<<",";
 }
 cout<<"}"<<endl<<endl;

 cout<<"Himpunan B = {";
 for(int i=0; i<b; i++){
  cout<<dataB[i]<<",";
 }
 cout<<"}"<<endl<<endl;

 cout<<endl<<"A irisan B = {";
 for(int i=0; i<a; i++){
  for (int j=0; j<b; j++){
   if(dataA[i] == dataB[j]){
    cout<<dataA[i]<<",";
   }
  }
 }
 cout<<"}"<<endl;

 cout<<"A gabungan B = {";
 for(int i=0; i<a; i++){
  cout<<dataA[i]<<",";
 }
 for(int i=0; i<b; i++){
  cout<<dataB[i]<<",";
 }

 return 0;
}
