#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    int max,min;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    max=min=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<"max: "<<max<<" min: "<<min;

}