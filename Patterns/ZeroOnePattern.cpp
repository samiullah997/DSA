#include<iostream>

using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){ // start 1st loop from 1 to n
        for(int j=1; j<=i; j++){ 
            if((i+j)%2 == 0){
                cout<<0<<" ";
            }else {
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
}