/*
Friends pairing problem:
Find the number of ways in which n friends can remain single or can be paired up:
1) If we let someone remain single, then the number of remaining people is (n-1)
2) If we pair, then the number of remaining people is n-2
base case:
if two of them remain, you can either pair them or let them remain single.
if only one  remains return 1, it will remain single
if no one remains or if n=0, return 0;

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int pairFriends(int n)
{
    if(n==0||n==1||n==2)
    {
        return n;
    }
    return (pairFriends(n-1)+(pairFriends(n-2))*(n-1));
}
int main()
{
    int n;
    cout<<"Enter the number of friends:"<<endl;
    cin>>n;
    cout<<pairFriends(n);
    return 0;
}