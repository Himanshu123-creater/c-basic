#include <stdio.h>
int main(){
    float id;
    char name[50];
    float unit;
    printf("Enter the coustomer id :");
    scanf("%f",&id);
    printf("Enter th name of coustomer :");
    scanf("%[^\n]s",name);
    printf("Enter the unit used :");
    scanf("%f",&unit);
    /// calculation start
    printf("Coustomer IDNO : %.2f\n",id);
    printf("Customer Name :%s\n",name);
    printf("unit consume :%.2f\n",unit);

    float bill;
    if(unit<=199){
        bill=unit*1.20;
        printf("Amount charges @Rs. 1.20 per unit : %f\n", bill);
    }
    else if(unit>=200 && unit < 400){
        bill=unit*1.50;
        printf("Amount charges @Rs. 1.50 per unit : %f\n", bill);
    }
    else if(unit>=400 && unit<600){
        bill=unit*1.80;
        printf("Amount charges @Rs. 1.80 per unit : %f\n", bill);
    }
    else if(unit>=600){
        bill=unit*2.00;
        printf("Amount charges @Rs. 2.00 per unit : %f\n", bill);
    }

    float surcharge;
    if(bill>=400){
        surcharge=(bill*15)/100;
        printf("Surcharge Amount : %f\n", surcharge);
    }
    else{
        printf("Surcharge Amount : %f\n", surcharge);
    }
    printf("Net Amount paid by the coustomer : %f\n", bill+surcharge);
    return 0;

}
