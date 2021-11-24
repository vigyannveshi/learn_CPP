/*

Reduce the given array:
example: 10 16 7 14 5 3 12 9
reduced: 4  7  2 6  1 0 5  3

Explaination, taking the smallest element, put 0 inplace of it, for the next you put 1 and so on.

Inorder to do it, we need to sort the array, but once the array is sorted, how do we know where to original positions, to implement this we use pair

-->sort the array along with their indexes

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

/*Inorder to understand this we need to understand the working of sort()*/
bool myCompare(pair<int,int> p1, pair<int,int> p2)
{
    return (p1.first<p2.first);
}
int main()
{
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>>v;
    int n=(sizeof(arr))/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        pair<int,int> p;

        /*take pair first, then push it to the vector*/
        // p.first=arr[i];
        // p.second=i;
        // v.push_back(p);

        /*Better method: using function make pair*/
        v.push_back(make_pair(arr[i],i));
    }

    /*while using sort, here we need to create our own comparator*/
    sort(v.begin(),v.end(), myCompare);
    for(int i=0;i<v.size();i++)
    {
        arr[v[i].second]=i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

