//Να γραφεί ένα πρόγραμμα το οποίο να διαβάζει έναν ακέραιο και ένανπραγματικό αριθμό και να εμφανίζει το τριπλάσιο του αθροίσματός
//τους.

#include <stdio.h>


int main(){
    int i ; 
    float j ,sum ;
    printf("Enter number");
    scanf("%d%f",&i,&j);
    sum = i + j ;
     printf("%f\n",3*sum);
    


return 0;
}