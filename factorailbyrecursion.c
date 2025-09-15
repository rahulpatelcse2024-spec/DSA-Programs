#include<stdio.h>
int fact(int n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int main(){
	int result=1,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	result=fact(n);
	printf("Factorial of %d : %d",n,result);
	return 0;
}
