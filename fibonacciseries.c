#include<stdio.h>
void main(){
	int c,n,a=0,b=1,i;
	printf("Enter the terms upto which you need the Fibonacci Series: ");
	scanf("%d",&n);
	printf("The Fibonacci Series: %d %d ",a,b);
	for(i=3;i<=n;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	
}
