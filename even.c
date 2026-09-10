#include <stdio.h>
int main(){
    int A;
    printf("Enter the value ");
    scanf("%d",&A);
    if(A%2==0){
        printf("%d is Even Number \n", A);
    }
    else{
        printf("%d is Odd number \n", A);

    }

    return 0;


}