#include <iostream>
#include<cmath>

using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int num = n;
  int count = 0;
  while (num > 0){
    num = num/10;
    count++;
  }

  k = k%count;
  if (k<0){
    k = k +count;
  }

  int div = pow (10, k);
  int mul = pow (10, count-k);
  int quo = n/div;
  int rem = n%div;

  int ans = rem * mul + quo;

  cout<<ans<<endl;  

}