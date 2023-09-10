#include<iostream>

using namespace std;

int main(){
    int n = 5;
    int count = 1;
    for(int i=1;i<=n;i++){ // start loop from 1 to n
        for(int j=1;j<=i;j++){
            cout<<count<<"  "; // print count number and spaces
            count++; // increment counter
        }
        cout<<endl; // end line here.
    }
}