/*
file: somma di due interi 
autore: abanob sedra 
classe: 3°h
data: 21/09/2022
somma di due interi,letti da tastiera e stampo su schermo risultato
*/
// includo le librerie 
#include "stdio.h" // printf,scanf
int main()
//dichiaro le due variabili di input
{
int num1, num2;
//e output
int ris;

//input: due numeri interi
printf ("inserisci il primo numero");

scanf ("%d",&num1);
printf ("inserissci secondo numero");
scanf("%d",&num2);

//assegnazione: somma di num1 e num2
ris= num1+num2;
printf("la somma dei due numeri e %d",ris);
return 0; }
