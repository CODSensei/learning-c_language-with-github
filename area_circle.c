#include<stdio.h>
int main() {

    float area;
    int radius;
    printf("\nEnter radius");
    scanf("%d",&radius);
    area=(3.14)*radius*radius;
    printf("Area = %f\n",area);

    return 0;
}