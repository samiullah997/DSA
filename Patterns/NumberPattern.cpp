#include<iostream>

using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){ // start 1st loop from 1 to n
        for(int j=1;j<=n-i;j++){ // start 2nd loop from 1 to n-i
            cout<<" "; // print spaces
        }
        for(int k=1;k<=i;k++){ // start 2nd loop from 1 to i
            cout<<k<<" ";
        }
        cout<<endl;
    }
}