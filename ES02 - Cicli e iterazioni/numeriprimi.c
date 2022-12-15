/** ****************************************************************************************
* \mainpage numeriprimi.c
*
* @brief Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. 
*        Un numero è primo quando ha come divisore uno e sé stesso. Quindi è primo ciascun 
*        numero naturale maggiore di 1 che sia divisibile solamente per 1 e per sé stesso.
* 
* @author Abanob Sedra
* @date 05/12/2022
*/

#include <stdio.h>     

int main()  
{
    printf("\n--Esercizio D Abanob Sedra--\n\n");

    //diachiaro le variabili - c=variabile di controllo inizializzata a vero
    int i1, i2, c=1;        

    for(i1=2; i1<101; i1++) {       //itero tutti i numeri dal 2 al 100
        
        for(i2 = 2; i2<i1; i2++) {      //itero tutti i numeri dal 2 all'indice del primo ciclo
        	
            //se i1 è divisibile per un numero diverso da se stesso o 1 metto la variabile di controllo a falso
            if(i1 % i2 == 0) 
                c=0;          
            
        }

        //stampo il numero solo se la varibile di controllo è su vero
        if(c) 
            printf("%d e' un numero primo \n", i1);
        
        //riassegno il valore vero alla variabile di controllo 
        c=1;
    }
}
