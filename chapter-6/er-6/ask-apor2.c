#include<stdio.h>

int main (){

int i , j ;

for( i =  0  ; i <2; i++){

    for(j = 0 ; j< 3;i++){

        printf("two");
        if(i+j == 1)
           break;
    }
    printf("one");
       
}
printf("\n val1 = %d val2=%d\n ",i,j);
return 0 ;


}

