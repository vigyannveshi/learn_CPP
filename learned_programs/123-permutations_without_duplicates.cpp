/*
Permutations:
A permutation is a arrangement of members of a sequence into a new sequence:

Question:
Given an array nums of distinct integers,return all possible permutations. You can return the answer in any order.

Sample input: {1,2,3}
Output:{1,2,3},{1,3,2},{2,1,3},{3,2,1},{3,1,2},{2,3,1} 

Sample input: {0,1}
Output:{0,1},{1,0}

Time Complexity: O(N!)
Permutations of N distinct elements, so any algorithm to generate permutations - even using recursion-will be very slow to finish (atleast O(N!)), when N is large.

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

vector<vector<int>>ans;

void permute(vector<int> &a, int idx)
{
     if(idx==a.size())
     {
         ans.push_back(a);
         return;
     }
     for(int i= idx;i<a.size();i++)
     {
         swap(a[i],a[idx]);
         permute(a,idx+1);
         swap(a[i],a[idx]);
     }
     return;
}

int main()
{
    int n;
    cin>>n;
    /*This concept will be clear once we do vectors*/
    vector<int> a(n);
    for(auto &i:a)
    {
        cin>>i;
    }
    permute(a,0);

    for(auto v:ans)
    {
        cout<<endl;
        for(auto i:v)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}


