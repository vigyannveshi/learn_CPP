/*
Finding permutations using STL, valid for both
1)permutations with distict integers
2)permutations with duplicates
Time complexity:O(N!)
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    /*This concept will be clear once we do vectors and STL-Standard Template Library*/
    vector<vector<int>> ans;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));

    for (auto v : ans)
    {
        cout << endl;
        for (auto i : v)
        {
            cout << i << " ";
        }
    }
    return 0;
}