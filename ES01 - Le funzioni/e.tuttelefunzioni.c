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
    printf ("scegliere un opzione dal menù : \n");
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
        scelta=menù ();
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

/** ****************************************************************************************
* \mainpage amcd.c
*
* @brief Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e restituisce il loro massimo comune divisore utilizzando l'algoritmo di Euclide. 
* 
* @author Abanob Sedra
* @date 20/01/2023
*/
#include <stdio.h>
#include <limits.h>

//funzione che trova il MCD tra due numeri
int MCD(int, int);

//funzione che restituisce la somma dei divisori del parametro
int sommaDivisori(int);

//funzione che presi in input base e altezza restituisce l'area
int areaRettangolo(int, int);



int main()
{

    printf("\n--Esercizio abanob sedra--\n\n");


    int r;              //variabile che conterrà i risultati delle funzioni
    int n1, n2;         //varibili di input
    

    //chiedo due numeri in input
    printf("Inserisci due numeri: \n");
    scanf("%d%d", &n1, &n2);


    printf("\n---------------\n\n");

    //chiamata funzione MCD
    r=MCD(n1, n2);
    printf("\nMCD = %d\n\n", r);


    printf("\n---------------\n\n");

    //chiamata funzione sommaDivisori per la prima variabile
    r=sommaDivisori(n1);
    printf("\nSomma dei divisori di %d = %d\n", n1, r);
    //chiamata funzione sommaDivisori per la seconda variabile
    r=sommaDivisori(n2);
    printf("\nSomma dei divisori di %d = %d\n\n", n2, r);


    printf("\n---------------\n\n");

    //chiamata funzione areaRettangolo
    r=areaRettangolo(n1, n2);
    printf("\narea di un rettangolo con base %d e altezza %d = %d\n\n", n1, n2, r);


}


int MCD(int x, int y)
{
    float r;    //conterrà il resto
    int c;      //variabile utilizata per scambiare i valori di x e y

    //se y è magiore di x scambio i valori delle variabili
    if(y>x){
        c=x;
        x=y;
        y=c;
    }

    //algoritmo di Euclide per trovare l'MCD
    while(y!=0)
    {
        r = x%y;
        x=y;
        y=r;
    }

    //restituisco il risultato
    return x;
    
}

int sommaDivisori(int x)
{
    int r = 0;  //conterrà la somma di tutti i divisori

    //itero tutti i numeri tra 1 e il numero
    for(int i = 1; i<x; i++)
    {
        if(x%i==0) r += i;    //se l'indice del ciclo è un divisore lo sommo  
    }

    //restituisco il risultato
    return r;
}

int areaRettangolo(int x, int y)
{
    int area = x * y;   //calcolo l'area

    //restituisco il risultato
    return area;
}

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

