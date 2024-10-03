#include<stdio.h>

int main(){
    int use;

printf("enter your row :");
scanf("%d",&use);

for (int  row = 1; row <= use; row++)
{
    for (int col = use; col >= use+1-row; col--)
    {
        printf("%d",col);
    }
    printf("\n");
    
}
    }
    
