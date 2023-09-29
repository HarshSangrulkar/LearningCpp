#include<iostream>
using namespace std;
int main(){
    int i,n,max,min;
    int arr[n]={12,45,78,89,23};
    n=5;
    arr[0]=max=min;
    
    for(i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];

        }
        
    }
    
    
    for(i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];

        }
        
    }
    cout<<"max element is "<<max;
    cout<<"min element is "<<min;
}