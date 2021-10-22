#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    if(a%2==0)
    {
        cout<<"Number is even"<<endl;
    }
    else
    {
        cout<<"Number is odd"<<endl;
    }
    return 0;
}