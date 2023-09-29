#include<iostream>
using namespace std;

void print(int array[],int n){
    array[0]=40;
    cout<<"inside function"<<endl;
    for(int i=0;i<3;i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int arr[3]={10,20,30};
    cout<<"inside main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    print(arr,3);
    
    cout<<"inside main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}