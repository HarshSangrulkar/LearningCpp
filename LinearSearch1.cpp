#include<iostream>
using namespace std;

void find(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<x<<" found at "<<i;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int x;
    cout<<"element to be found: ";
    cin>>x;
    find(array,n,x);

}