//union of two given array: 
#include<stdio.h>

int main(){
    int arr1[50],arr2[50],un[50],i,j,n1,n2,count=0,n3,k;
    printf("Enter the number of elements in the array 1: ");
    scanf("%d",&n1);
    printf("Enter the number of elements in the array 2: ");
    scanf("%d",&n2);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
        un[i] = arr1[i];
    }
    n3=n1;
    for(j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
        for(k=0;k<n3;k++){
            if(un[k]==arr2[j]){
                count++;
            }
        }
        if(count==0){
            un[n3++]=arr2[j];    
        } 
        count=0;
    }
    printf("The union is: ");
    for(i=0;i<n3;i++){
        printf("%d ",un[i]);
    }
    printf("\n");

    return 0;
}