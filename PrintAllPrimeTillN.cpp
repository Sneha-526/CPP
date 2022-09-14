#include <iostream>
using namespace std;
int main(){
    int low, high;
    cin >> low >> high;

    for (int num = low; num <= high; num++){
        int div = 2;
        while(div * div <= num){
            if (num % div == 0){

                break;

            }
            div++;
        }

        if (div * div > num){
            cout<<num <<endl;
        }
    }

}