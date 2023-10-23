#include<iostream>

using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){ // start 1st loop from 1 to n
        for(int j=1; j<=i; j++){ // start 2nd loop from 1 to i
            if((i+j)%2 == 0){ // check condition if (i+j)%2 == 0
                cout<<0<<" "; // print zero with spaces
            }else {
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
}