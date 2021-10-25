#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n,sum;
    cout<<"Enter number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}