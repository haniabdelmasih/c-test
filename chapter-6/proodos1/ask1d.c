// Τι θα εμφανιστεί στην οθόνη 
//ο τελεστής υπολοίπου και i % 2 είναι 0 για άρτιους αριθμούς.

#include<Stdio.h>

int main (){

     int i ;
        for (i=0 ; i<5; i++){
            if(i % 2 == 0){
                continue;
            }
            printf("%d\n",i);

        }
return 0 ; 
    
}