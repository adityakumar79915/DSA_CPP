#include<iostream>
using namespace std;
int main(){
    //create 2D array
    int arr[3][4];
    //taking input --> row wise
    /*for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }*/

    //take input --> column wise
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
        }
    }
    //print output
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}