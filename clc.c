# include <stdio.h>
int main(){
    float A, B;
    printf("Enter the value of A :");
    scanf("%f", &A);
    printf("Enter the value of B :");
    scanf("%f", &B);
    printf("\nThe addition of %f and %f is %f \n", A,B,A+B);
    printf("\nThe sunstraction of %f and %f is %f \n ", A,B,A-B);
    printf("\nThe multiplication of %f and %f is %f \n",A,B,A*B);
    printf("\n The division of %f and %f is %f \n", A,B,A/B);
    return 0;

}