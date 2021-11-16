/*
Prime factorization using sieve of eratosthenis
logic:
spf[i]-->smallest prime factor of i
while(n!=i)
{
    print   spf[i];
    n=n/spf[n];
}

example:20-->10-->5-->1
           2    2   5
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void primeFactor(int n)
{
    int *spf;
    spf=(int*) calloc(n,sizeof(int));
    for(int i=2;i<=n;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}

int main()
{
    int n;
    cout<<"Enter a number to find its prime factors:"<<endl;
    cin>>n;
    primeFactor(n);
    return 0;
}