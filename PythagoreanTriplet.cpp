#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int a,b,c;
  cin >> a >> b >> c;
  
  int max = a;
  if ( b >= max){
    max == b;
  }
  if (c >= max){
    max == c;
  }

  if ( ((b * b + c * c) == ( a * a )) || ((a * a + c * c) == ( b * b )) || ((b * b + a * a ) == ( c * c ))){
    cout<<"true";
  }
  else{
    bool flag = ((b * b + a * a ) == ( c * c ));
    cout<<"false";
  }
    
    
}