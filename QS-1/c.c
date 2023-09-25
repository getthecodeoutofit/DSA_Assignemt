//intersection of 2 arrays

#include<stdio.h>

int main(){
    int arr1[50],arr2[50],inter[50],i,j,k=0,n1,n2;
    printf("Enter the size of array 1: ");
    scanf("%d",&n1);
    printf("Enter the size of array 2: ");
    scanf("%d",&n2);
    printf("Enter the Elements in array 1: ");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the Elements in array 2: ");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                inter[k++]=arr2[j];
            }
        }
    }
    printf("The intersection is: ");
    for(i=0;i<k;i++){
        printf("%d ",inter[i]);
    }
    printf("\n");
    return 0;
}