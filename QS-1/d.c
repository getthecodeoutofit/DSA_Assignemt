#include<stdio.h>
int main(){
    //reversing the array;
    int arr[50],i,j,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Reversing the array

    for(i=0,j=n-1;(i<=n/2)&&(j>=n/2);i++,j--){
        int temp = arr[i];
        arr[i] =arr[j];
        arr[j] =temp;
    }
    printf("The reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}