#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;
    maxi.push(3);
    maxi.push(4);
    maxi.push(9);
    cout<<"size is->"<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
    cout<<endl;
    mini.push(3);
    mini.push(4);
    mini.push(9);
    cout<<"size is->"<<mini.size()<<endl;
    int m = mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<endl;
        mini.pop();
    }
    cout<<endl;
    cout<<"khali hai kya->"<<mini.empty();
    

    return 0;
}