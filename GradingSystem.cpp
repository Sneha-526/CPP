#include<iostream>
using namespace std;
void gradingSystem(int m)
{
    if (m > 90){
        cout<<"excellent\n";
    }
    else if (m > 80 && m <= 90){
        cout<<"good\n";
    }
    else if (m > 70 && m <= 80){
        cout<<"fair\n";
    }
    else if (m > 60 && m <= 70){
        cout<<"meets expectations\n";
    }
    else {
        cout<<"below par\n";
    }
}
int main()
{
    int marks;
    cin>>marks;
    gradingSystem(marks);
    return 0;
}