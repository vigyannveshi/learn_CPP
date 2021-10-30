/*

User defined Zig-Zag Pattern:


logic:
No of stars=n;
No of rows(i) = 3;
No of columns(j) = n;
whereever (i+j)%4==0 --> *
whereever (i==2)&&(j%4==0)-->*

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of stars:";
    cin>>n;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(((i+j)%4==0)||((i==2)&&(j%4==0)))
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}