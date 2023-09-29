#include<iostream>
using namespace std;

//sum=sum+arr[i]
//maxi=arr[0];
//maxi=max(maxi,sum);
//if(sum<0)->sum=0


int max(int maxi,int sum){
    if(maxi>sum){
        return maxi;
    }
    else{
        return sum;
    }
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=arr[0];

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
        maxi=max(maxi,sum);
        if(sum<=0){
            sum=0;
        }
        
    }
    
   
    cout<<maxi;
}