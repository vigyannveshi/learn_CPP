/*
User defined Half Pyramid after 180° rotation

    *
   **
  ***
 ****
*****

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
        for(int j=0;j<r;j++)
        {
            if(j<r-i-1)
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