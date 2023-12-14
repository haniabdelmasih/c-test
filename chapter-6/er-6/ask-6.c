// Να γραφεί πρόγραμμα το οποίο θα διαβάζει βάση και ύψος
// ενός τριγώνου (πραγματικοί αριθμοί), θα υπολογίζει το
// εμβαδόν του και θα εμφανίζει το μήνυμα:
// το τρίγωνο με ύψος … και βάση … έχει εμβαδόν … .
// Στη συνέχεια θα ρωτάει το χρήστη αν θέλει να υπολογίσει το
// εμβαδόν κάποιου άλλου τριγώνου, και αν πάρει σαν απάντηση
// “Υ” θα επαναλαμβάνει την διαδικασία αλλιώς θα τερματίζεται

#include<stdio.h>

int main(){
float height,base,area ; 
 
char ch ;

do {
printf("GIVE THE BASE AND THE HEIGHT \n");
scanf("%f%f",&base,&height);
area =  height *base /2 ;
printf(" the triangle with height%f and base %f  has area of %.3f\n ",height,base,area);

printf("IF YOU WANT  TO CALCULATE ANOTHER TRIANGLE PRESS y ,IF YOU DONT WANT PRESS ANOTHER KEY IN YOUR KEYBOARD\n");
scanf(" %c",&ch); // Add a space before %c to consume any whitespace characters

}


while( ch =='y');
 
return 0 ;

}