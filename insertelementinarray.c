#include<stdio.h>
void main(){
	int marks[4]={1,2,3,4},i,j,m;
	printf("Original array: \n");
	for(i=0;i<5;i++){
		if(marks[i]==0)
		break;
		printf("%d \n",marks[i]);
	}
	printf("\nEnter the position at which you want to insert a new element: ");
	scanf("%d",&j);
	for(i=5;i>=j-1;i--){
		marks[i+1]=marks[i];
	}
	printf("Enter the new marks: ");
	scanf("%d",&m);
	marks[j-1]=m;
	printf("The updated array: \n");
	for(i=0;i<5;i++){
		printf("%d \n",marks[i]);
	}
	
}
