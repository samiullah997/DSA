#include<iostream>

using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" "; // print spaces
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}