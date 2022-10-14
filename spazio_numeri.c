
/** ****************************************************************************************
* \mainpage spazio_numeri
*
* @brief Dato un numero inserito dall’utente, compreso tra 100 e 999, stampalo in modo che ogni cifra sia separata dalle altre da uno spazio.
* Il progetto accetta ogni tipo di numero tra 100 e 999
* 
* @author Abanob sedra
* @date 07/10/2022
*/

#include <stdio.h>
int main ()
{
int num; //input
int num1,num2,num3;//output

printf ("inserisci un numero compreso tra 100 e 999: ");//lettura numero
scanf ("%d",&num);

num1= num/100;//calcolo prima cifra
num2= (num-num1*100)/10;//calcolo seconda cifra
num3 = (num - (num1*100 + num2*10));//calcolo terza cifra
printf ("%d\7,%d\7,%d\t",num1,num2,num3); //stampa schermo
}
