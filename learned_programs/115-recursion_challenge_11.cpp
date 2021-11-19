/*
Print all possible words from phone digits
    
    1       2       3
   ./      abc     def
    4       5       6
   ghi     jkl     mno
    7       8       9
   pqrs    tuv     wxyz

   

{"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}

input:2,3;
output:
ad
ae
af
bd
be
bf
cd
ce
cf

*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

string keypadArr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    /*If we need to convert a character to number we can use (ch-'0')*/
    string code =keypadArr[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++)
    {
        keypad(ros,ans+code[i]);
    }

}

int main()
{
    keypad("53","");
    return 0;
}