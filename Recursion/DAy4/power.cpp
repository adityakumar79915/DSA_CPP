#include<iostream>
int power(int a, int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    //recursive call
    int ans = power(a,b/2);
    //if b is even
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl;
    int ans = power(a,b);
    cout<<"answer is ->"<<ans<<endl;
}