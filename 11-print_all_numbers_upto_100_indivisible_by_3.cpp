#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    for(short int i=1;i<=100; i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}