/*
    Sliding window Maximum:
    We are given an array and window size k, we must return maximum values at a window size of k from the array

    Example:
    1, 3, -1, -3, 5, 3, 6, 7
    k=3
    Answer:
    3,3,5,5,6,7


*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
// #include <bits/stdc++.h>// needed only for approach 1
using namespace std;

int main()
{
    vector<int> a={1, 3, -1, -3, 5, 3, 6, 7};
    int n=8;
    int k=3;
    
    /*
        Approach 1: Time complexity is O(nlogn)
    */
    // multiset<int,greater<int>> s;
    // vector<int> ans;
    // for(int i=0;i<k;i++)
    // {
    //     s.insert(a[i]);
    // }
    // ans.push_back(*s.begin());
    // for(int i=k,p=0;i<n;i++,p++)
    // {
    //     s.erase(s.lower_bound(a[i-k]));
    //     s.insert(a[i]);
    //     ans.push_back(*s.begin());
    // }

    /*Approach 2: Time complexity is O(n)*/

    deque<int> q;
    vector<int> ans;
    for(int i=0;i<k;i++)
    {
        while(!q.empty() && a[q.back()]<a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);
    for(int i=k;i<n;i++)
    {
        if(q.front()==i-k)
        {
            q.pop_front();
        }
        while(!q.empty() && a[q.back()]<a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}