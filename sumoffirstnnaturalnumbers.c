#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a natural number :  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    printf("The sum of squares of first %d natural numbers is: %d",n,sum);
    return 0;
}
