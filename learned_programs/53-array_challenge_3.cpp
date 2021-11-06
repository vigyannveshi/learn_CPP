/*
Longest Arithmetic subarray:  -->Appeared in google kickstart
An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example , [9,10],[3,3,3] and [9,7,5,3] are arithmetic arrays.

Problem:

Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She wants to choose a contiguous arithmetic subarray from her array that has maximum length. Please help her to determine the length of the longest contiguous sub array.

Input:

The first line of the input gives the number of the test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Ai.

Output:

For Each test case, output one line containing Case #x:y, where x is the test case number (starting from 1) and y is the length of the longest contiguous arithmetic subarray.

Constraints:

Time limit: 20 seconds per test set.
Memory limit: 1GB.
1<=T<=100.
0<=A<=10^9.

Test Set 1

2<=N<=2000.

Test set 2

2<=N<=2*10^5 for at most 10 test cases.

For the remaining cases, 2<=N<=2000.

To note:
1s  = 10^8 operations(approx)
20s = 2*10^9 operations(approx)


Sample Test Case:

10     7     4     6    8    10    11
  (-3)  (-3)  (2)   (2)  (2)   (1)

4           6           8          10   --->Length:4
    (2)         (2)         (2)


Intuition and Approach:

-->Loop over the array and find the answer

Maintain the following variables:
1) Previous comman difference (pd)
2) Current Arithmetic Subarray length (curr)
3) Max arithmetic subarray length (ans)

There are two possible cases:
1) pd == A[i]-A[i-1]
    --> curr increases by 1.
    --> ans=max(ans,curr).
2) pd != A[i]-A[i-1]
    -->Update curr to 2, because every size 2 subarray is an arithmetic array
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n, arr[1000];
    cout << "Enter the size of the array:";
    cin >> n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 2, pd = arr[1] - arr[0], curr = 2, j = 2;

    while(j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans = max(ans,curr);
        j++;
    }

    cout<<"The maximum length of arithmetic sub array within entered array: "<<ans;
    return 0;
}
