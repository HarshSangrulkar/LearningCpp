#include<iostream>
using namespace std;

int main(){
    int n,i;
    int x=56;
    int arr[n];
    n=5;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"element found at "<<i;
        }
    }
}