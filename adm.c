#include <stdio.h>
int main(){
    int physics;
    int math;
    int chemistry;
    printf("Enter the marks in Physics :");
    scanf("%d",&physics);
    printf("Enter the marks in maths :");
    scanf("%d",&math);
    printf("Enter the marks in chemistry :");
    scanf("%d",&chemistry);
    int total;
    total=physics+chemistry+math;
    int totalc;
    totalc=math+physics;

    /// calculation start
    if(math<65){
        printf("The candidate is not eligible for admission");
    }
    else if(physics<55){
        printf("The candidate is not eligible for admission");
    }
    else if(chemistry<50){
        printf("The candidate is not eligible for admission");
    }
    else if(total<190){
        printf("The candidate is not eligible for admission");
    }
    else if(totalc<140){
        printf("The candidate is not eligible for admission");
    }
    else{
        printf("Congrate! you are eligible for admission ");
    }

    return 0;

}