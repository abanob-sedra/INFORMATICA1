/** ****************************************************************************************
* \mainpage c_arearettangolo.c
*
* @brief Scrivere una funzione chiamata "area_rettangolo" che prende in input la base e l'altezza di un rettangolo e restituisce l'area. 
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