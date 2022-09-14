#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if  (i == 1 || i == n){
                cout<<"*\t";

            }
            else if (j == 1 || j == n){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
    
        }
        cout<<endl<<endl;
    }
}