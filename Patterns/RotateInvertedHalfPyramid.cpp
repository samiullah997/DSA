#include<iostream>

using namespace std;

int main(){
    int n=5;
    for(int i=n;i>=1;i--){ // start 1st loop from n to 1
        for(int j=1;j<=n;j++){
            if(j>=i){
                cout<<"*  ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}