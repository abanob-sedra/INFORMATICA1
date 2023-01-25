/** ****************************************************************************************
* \mainpage d_funzionemenu.c
*
* @brief  Scrivere la funzione “int menu()” che visualizzi un menù e che chieda all’utente un numero corrispondente all’operazione eseguire, 0 per uscire.
*  Restituendo tale valore al termine.  
* 
* @author Abanob Sedra
* @date 20/01/2023
*/
#include <stdio.h>
int menù ()
{
    int scelta;
    printf ("scegliere un opzione dal menu : \n");
    printf ("1. operazione 1\n");
     printf ("2. operazione 2\n");
      printf ("3. operazione 3\n");
       printf ("4. esci \n");
       scanf ("%d",&scelta);
       return scelta;
}
int main ()
{
    int scelta=0;
    while (scelta!=4)
    {
        scelta=menu ();
        switch (scelta)
        {
            case 1 : 
            break;
            case 2 : 
            break;
            case 3 : 
            break;
            case 4 : 
            printf ("uscita dal programma\n");
            break;
            default;
            printf ("scelta non valida\n");
        }
    }
    return 0;
}