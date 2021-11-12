#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int m, n, p, q;
    cout << "Enter the number of rows:";
    cin >> n;
    cout << "Enter the number of columns:";
    cin >> m;
    int arr[n][m], k;
    cout << "Enter the element to be found:" << endl;
    cin >> k;
    /*Taking user input --> Run time initialization */
    cout << "Enter the elements in the matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    /*searching*/
    bool flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (k == arr[i][j])
            {
                p = i + 1;
                q = j + 1;
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
    cout<<"The element: "<<k<<" is located at position: ("<<p<<","<<q<<") in the array"<<endl;
    }
    else
    {
    cout<<"The element: "<<k<<" is not located in the array";
    }
    return 0;
}