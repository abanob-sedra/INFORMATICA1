/* 
file: minuti secondi e ore
autore:abanob sedra
classe:3°h
data:5/10/22
*/
#include <stdio.h>//include le librerie
int main () 
{
int Secondi; //input

int ore,minuti,secondi; //output

printf ("inserisci il numero di secondi: "); //stampa su monitor 
scanf ("%d",&secondi); //scrivo da tastiera

minuti= (secondi-secondi%60)/60;//calcolo minuti 
ore=(minuti-minuti %60)/60;//calcolo ore

secondi=secondi%60;//calcolo secondi
minuti=minuti%60;//calcolo secondi 

printf("ore: %d,minuti: %d,secondi: %d",ore,minuti,Secondi);//stampa risultato
}
