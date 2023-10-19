#include<stdio.h>
int main() {

    float si,pl,rate,t;
    printf("\nEnter Principal :\t");
    scanf('%f',&pl);
    printf("\nEnter Rate :\t");
    scanf('%f',&rate);
    printf("\nEnter Time :\t");
    scanf('%f',&t);
    si=pl*rate*t/100;
    printf("\nSimple Interest is %f",si);
    return 0;
}