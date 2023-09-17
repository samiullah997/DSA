#include<iostream>

using namespace std;

int main(){
    int n=5;
    for(int i=0;i<=n;i++){ // start 1st loop from 0 to n
        for(int j=i;j<=n;j++){ // start 2nd loop from i to n
            cout<<"*  "; // print * with spaces
        }
        cout<<endl;
    }
}