#include <stdio.h>
int main(){
    int A,B;
    printf("Enter the value of A :");
    scanf("%d",&A);
    printf("Enter the value of B :");
    scanf("%d" ,&B);
    printf("--------Before swap--------");
    printf("A is %d and B is %d", A,B);
    int temp=A;
    A=B;
    B=temp;
    printf("--------After swap--------");
    printf("A is %d and B is %d", A,B);
    return 0;

}