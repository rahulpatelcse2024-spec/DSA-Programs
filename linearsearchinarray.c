#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5},n,i,flag=0;
    printf("Enter a element to search: ");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        if(arr[i]==n){
            printf("Element found at index %d",i);
            flag++;
            break;
        }
    }
    else printf("Element not found!");
}

