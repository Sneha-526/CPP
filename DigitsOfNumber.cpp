#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int num = n;
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    int div = pow(10,count-1);
  
    while(div>0){
        int dig = num/div;
        cout<<dig<<endl;
        num = num%div;
        div = div/10;
    }
    
}