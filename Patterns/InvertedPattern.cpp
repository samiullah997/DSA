#include<iostream>

using namespace std;

int main(){
    int n=5;
    for(int i=0; i<=n; i++){ // start 1st loop from 0 to n
        for(int j=1; j<=n-i; j++){ // start 2nd loop from 1 to n
            cout<<j<<"  "; // print j with spaces
        }
        cout<<endl;
    }
}