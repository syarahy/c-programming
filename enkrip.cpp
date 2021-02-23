
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

void enkripsi(char * data, int translasi); 

int main()
{
  char string[128]; 
  int up;

   printf("\nMasukkan sebuah string: ");
   scanf("%[^\n]", string); 
   printf("Besar pergeseran karakter: ");
   scanf("%d", &up);
 
   while(up<=0) 
    {
     printf("Masukkan besar pergeseran yang lebih besar dari 0: ");
     scanf("%d", &up);
     break;  
    }

   enkripsi(string, up); 
   printf("\nHasil enkripsi: %s\n\n", string);
       diencrypt */
 
return 1;
}

void enkripsi(char *data, int translasi)
{

char *str; 

    for(str=data; *str!='\0'; str++) 
      {
       if(*str==32)str++; 
       *str=(int)tolower(*str); 
       *str=*str+translasi;  
       if(*str>122)*str=*str-26;
                                  
                                  
      }
 
}


