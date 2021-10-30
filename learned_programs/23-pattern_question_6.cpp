/*
User defined Floyd's Triangle

1
2  3
4  5  6
7  8  9  10
11 12 13 14 15

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int r,count=1;
    cout<<"Enter the number of rows:";
    cin>>r;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}