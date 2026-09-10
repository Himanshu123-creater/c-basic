# include <stdio.h>
int main(){
    int A, B,C;
    printf("Enter the value of A: ");
    scanf("%d",&A);
    printf("Enter yhe value of B :");
    scanf("%d", &B);
    printf("Enter the value of C :");
    scanf("%d",&C);
    if(A>=B && A>=C){
        printf("%d is largest \n",A);

    }
    else if (B>=C && B>=A){
        printf("%d is largest \n ", B);
    
    }
    else{
        printf("%d is largest \n",C);
    }

    return 0;

}