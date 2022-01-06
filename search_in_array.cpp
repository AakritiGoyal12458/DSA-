#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,4,1,6,0};
    int n;
    //program to return the index of element
    int k=4;
    //number of elements 
    n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        if (arr[i]==k){
            cout<<"the index of element "<<k<<"is"<<i ;
            return i;
        }
    }
            cout<<"element is not present";
    return 0 ;
}
