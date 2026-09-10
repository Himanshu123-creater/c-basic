#include <stdio.h>
int main(){
    int A;
    printf("Enetr the number :");
    scanf("%d", &A);
    if(A>=1){
        printf("1");
    }
    else if(A==0){
        printf("0");
    }
    else{
        printf("-1");
    }
    return 0;
    
}