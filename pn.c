#include <stdio.h>
int main(){
    int A;
    printf("Enter any number :");
    scanf("%d",&A);

    if(A>=1){
        printf("The number %d is positive integer ", A);
    }
    else if(A==0){
        printf("Zero is non negative and nor positive integer ");
    }
    else{
        printf("The number %d is negative integer ", A);

    }
    return 0;

}