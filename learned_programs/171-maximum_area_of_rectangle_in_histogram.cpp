/*We need to find the maximum area of  vertical rectangle in a histogram, where length is the value of array element and breadth=1 unit */
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

int get_max_area(vector<int> a)
{
    int n=a.size();
    int ans=0,i=0;
    stack<int> st;
    a.push_back(0);
    while(i<n)
    {
        while(!st.empty()&& a[st.top()]>a[i])
        {
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty())
            {
                ans=max(ans,(h*i));
            }
            else
            {
                int len=i-st.top()-1;
                ans=max(ans,(h*len));
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main()
{
    vector<int> a={2,1,5,6,2,3};
    cout<<get_max_area(a);
    return 0;
}