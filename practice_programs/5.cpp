/* Problem:
    Changing value of variable in main function, using pointers and a secondary function.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void function(int *p, int *q);

int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    cin>>a>>b;
    function(p,q);
    cout<<a<<endl<<b;
    
    return 0;
}

void function(int *p, int *q)
{
    int a,b;
    a=*p+*q;
    b=abs((*p)-(*q));
    *p=a;
    *q=b;
}
