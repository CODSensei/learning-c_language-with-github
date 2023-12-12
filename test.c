#include<stdio.h>
int main() {
    int n,c=0;
    printf("\n Enter number\t");
    scanf("%d",&n);
    if (n==0||n==1)
{
    printf("0 and 1 not prime");

}
for (int i=1;i<=n;i++){
    if (n%i==0)
    
    {
        c++;
    }

}
if (c==2)
printf("number is prime");
else
printf("Number is not prime");
return 0;
}