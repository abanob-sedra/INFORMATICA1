/** ****************************************************************************************
* \mainpage coppie_somma.c
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali 
*        la cui somma è 15. 
* 
* @authorabanob sedra
* @date 09/12/2022
*/

#include <stdio.h>      //includo le librerie

int main() 
{
	int a, b;           //dichiaro variabili

	printf("\n--Esercizio B Sollo Tommaso--\n\n");

    for(a=1; a<8; a++)              //iterazione primo addendo e metto il limite di 8 per non ripetere le stesse somme

        for(b=1; b<15; b++)         //iterazione secondo addendo

            if(a+b==15)                     //stammpo il risultato se la somma e'  15
                printf("%d e %d\n", a, b);
}
