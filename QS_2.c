//union of two given array: 
#include<stdio.h>

int main(){
    int arr1[50],arr2[50],un[50],i,j,count,k,n1,n2;
    printf("Enter the number of elements in the array 1: ");
    scanf("%d",&n1);
    printf("Enter the number of elements in the array 2: ");
    scanf("%d",&n2);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
        
    }
    for(j=0;j<n2;j++){
        scanf("%d",&arr2[j]);    
    }

    return 0;
}