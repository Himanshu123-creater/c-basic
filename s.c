# include <stdio.h>
int main(){
    int A,B;
    printf("Enter the value of A :");
    scanf("%d",&A);
    printf("ewnter the value of B :");
    scanf("%d",&B);
    printf("---------Before swap--------\n");
    printf("the value of A is %d and B is %d \n", A,B);
    int temp;
    temp=A;
    A=B;
    B=temp;
    printf("---------After swap--------\n");
    printf("the value of A is %d and  is %d  \n", A,B);
    return 0;
    

}