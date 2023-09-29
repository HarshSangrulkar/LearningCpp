#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

//Write your totalPrime function here
/*void totalPrime(int s, int e){
    int count=0;
    for(int i=s;i<=e;i++){
        if(s%i=!0){
            s++;
            count++
            
        }
    }
    cout<<count;
}*/
void prime(int s, int e){
    int j;
    int count=0;
    for(int i=s;i<e;i++){
        for(j=2;j<i;j++){
            if(i%j!=0){
                count++;
                cout<<count;

            }
        }
       

    }
    //cout<<count;
}

int main() {
    int S, E;
    cin >> S >> E;
    //cout << totalPrime(S, E);
    prime(S,E);
    return 0;
}