#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =2;
    while(i<n){
        if(n%i==0){
            cout<<"not a prime number"<<endl;
            return 0;
        }
        i=i+1;
    }
    cout<<"prime number"<<endl;
    return 0;
}