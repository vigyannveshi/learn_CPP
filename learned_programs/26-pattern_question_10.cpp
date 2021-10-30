/*

User defined Rhombus Pattern:

       * * * * * 
     * * * * * 
    * * * * * 
  * * * * * 
* * * * * 

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
        for(int j=r-1;j>i;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<r;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}