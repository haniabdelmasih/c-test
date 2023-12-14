// Ένα οικόπεδο θεωρείται «ακριβό», όταν η τιμή πώλησης
// ανά τετραγωνικό μέτρο είναι μεγαλύτερη των 500€,
// «φτηνό» όταν η τιμή πώλησης είναι μικρότερη των 250€
// και σε οποιαδήποτε άλλη περίπτωση η τιμή θεωρείται
// «κανονική». Να αναπτύξετε πρόγραμμα που για 5
// οικόπεδα:
// • να διαβάζει την τιμή πώλησης ολόκληρου του οικοπέδου και τον
// αριθμό των τετραγωνικών μέτρων του,
// • να υπολογίζει την κατηγορία κόστους στην οποία ανήκει και να
// εμφανίζει το μήνυμα: «ακριβή τιμή» ή «φτηνή τιμή» ή «κανονική
// τιμή».

#include <stdio.h>


int main(){

 float pricesq = 0 ;
 float sq=0;
 int i ;
 int price= 0;
 

 for(i=0; i<=5;i++){
        printf("dose thmh gia to sq\n");
        scanf("%f/n",&pricesq);
        printf("dose ton arithmoton tonsq\n");
        scanf("%f/n",&sq);
        price = pricesq * sq ;


        if( pricesq >= 500){
            printf("to oikopeto aksizi:%d\n",price);
            printf("akribo oikopeso\n");
        }
        
        if( pricesq <= 250){
            printf("to oikopeto aksizi:%d\n",price);
            printf("fthino oikopedo\n");
        }
        if( pricesq <500  && pricesq>250){
             printf("to oikopeto aksizi:%d\n",price);
            printf("kanoniko ikopedo\n");
        }

 }
 return 0 ; 
    
}