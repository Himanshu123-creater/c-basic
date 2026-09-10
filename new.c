#include <stdio.h>

int main(){

    int A;
    printf("Enter the value of Profit :");
    scanf("%d",&A);
    int B;
    printf("Enter the value of Rate :");
    scanf("%d",&B);
    int C;
    printf("Enter the value of Time :");
    scanf("%d",&C);
    int S=(A*B*C);
    printf("A is even :");
    printf("The simple intrest is :%f", S%100);


    return 0;
}