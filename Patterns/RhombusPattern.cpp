#include<iostream>

using namespace std;

int main(){
    int n=4;
    for(int i=0;i<=n;i++){ // start 1st loop from 0 to n
        for(int j=n; j>=i; j--){ // start 2nd loop from n to i
            cout<<" "; // print spaces
        }
        cout<<"*  *  *  *  *"<<endl; // print * with spaces
    }
}