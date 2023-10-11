#include<iostream>

using namespace std;

int main(){
    int n=4;
    for(int i=0;i<=n;i++){ // start 1st loop from 0 to n
        for(int j=n; j>=i; j--){
            cout<<" ";
        }
        cout<<"*  *  *  *  *"<<endl;
    }
}