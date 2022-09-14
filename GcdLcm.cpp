#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n1, n2;
    cin >> n1 >> n2;
    int temp1 = n1;
    int temp2 = n2;

    while (n1 % n2 != 0)
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    int gcd = n2;
    int lcm = (temp1 * temp2) / gcd;
    
    cout<<gcd<<endl<<lcm<<endl;
}