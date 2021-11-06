/*
Record Breaker:

Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors of the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:

1) The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
2) Either it is the last day, or the number of visitors on that day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days

Input:

First line of input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Vi.

Output:
For each  test, output one line containing Case #x:y, where x, is the test case number (starting from 1) and y  is the number of record breaking days.

Constraints:

Time limit: 20 seconds per test set.
Memory limit: 1GB.
1<=T<=100.
0<=A<=10^9.

Test Set 1

1<=N<=2000.

Test set 2

1<=N<=2*10^5 for at most 10 test cases.

For the remaining cases, 1<=N<=1000.

To note:
1s  = 10^8 operations(approx)
20s = 2*10^9 operations(approx)

--> From constraints we can conclude that the solutions to the test case must be either O(n), O(root(n)),O(log(n)) but not of higher powers of n, we know this because for Test case 2, 1<=N<=2*10^5, suppose the time complexity is of O(n^2)-->
for N<=2*10^5--> O(4*10^10) which is far greater then limit 0<=A<=10^9.

Intuition and Approach:
The day is record breaking if 
1)V[i]>V[i-1]&&V[i]>V[i+1];

Sample Test Case:
1       2       0     7       2       0       2     2 
N       Y       N     Y       N       N       N     N     
Total record breaking days=2

Brute force Approach 
-->Iterate over all the elements and check if its a record breaking day or not.
Note: To check if a[i] is a record breaking, we have to iterate over a[0], a[1]...a[i-1].
but time complexity for this operation: O(n).
Overall Time Complexity: O(n^2).


Optimised Approach:
Intuition: 
If we can optimise step(1), then we can optimise our overall solution
For Step(1): We need to check if a[i]> {a[i-1], a[i-2],...a[0]}, which is same as
a[i]> max(a[i-1],a[i-2],....a[0]);

For this, we will keep a variable mx, which will store the maximum value till a[i]. Then we just need to check,

                a[i]>mx
                a[i]>a[i+1],{if i+1<n}
                and update mx, mx=max(mx, a[i])
So step (1) time complexity reduces to 0(1).
            Overall time complexity:O(n).
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
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<"The number of record breaking days is:1"<<endl;
        return 0;
    } 

    int mx=-1, ans=0;

    for(int i=0;i<n;i++)
    {
        // if(i==(n-1))
        // {
        //     arr[i+1]=-1;
        // }
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
            mx=max(mx,arr[i]);
        }
    }
    cout<<"The number of record breaking days are: "<<ans<<endl;
    return 0;
}
