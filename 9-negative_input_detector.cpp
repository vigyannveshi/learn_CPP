#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    /*Using while loop*/

    // while(n>=0)
    // {
    //     cout<<n<<endl;
    //     cin>>n;
    // }

    /*Using do while loop*/
    do
    {
        cout<<n<<endl;
        cin>>n;
    }
    while(n>=0);
    return 0;
}