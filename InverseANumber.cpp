#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int ans = 0;
  int op = 1;

  while(n>0){
    int od = n%10;
    int ip = od;
    int id = op;

    ans = ans+id*(int)pow(10,ip-1);
    op++;
    n = n/10;
  }
  cout<<ans<<endl;
    
    
}