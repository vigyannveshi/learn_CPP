#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    unsigned int a,b,i,j;
    cin>> a>>b;

    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i&&i!=a&&i!=b)
            cout<<i<<" ";
    }

    return 0;
}