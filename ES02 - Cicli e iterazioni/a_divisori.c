/** ****************************************************************************************
* \mainpage a_divisori.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* specifiche del progetto: 
* <specifiche del collaudo>
* 
* @author Abanob Sedra
* @date 30/11/22
* @version 1.0 30/11/22 Versione iniziale
*/

#include <stdio.h>
int main ()
{

	int num, div;
	
	//Chiediamo all'utente di specificare un numero
	printf ("Abanob Sedra: inserisci un numero intero : ");
	scanf ("%d",&num);
	
	//Cerco e visualizzo i divisori di num	
	for (div=1; div<=num; div++) {
		//un numero div è divisore di un altro numero num se num%div = 0
		if(num%div==0) {
			printf("%d e' un divisore di %d\n", div, num);
		}
	}
}

