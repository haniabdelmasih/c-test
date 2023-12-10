// Γράψτε ένα πρόγραμμα το οποίο να διαβάζει 10 ακέραιους
// αριθμούς και να εμφανίζει κάθε φορά το τριπλάσιο του αριθμού,
// μόνο αν αυτός είναι μικρότερος του 10 ή μεγαλύτερος του 20


#include<stdio.h>

int main (){
 int a ,num ;
    for(a=1; a<=10;a++){
        printf("Enter number:");
        scanf("%d",&num);
        

        if( num<10 || num>20) {
            printf("%d\n",num * 3);
        }
        else{
        printf("the number not valid??\n");
        }
    }
    return 0 ;
} 