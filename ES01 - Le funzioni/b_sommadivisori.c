/** ****************************************************************************************
* \mainpage b_sommadivisori.c
*
* @brief Scrivere una funzione chiamata "somma_divisori" che prende in input un numero intero e restituisce la somma dei suoi divisori.
* 
* @author Abanob Sedra
* @date 20/01/2023
*/
#include <stdio.h>
int somma_divisori (int base,in altezza)
{
    return base*altezza;
}
int main()
{
    int base,altezza,area;
    printf ("inserisci la base del rettangolo : ");
    scanf ("%d",&base);
    printf ("inserisci l'altezza del rettangolo : ");
    scanf ("%d",&altezza);
    area=somma_divisori (base,altezza);
    printf ("l'area del rettangolo e' %d\n",area);
    return 0;

}