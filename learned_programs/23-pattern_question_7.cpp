/*
Butterfly pattern
----
r=4
*             *
* *         * * 
* * *     * * * 
* * * * * * * * 
rows=1 to r
'*'/row=2*row no
spaces=2*(r-row no)
-----

*             *
* *         * *
* * *     * * * 
* * * * * * * *
* * * * * * * *
* * *     * * * 
* *         * * 
*             * 

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
        for(int j=1;j<=2*r;j++)
        {
            if(j<=i)
            {
            cout<<"*";
            }
            else if(j>i+1&&j<2*r-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=r-1;i>=0;i--)
    {
        for(int j=1;j<=2*r;j++)
        {
            if(j<=i)
            {
            cout<<"*";
            }
            else if(j>i+1&&j<2*r-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}