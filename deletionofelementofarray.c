#include<stdio.h>
void main(){
	int marks[5]={1,2,3,4,5},i,j,m;
	printf("Original array: \n");
	for(i=0;i<5;i++){
		printf("%d \n",marks[i]);
	}
	printf("\nEnter the position from which you want to delete a new element: ");
	scanf("%d",&j);
	for(i=j-1;i<5;i++){
		marks[i]=marks[i+1];
	}
	printf("The updated array: \n");
	for(i=0;i<5;i++){
		if(marks[i]==0)
			break;
		printf("%d \n",marks[i]);
		}
	}
