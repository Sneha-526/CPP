#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int sp = 2 * n - 3;
    int st = 1;

    for (int i = 1; i <= n; i++){
        int val = 1;
        for (int j = 1; j <= st; j++){
            cout<<val<<"\t";
            val++;

        }
        for (int j = 1; j <= sp; j++){
            cout<<"\t";

        }
        if( i == n){
            st--;
            val--;
        }
        for(int j = 1; j <= st; j++){
            val--;
            cout<<val<<"\t";

        }
        st++;
        sp-=2;
        cout<<endl;
    }
}