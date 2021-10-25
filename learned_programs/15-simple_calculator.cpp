#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    float n1,n2;
    char c;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    cout<<"Enter the operator:";
    cin>>c;
    switch(c)
    {
        case '+':
            cout<<n1<<" + "<<n2<<" = "<<n1+n2;
        break;
        case '-':
            cout<<n1<<" - "<<n2<<" = "<<n1-n2;
        break;
        case '*':
            cout<<n1<<" * "<<n2<<" = "<<n1*n2;
        break;
        case '/':
            cout<<n1<<" / "<<n2<<" = "<<n1/n2;
        break;
        default:
            cout<<"Enter valid operator";
    }
    return 0;
}