/*
    Deque:Double ended Queue
    1) Push and Pop from end
    2) Insert and delete from end
    3) Header file: <deque>
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

int main()
{
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);

    for(auto i :dq)
    {
        cout<<i<<" ";
        cout<<"\n";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
    for(auto i :dq)
    {
        cout<<i<<" ";
        cout<<"\n";
    }
    cout<<dq.size();
    return 0;
}