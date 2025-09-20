#include<stdio.h>
int swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return 0;
}
int main() {
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    swap(&n1,&n2);
    printf("After swapping first number : %d and second number : %d",n1,n2);
    return 0;
}