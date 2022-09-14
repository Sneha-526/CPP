#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int nst = 1;
    for (int r = 0; r < n; r++) {
      int val = 1;
        for (int j = 0; j < nst; j++) {
            cout<<val<<"\t";
            val = (val * (r - j))/ (j + 1);
            
        }
        cout<<endl;
        nst++;
    }
    
}