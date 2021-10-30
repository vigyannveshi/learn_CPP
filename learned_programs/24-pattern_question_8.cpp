/*
User defined Inverted Pattern:

1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1

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
    for(int i=r;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}