#include<iostream>

using namespace std;

int main(){
    int n=4;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j<=i || j>=n-i){
                cout<< "*   "; // print * here.
            }else{
                cout<<"    "; // print spaces here.
            }
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j>=i || j<=n-i){
                cout<< "*   ";
            }else{
                cout<<"    ";
            }
        }
        cout<<endl;
    }
}