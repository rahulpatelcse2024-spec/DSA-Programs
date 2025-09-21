#include<stdio.h>
void main(){
	int marks[50],i,m;
	marks[0]=1;
	printf("Original array: \n");
	for(i=0;i<50;i++){
		printf("%d \n",marks[i]);
		marks[i+1]=marks[i]+1;
	}
	printf("\nEnter the position of element you want to update: ");
	scanf("%d",&i);
	printf("Enter the new marks: ");
	scanf("%d",&m);
	marks[i-1]=m;
	printf("The updated array: \n");
	for(i=0;i<50;i++){
		printf("%d \n",marks[i]);
	}
	
}


