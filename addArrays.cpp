#include<iostream>
using namespace std;

//Add elements of two arrays
int main(){
    int n,m,i;
    int result[100];
    n=3;
    m=4;
    int arr1[n];
    int arr2[m];
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(i=0;i<m;i++){
        cin>>arr2[i];
    }
    for(i=0;i<100;i++){
        result[i]=result[i]+arr1[i];

    }
    for(i=0;i<100;i++){
        result[i]=result[i]+arr2[i];

    }
    for(i=0;i<100;i++){
        cout<<result[i]<<" ";
    }
    
    

}