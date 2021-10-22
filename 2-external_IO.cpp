#include <iostream>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("2-input.txt","r",stdin);
        freopen("2-output.txt","w",stdout);
    #endif
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    return 0;
}