/*
Find the largest word in the sentence:

Notes:

-->Inorder to take a entire sentence as an input, including spaces we use
    cin.getline(array_name,size_of_array)

    here size of array is the number of elements in the array excluding the '\0'.

--> Whenever we use cin.getline, we need to include cin.ignore inorder to clear the buffer ahead. we can also use the flush function in place of cin.ignore

Example:
The quick brown fox jumped over the lazy dog
n=44;
maximum length --> 6

Jai Shree Ram
n=13;
maximum length --> 4
*/

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
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();
    cout<<endl;
    int i = 0, currLen = 0, maxLen = 0,st=0,maxst=0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if(currLen>maxLen)
            {
                maxLen=currLen;
                maxst=st;
            }
            currLen = 0;
            st=i+1;
        }
        else
        {
        currLen++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << "Max length of word entered is: " << maxLen<<endl;
    for(int i=0; i<maxLen; i++)
    {
        cout<<arr[i+maxst]; 
    }

    return 0;
}
