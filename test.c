#include<stdio.h>
int printFib(int n) {
    static int a=0,b=1,netm;
    if (n>0){
        netm=a+b;
        a=b;
        b=netm;
        printf("%d",netm);
        printFib(n-1);
    }
}
int main() {
    int n;
    printf("\n Enter the number of terms \t");
    scanf("%d",&n);
    printf("\n0,1,");
    printFib(n-2);
    return 0;
}