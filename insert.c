
// #include <stdio.h>

// int main()
// {
//     int a=4;
//     int number[4]={1,2,3,4};//4*4 
//     printf("%d",sizeof(number));
//     return 0;
// }
#include<stdio.h>
int main(){
int key,pos,n ;
int array[]={1,6,7,9,0};
//insert an element 8, position 3, print original array , 
//increase the size for an element   
printf("write element to be inserted");
scanf("%d",&key);
printf("write a position for element ");
scanf("%d",&pos);
//number of elements
n=sizeof(array)/sizeof(array[0]);//n=20/4=5
printf("original array ");
for(int i= 0 ; i<n ; i ++){
    printf("%d ",array[i]);
}
n++;//n=6    _ _ _ _ _ _{1,6,7,9,0} --> {1,6,8,7,9,0}
for(int i=n-1;i>=pos;i--){
    array[i]=array[i-1];
}
array[pos-1]=key;
printf("new array ");
for(int i= 0 ; i<n ; i ++){
    printf("%d ",array[i]);
}
return 0 ;

}










