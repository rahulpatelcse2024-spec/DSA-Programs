#include<stdio.h>
int binarysearch(int arr[],int item,int high){
	int i,low=0,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(item>arr[mid]){
		low=mid+1;}
		else if(item==arr[mid]){
		return mid;}
		else{
			high=mid-1;
		}}
	return -1;}
void main(){
	int arr[5],low=0,item,high=5,result,i;
	printf("Enter array in sorted form: ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to search: ");
	scanf("%d",&item);
	result=binarysearch(arr,item,high);
	if(result!=-1){
		printf("Element found at index: %d",result);
	}
	else{
		printf("Element not found!");
	}
}

