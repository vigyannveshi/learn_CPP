/*

User defined Star Pattern:

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

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
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=2*(r-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=2*(r-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}