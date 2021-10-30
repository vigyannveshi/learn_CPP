/*
    User defined Rectangle pattern

    ******
    ******
    ******
    ******
    ******

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter the number of rows:";
    cin>>r;
    cout<<"Enter the number of columns:";
    cin>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}