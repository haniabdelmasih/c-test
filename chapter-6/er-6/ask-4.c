// Σε μία εταιρία εργάζονται 5 υπάλληλοι. Για κάθε υπάλληλο
// δίνονται: ο μηνιαίος βασικός μισθός και ο αριθμός των
// παιδιών του. Οι συνολικές αποδοχές του υπολογίζονται ως το
// άθροισμα του μηνιαίου βασικού μισθού και του
// οικογενειακού επιδόματός του.
// Το οικογενειακό επίδομα υπολογίζεται ως εξής: 30 ευρώ για
// κάθε παιδί μέχρι και τρία παιδιά και 40 ευρώ για κάθε παιδί
// πέραν των τριών (4ο
// , 5ο
// , 6ο κ.τ.λ.)
// Να γράψετε πρόγραμμα, το οποίο:
// • εισάγει τα κατάλληλα δεδομένα
// • υπολογίζει και εμφανίζει το οικογενειακό επίδομα
// • υπολογίζει και εμφανίζει τις συνολικές αποδοχές του
// υπαλλήλου

#include<stdio.h>

int main(){
  
 float mw =0;
 float income =0 ;
 int childs,allownce = 0 ;

  for(int i = 0 ; i <5; i++){
    printf("Enter the  minimal wage and  the number of childs is:\n");
    scanf("%f%d",&mw,&childs);

    //  printf("the number of childs is:\n");
    // scanf("%d\n",&childs);

    if(childs <=3){
        allownce =  childs *30;
        
    }

    else{
          allownce = 90 + 40 * (childs-3);
        

    }

      income =  mw + allownce ;
   printf("the total income of the employee's family is the:%f$",income);
   printf("the allowance is:%d$",allownce);
  }

  return 0 ; 

}