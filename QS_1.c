#include<stdio.h>

int main(){
    int arr[50],i,n,Esum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if((arr[i]%2)==0){
            Esum += arr[i];
        }

    }
    printf("The sum of the even number is: %d\n",Esum);
    return 0;
}