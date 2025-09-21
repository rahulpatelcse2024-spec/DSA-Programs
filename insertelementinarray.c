#include<stdio.h>
void main(){
	int arr[6]={1,2,3,4,5},i,n;
	printf("The original array is: ");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\nEnter element to add in the array: ");
	scanf("%d",&n);
	arr[5]=n;
	printf("The new array is: ");
	for(i=0;i<6;i++){
		printf("%d ",arr[i]);
	}
}