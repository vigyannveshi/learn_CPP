/*
Generate all substrings of a string
example:"ABC"
example:"","A","AB","ABC","B","BC","C","AC";
logic:
                                       ""

                        A                               ""                  

                AB              A               B               ""   

            ABC    AB       AC      A       BC      B       C       ""

*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void subseq(string s,string ans)
{
    if(s.length()==0)
    {
       cout<<ans<<endl;
       return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main()
{
    subseq("ABC","");
    return 0;
}