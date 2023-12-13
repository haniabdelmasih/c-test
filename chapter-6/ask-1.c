//Να γραφεί πρόγραμμα που να εμφανίζει τους αριθμούς από το 1 έως και το 17,
//καθώς επίσης να υπολογίζει και να εμφανίζει το άθροισμα και το μέσο όρο
//αυτών των αριθμών.



#include<stdio.h>

int main (){

int i ,sum;
 float avg ; 
 for(i =1 ; i<18; i++){

    printf("%d\n",i);
    sum += i;
    avg = sum / 17;
 }

 printf("%d\n",sum);
 printf("%f\n",avg);
return 0 ; 
 
}