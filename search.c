#include <stdio.h>
//search an element
int search(int arr[],int key,int n ){
    for(int i= 0 ; i<n ; i ++){
         if (arr[i]==key){
             return i;
         }
    }
    return -1;
}

int main()
{
    int key,pos,n ;
    int array[]={1,6,7,9,0};
    printf("write element to be searched");
    scanf("%d",&key);
    
    n=sizeof(array)/sizeof(array[0]);//n=20/4=5
    printf("original array");
    for(int i= 0 ; i<n ; i ++){
         printf(" %d  ",array[i]);
    }
    pos=search(array,key,n);
    
    if (pos==-1){
        printf("element do not exist");
                }
    else{
        printf("element found at position %d " ,pos+1);
    }
    return 0 ;
}
