#include<iostream>

using namespace std;

int main(){
    int rows=4;
    int columns=5;
    for(int i = 0; i <= rows; i++){ // start 1st loop from 0 to rows
        for(int j = 0; j <= columns; j++){
            if(i == 0 || i == rows || j == 0 || j == columns){
                cout<<"*  "; // print * with spaces
            }else{
                cout<<"   "; // print spaces here.
            }
        }
        cout<<endl;
    }
}