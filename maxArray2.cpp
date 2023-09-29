#include<iostream>
using namespace std;

int max(int array[],int n){
    int max;
    max=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}
int min(int array[],int n){
    int min;
    min=array[0];
    for(int i=0;i<n;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;

}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"max: "<<max(array,n)<<" min: "<<min(array,n);
}