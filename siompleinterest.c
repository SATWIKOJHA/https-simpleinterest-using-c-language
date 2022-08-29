#include<stdio.h>
int main(){
    float principal,simpleInterest,rate,year;
    
    printf("the principal amount is :");
    scanf("%f",&principal);
    printf("rate");
    scanf("%f",&rate);
    printf("year");
    scanf("%f",&year);

    simpleInterest=(principal*rate*year)/100;
    printf("the interest amount is%f",simpleInterest);

    return 0;
}
