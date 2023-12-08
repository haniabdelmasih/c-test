// Δημιουργήστε πρόγραμμα το οποίο αποθηκεύει
// σε ακέραια μεταβλητή seconds την τιμή 548 και
// επιστρέφει μήνυμα της μορφής:
// “Ta 548 deuterolepta isodinamoun me …. Wres kai
// …. Lepta kai …. deuterolepta




#include<stdio.h>

    int main(void){
 
    int seconds = 548 ;
    int minutes = (seconds % 3600) / 60;
    int hours = seconds / 3600;

    printf("ta defterolepta einai:%d\n",seconds);
    printf("ta lepta einai:%d\n",minutes);
    printf("hores  einai:%d\n",hours);
   



    return 0  ; 

    }