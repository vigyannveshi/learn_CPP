#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    unsigned int n,i;
    cout<<"Enter number:";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Number is composite"<<endl;
            break;
        }
    }
    if(i==n)
        cout<<"Number is prime"<<endl;
    return 0;
}