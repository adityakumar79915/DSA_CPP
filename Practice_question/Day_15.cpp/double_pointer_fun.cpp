#include<iostream>
using namespace std;
void update(int **p2){
    // p2=p2+1;
    //kuch change hoga - no
    // *p2=*p2+1;
    //kuch change hoga - yes
    **p2 =**p2+1;
    //kuch change hoga
}
int main(){
    int i = 5;
    int *p = &i;
    int **p2= &p;
    // // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;
    // cout<<endl;
    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // cout<<endl;
    // cout<<&p<<endl;
    // cout<<p2<<endl;
    cout<<endl<<endl;
    cout<<"before"<<i<<endl;
    cout<<"before"<<p<<endl;
    cout<<"before"<<p2<<endl;
    update(p2);
    cout<<endl<<endl;
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;
    return 0;
}