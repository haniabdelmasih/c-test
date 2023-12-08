//Να γραφεί ένα πρόγραμμα το οποίο να διαβάζει το όνομα, τον κωδικό
//και την τιμή ενός προϊόντος και να τα εμφανίζει.

#include <stdio.h>
#include <stdlib.h>

int main (){

    char name[30];
    char  password[30]; 
    float price ;
     printf("Δώσε το όνομα του προϊόντος");
     scanf("%c",&name);
     
     printf("Δώσε το Κώδικο του προϊόντος");
    scanf("%c",&password);
    printf("Δώσε την τιμή του προϊόντος ");
    scanf("%f",&price);

      printf("Το όνομα είναι:%d\n",name);
      printf("Ο Κώδικος ειναι:%c\n",password);
      printf("H  τιμή είναι:%f",price);


}