//Να γραφεί πρόγραμμα που θα διαβάζει έναν αριθμό Ν
//(ακέραιο) και θα υπολογίζει το άθροισμα
//Σ=1 + 1/2 + 1/3 +1/4 + ….. +1/Ν
//Στην συνέχεια να εμφανίζεται η τιμή του αθροίσματος.




#include<stdio.h>

int main (){

int n ,i;
float sum ;


printf("dose enan arithmo n ");
scanf("%d",&n);

sum = 0 ;
 for(i =1;i<=n ;i++){

    sum +=(float)1/i;
 }

 printf ("to athrisma: %f\n",sum);
return 0 ; 
 
}