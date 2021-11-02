/*
Adding two binary numbers
    
Number 1:   1 1 1 0 1 0  
Number 2:   0 1 0 1 1 0
          -------------
Sum:      1 0 1 0 0 0 0

let p=101010
    q=010110
l1=5;
l2=4;

step 1:
l1>=0;
l2>=0;
temp!=1;

temp=0;
result=0;
l1-->4;
l2-->3;
temp-->0;


step 2:
l1>=0;
l2>=0;
temp!=1;

temp=2;
result=00;
l1-->3;
l2-->2;
temp-->1;


step 3:
l1>=0;
l2>=0;
temp==1;

temp=2;
result=000;
l1-->2;
l2-->1;
temp-->1;


step 4:
l1>=0;
l2>=0;
temp==1;

temp=2;
result=0000;
l1-->1;
l2-->0;
temp-->1;

step 5:
l1>=0;
l2>=0;
temp==1;

temp=3;
result=10000;
l1-->0;
l2-->-1;
temp-->1;


step 6:
l1>=0;
l2<0;
temp==1;

temp=2;
result=010000;
l1-->-1;
l2-->-2;
temp-->1;


step 7:
l1<0;
l2<0;
temp==1;

temp=1;
result=1010000;
l1-->-2;
l2-->-3;
temp-->0;

step 8:
l1<0;
l2<0;
temp==0;
breaks while loop;
returns answer 1010000;

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

string addBinary(string a, string b);

int main()
{
    string p, q;
    cout << "Enter first number:";
    cin >> p;
    cout << "Enter second number:";
    cin >> q;
    cout << p << " + " << q << " = " << addBinary(p, q);
    return 0;
}

string addBinary(string p, string q)
{
    int l1 = p.size() - 1, l2 = q.size() - 1, temp = 0;
    string result = "";
    while (l1 >= 0 || l2 >= 0 || temp == 1)
    {
        temp += ((l1 >= 0) ? p[l1] - '0' : 0);
        temp += ((l2 >= 0) ? q[l2] - '0' : 0);
        result = char(temp % 2 + '0') + result;
        temp /= 2;
        l1--;
        l2--;
    }
    return result;
}
