#include <stdio.h>

int main(){
    int number, sum;

   
    printf("Enter a number : ");
    scanf("%d", &number);

  
    if (number < 0){
        printf("enter a number : \n");

    }

 
    while (number > 0){
        sum += number % 10; 
        number /= 10;    
    }

   
    printf("total number: %d\n", sum);

    
}
