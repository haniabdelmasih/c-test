//Γράψτε ένα πρόγραμμα το οποίο να διαβάζει συνεχώς έναν
//ακέραιο αριθμό και να τον εμφανίζει μέχρι ο χρήστης να εισάγει
//το 0


#include <stdio.h>
    int main (){

 int i = 1;

    while ( i != 0){

       printf("Enter a number");

       scanf("%d",&i);

      printf("num = %d\n",i);
    }


       return 0 ; 
    }