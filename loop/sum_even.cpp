#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1,sum=0;
    while(i<=n){
        if (i%2==0)
        {
            cout<<i<<" "<<endl;;
            sum=sum+i;
          
        }
      cout<<sum;  
      i++;
    }
    
    
}