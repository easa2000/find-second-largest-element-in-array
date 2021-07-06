// Program to find the second largest number

#include<stdio.h>
void main(){
    int n,i,arr[20],large,pos,second_large;
    printf("\n Enter the number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    large = arr[0];
    pos = 0;
    for(i=1;i<n;i++){
        if(arr[i] > large){
            large = arr[i];
            pos = i;
        }
    }
    second_large = arr[0];
    for(i=0;i<n;i++){
        if( i != pos){
            if(arr[i] > second_large){
                second_large = arr[i];
            }
        }
    }
    printf("\n The Elements are : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n Largest of these numbers is : %d",large);
    printf("\n Second Largest if these numbers is : %d",second_large);
}
