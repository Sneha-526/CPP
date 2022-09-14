#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int nsp = n/6;
    int nst = 1;

    for (int i = 1; i <= n/3; i++){ 
        for (int sp = 1; sp <= nsp; sp++){
            cout<<"\t";

        }
        for (int st = 1; st <= nst; st++){
            cout<<"*\t";

        }

        if (i <= n/6){
            nst = nst + 2;
            nsp--;
        }
        else{
            nst-=2;
            nsp++;

        }
        cout<<endl;
    }
}