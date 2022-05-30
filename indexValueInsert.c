#include<stdio.h>
int main(){
    int i,n,value,index;
    printf("Enter the array size,value,& index: ");
    scanf("%d %d %d",&n,&index,&value);
    int arr[n];
    printf("Array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    while(i<=n){
        if(i==index){
            arr[i]=value;
        }
        i++;
    }

    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}