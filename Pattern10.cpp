#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int st = 1;
    int sp = n/2;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= sp; j++){
            cout<<"\t";
        }
        for (int j = 1; j <= st; j++){
            if ( j == 1 || j ==st){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
        if (i<=n/2){
            st+=2;
            sp--;

        }
        else{
            st-=2;
            sp++;
        }
    }
}