#include<iostream>

using namespace std;

int main(){
    int n=9;
    for(int i=1;i<=3;i++){ // start 1st loop from 1 to 3
        for(int j=1;j<=n;j++){ // start 2nd loop from 1 to n
            if(((i+j)%4==0) || (i==2 && j%4==0)){ // check condition if (i+j) % 4 == 0 OR i==2 AND j%4 == 0
                cout<<"* "; // print * with spaces
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}