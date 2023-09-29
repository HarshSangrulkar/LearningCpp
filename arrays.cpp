#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,2,3,4,5};
    /*int n;
    n=5;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<", ";
    }*/
    int arr2[]={5,1,15,20,25};
    int i=++arr2[1];
    int j= arr2[1]++;
    int k=arr2[i++];
    cout<<i<<" "<<j<<" "<<k;

}