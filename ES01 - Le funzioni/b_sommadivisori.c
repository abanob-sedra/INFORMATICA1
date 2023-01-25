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