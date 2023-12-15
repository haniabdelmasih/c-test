
// Να γραφεί πρόγραμμα το οποίο διαβάζει υποχρεωτικά 10 θετικούς αριθμούς.
//  Αν ο χρήστης εισάγει αρνητικό αριθμό, να εμφανίζεται μήνυμα λάθους και το πρόγραμμα
//   να τον υποχρεώνει να εισάγει έναν νέο. Το πρόγραμμα να εμφανίζει τον μέσο όρο των θετικών
//    αριθμών (με πλήθος δεκαδικών ψηφίων 2) που εισήχθησαν και το πλήθος των άκυρων εισαγωγών (αρνητικών αριθμών). 
//    Θεωρείστε το 0 ως θετικό αριθμό.



 #include <stdio.h>

int main() {
    int numbers[10];
    int invalidCount = 0;
    double sum = 0;

    printf("Enter 10 positive numbers:\n");

    for (int i = 0; i < 10; i++) {
        do {
            printf("Number %d: ", i + 1);
            scanf("%d", &numbers[i]);

            if (numbers[i] < 0) {
                printf("Error! Enter a positive number.\n");
                invalidCount++;
            }
        } while (numbers[i] < 0);

        sum += numbers[i];
    }

    printf("\nNumber of invalid inputs: %d\n", invalidCount);
    printf("Average of positive numbers: %.2lf\n", sum / 10);

    return 0;
}

