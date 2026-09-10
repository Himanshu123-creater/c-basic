#include <stdio.h>
int main(){
    int A;
    int B;
    printf("Enetr the X coordinate :");
    scanf("%d",&A);
    printf("Enter the Y coordinate :");
    scanf("%d",&B);
    if(A>0 && B>0){
        printf("Given %d and %d is in first coordinate ", A,B);
    }
    else if(A<0 && B>0){
        printf("Given %d and %d is in second coordinate ", A,B);
    }
    else if(A<0 && B<0){
        printf("Given %d and %d is in third coordinate ", A,B);
    }
    else if(A >0 && B<0){
        printf("GIven %d and %d is in fourth coordinate ", A,B);
    }
    else if(A==0 && B==0){
        printf("Given %d and %d is orthagonal ", A,B);
    }
    else if(A==0 || B==0 ){
        printf("Given %d and %d is on line ", A,B);
    }
    return 0;

}