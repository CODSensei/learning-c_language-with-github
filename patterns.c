#include<stdio.h>
int main() {
    int i,j,k;
    for (i = -5; i <=-1; i++)
    {
        printf("\n");
        for(k=i;k<=i;k++)
        {
            printf("");
        }
        
        for (j = i; j <=-1; j++)
        {
            printf("*");
        }
        
    }
    printf("\n");
    return 0;
}