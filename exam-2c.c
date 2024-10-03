#include <stdio.h>

int main(){
    int rows;

    printf("enter the number rows: ");
    scanf("%d", &rows);

    for (int a = rows; a >= 1; a--){
       
        for (int b = rows; b >= a; b--){
            printf("%d ", b);
        }
     
        printf("\n");
    }

   
}
