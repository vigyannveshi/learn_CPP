/*
Checking for Pythogorean Triplets
>>Entered order must not matter
3,4,5<==>5,4,3
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int max(int a, int b);
bool pyth(int p, int q, int r);

int main()
{
    int p,q,r;
    cout<<"Note: Pythogorean triplets are in order side:1, side:2, hypotenuese"<<endl<<"Enter the triplets:";
    cin>>p>>q>>r;
    if(pyth(p,q,r))
    {
        cout<<p<<", "<<q<<", "<<r<<" are pythogorean triplets";
    }
    else
    {
        cout<<p<<", "<<q<<", "<<r<<" are not pythogorean triplets";
    }
    return 0;
}

int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}
bool pyth(int p, int q, int r)
{
    int a,b,c;
    c=max(p,max(q,r));
    if(c==p)
    {
        a=q;
        b=r;
    }
    else if(c==q)
    {
        a=p;
        b=r;
    }
    else 
    {
        a=p;
        b=q;
    }
    if(pow(c,2)==pow(b,2)+pow(a,2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
