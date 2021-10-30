/*

User defined Pallindromic Pattern:

          1 
        2 1 2 
      3 2 1 2 3         
    4 3 2 1 2 3 4        
  5 4 3 2 1 2 3 4 5

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
        for(int j=i;j>=1;j--)
        {
            cout<<" "<<j;
        }
        for(int j=2;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}