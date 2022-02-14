/*
Given a non negative integers representing an elevation map where the width of each bar is 1, Calculate how much water it can trap after it rains

Input:
Array:{0,1,0,2,1,0,1,3,2,1,2,1}
Answer:6
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
using namespace std;

int rain_water(vector<int> a)
{
    stack<int> st;
    int n=a.size(), ans=0;
    for(int i=0;i<n;i++)
    {
        while(!st.empty()&&a[st.top()]<a[i])
        {
            int curr=st.top();
            st.pop();
            if(st.empty())
            {
                break;
            }
            int diff=i-st.top()-1;
            ans+=(min(a[st.top()],a[i])-a[curr])*diff;
        }
        st.push(i);
    }
    return ans;
}   
int main()
{
    vector<int> a={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a);
    return 0;
}