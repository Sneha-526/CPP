#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    int nst = n;
    int nsp = 0;

    for (int r = 1; r<=n; r++){
        for (int sp = 1; sp<=nsp; sp++){
            cout<<"\t";
        }
        for (int st = 1; st<=nst; st++){
            if(r>1 && r<=n/2 && st>1 && st<nst){
                cout<<"\t";
            }
            else{
                cout<<"*\t";
            }
        }
        cout<<endl;
        if ( r<= n/2){
            nst-=2;
            nsp++;
        }
        else{
            nst+=2;
            nsp--;
        }
    }
    
}