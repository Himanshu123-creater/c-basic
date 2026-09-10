# include <stdio.h>
int main(){
    int A;
    printf("Enter age :");
    scanf("%d",&A);
    if(A>=18){
        printf("You are eligible for vote ");
    }
    else{
        printf("You are not eligible for vote");
    }
    return 0;
}