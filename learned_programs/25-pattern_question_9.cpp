/*
User defined 0-1 Pattern:

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int r,k;
    cout << "Enter the number of rows:";
    cin >> r;
    /*One possible logic*/
    // for (int i = 1; i<=r; i++)
    // {
    //     if ((i % 2) != 0)
    //     {
    //         k = 1;
    //     }
    //     else
    //     {
    //         k = 0;
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << k << " ";
    //         if (k==1)
    //         {
    //             k = 0;
    //         }
    //         else
    //         {
    //             k = 1;
    //         }
    //     }
    //     cout << endl;
    // }

    /*
    Better alternative
    Terms wherein sum of (row number + column number) is even is = 1
    */
       for (int i = 1; i<=r; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if((i+j)%2==0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}