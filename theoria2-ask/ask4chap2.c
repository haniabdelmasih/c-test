// Να γραφεί ένα πρόγραμμα το οποίο να διαβάζει δύο ακέραιους και
// να εμφανίζει το άθροισμα, τη διαφορά, το γινόμενο, το πηλίκο και
// το υπόλοιπο της διαίρεσής τους.

#include<stdio.h>

int main (){

    int  a,b ;
    printf("Enter to intigers(the second number shuld not be 0)");
    scanf("%d%d",&a,&b);

    printf("sum=%d\n",a+b);
    printf("difr=%d\n",a-b);
    printf("mult=%d\n",a*b);
    printf("div=%f\n",a/b);
     printf("rem=%f\n",a%b);

  return 0;
    
}