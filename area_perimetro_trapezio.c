
/** ****************************************************************************************
* \mainpage spazio_numeri
*
* @brief Scrivi un programma che calcola l’area e il perimetro di un trapezio dopo aver letto i dati necessari
*
* @author Abanob sedra
* @date 07/10/2022
*/
#include<stdio.h>
int main()
{
float base_maggiore,base_min,lato,altezza;//input
float area,perimetro;//output

printf ("inserisci un numero intero: ");//lettura base maggiore
scanf ("%f",&base_maggiore);
printf ("inserisci un numero intero: ");//lettura base minore
scanf ("%f",&base_min);
printf ("inserisci un numero intero: ");//lettura lato
scanf ("%f",&lato);
printf ("inserisci un numero intero: ");//lettura altezza
scanf ("%f",&altezza);

area=( (base_maggiore+base_min)*altezza)/2;//calcolo area
perimetro=(base_maggiore+base_min+lato)*2;//calcolo perimetro

printf ("l'area del trapezio e' : %.2f\n",area);//stampa area
printf ("\n il perimetro del trapezio e' : %.2f",perimetro);//stampa perimetro
}
