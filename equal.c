#include <stdio.h>
int main(){
    int A;
    int B;
    printf("Enteer the first number :");
    scanf("%d", &A);
    printf("Enter the second number :");
    scanf("%d", &B);
    if(A==B){
        printf(" %d and %d are same ", A,B);
    }
    else{
        printf(" %d and %d are not same ",A,B);

    }
    return 0;

    

}