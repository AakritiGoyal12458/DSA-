#include <iostream>
using namespace std;

int main()
{
    //program to insert in the element in end 
    int a[5]={3,52,2,23};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"n is"<<n ;
    cout<<"array before inserting"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    a[n-1]=k;
    cout<<"array after inserting"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a[5]={3,52,2,23};
    //insert element 5 at any position given by user 
    int k=5;int position ;
    cout<<"enter position "<<endl;
    cin>>position;
    int n=sizeof(a)/sizeof(a[0]);
  
    cout<<"array before inserting"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    n++;
    for(int i=n-1;i>=position;i--){
        a[i]=a[i-1];
    }
    a[position-1]=k;
    cout<<"array after inserting"<<endl;
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
