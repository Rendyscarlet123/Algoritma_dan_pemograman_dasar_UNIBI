#include <stdio>
#include <conio>
#include <iostream.h>
#include <ctype>
void koreksi(char kalimat[]){
	bool kapital;
	for (int i=0; kalimat[i] != '\0'; i++){
    		if(i == 0){
				putchar(toupper(kalimat[i]));
         }else{
    			if(isspace(kalimat[i])){
            	printf(" ");
               kapital = true;
               continue;
         	}
            if(kapital){
            	putchar(toupper(kalimat[i]));
               kapital = false;
            }else{
             	putchar(tolower(kalimat[i]));
            }
         }
    }
}
void main()
{
    char kalimat[100];
    printf("Program Pengoreksi huruf kapital.\n");
    printf("Ketik dan enter kalimat : ");
    cin.getline(kalimat,100);
    koreksi(kalimat);
    getch();
}
