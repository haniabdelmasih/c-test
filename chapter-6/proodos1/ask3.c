// Να γραφεί πρόγραμμα το οποίο διαβάζει έναν θετικό περιττό αριθμό Ν
//  μεγαλύτερο του 3 (με έλεγχο εγκυρότητας).
//   Στην συνέχεια το πρόγραμμα να υπολογίζει και να εμφανίζει το άθροισμα:

#include<stdio.h>

int main(){

int N ;
int sum = 0;
//eisagogi thetikou peritou arithmou
do{
    printf("give  a  positive odd number grater than 3\n");
     scanf("%d",&N);
}
while(N<=3 || N % 2 == 0 );
  

 
for (int i = 5; i <= N; i+=2)
{
     sum= sum + N ;
}

printf("the sum is %d\n",sum);

    return 0;
}