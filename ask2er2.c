// Κατασκευάστε ένα πρόγραμμα που να ορίζει δύο
// ακεραίους με τιμές a = 5 και b = 7 και στην
// συνέχεια να υπολογίζει και να εμφανίζει το
// άθροισμα, την διαφορά και το γινόμενό τους. Τα
// αποτελέσματα να εμφανιστούν με την μορφή:
// 5 + 7 = 12
// 5 – 7 = -2
// 5 * 7 = 35
// Όλες οι τιμές να εμφανίζονται μέσω των
// αντίστοιχων μεταβλητών. 



#include <stdio.h>

int main(){
	
	int a = 5;
	int b = 7;
	
	printf("Athroisma: %d \n", a + b);
	printf("Diafora: %d \n", a - b);
	printf("Ginomeno: %d \n", a * b);
	
	
	return 0;
	
}




#include <stdio.h>

int main(){
    int a = 5 ;
    int b = 7 ;
    int  athrisma = a + b;
    int diafora   = a - b;
    int ginomeni  = a * b;

    printf("athrisma:%d \n",a + b);
    printf("diafora:%d \n",a - b);
    printf("ginomeni:%d \n",a * b);

   return 0 ;
}
