#include <stdio.h>
int swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=a;
	return (a,b);	
}
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Before swapping first number is %d and second number is %d\n",a,b);
    printf("After swapping first number and second number are ");
    swap(a,b);
    return 0;
}
