#include<stdio.h>
void main(){
	int i,fact=1,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n==0||n==1){
		printf("Factorial of %d: %d",n,n);
	}
	else{
		for(i=2;i<=n;i++){
			fact=fact*i;
		}
		printf("Factorial of %d: %d ",n,fact);
	}
	
}
