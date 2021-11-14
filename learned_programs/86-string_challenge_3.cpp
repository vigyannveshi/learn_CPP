/*
Frequency of max occuring character

given string-->"abcacdade"
output-->3
explanation:  a occurs thrice in  the string. 

Logic:
--> Create a array of 26 elements to store the frequency of characters
-->frequency[s[i]-'a']++    
    --> Will increase the frequency of corresponding character;
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    string s="abbcccddddeeeeefffff";
    int frequency[26];
    for(int i=0;i<26;i++)
    {
        frequency[i]=0;
    }

    for(int i=0;i<s.length();i++)
    {
        frequency[s[i]-'a']++;
    }
    int max=0;
    char ans;
    for(int i=0;i<26;i++)
    {
        if(frequency[i]>=max)
        {
            max=frequency[i];
            ans=i+'a';
        }
    }
    cout<<max<<endl<<ans;
    return 0;
}