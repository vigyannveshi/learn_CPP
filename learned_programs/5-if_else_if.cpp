#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int a;
    cout<<"Enter number:";
    cin>>a;
    if(a>0)
    {
        cout<<"Number entered is positive"<<endl;
        for(int i=2;(i*i)<=a;i++)
        {
            if(a%i==0&&a!=1)
            {
                cout<<"Number is composite"<<endl;
                return 0;
            }
        }
        cout<<"Number is prime"<<endl;
    }
    else if(a<0)
    {
        cout<<"Number entered is negative"<<endl;
    }
    else
    {
        cout<<"Number is zero"<<endl;
    }

    return 0;
}