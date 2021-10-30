/*
User defined Half Pyramid using numbers

1
22
333
4444
55555

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int r;
    cout<<"Enter the number of rows:";
    cin>>r;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}