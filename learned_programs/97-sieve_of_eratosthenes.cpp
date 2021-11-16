/*
The sieve of eratosthenes is used to find primes numbers at the time complexity of log(n).
-->Here we take an array of size n, where n is the exent of prime numbers to be checked starting from 2, then we mark all the multiples possible of all numbers within the array, whatever are unmarked, this are the prime numbers.
-->Marking of multiples of previous numbers will begin from (prevNum)^2, because as we move ahead previous multiples of the  number will already be marked.

--> In layman's words we will remove all the non primes inorder to find the primes
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void primeSieve(int n)
{
    int *prime;
    prime =(int*) calloc(n,sizeof(int));
    prime[n]=0;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the upper limit for discovery of primes:"<<endl;
    cin>>n;
    primeSieve(n);
    return 0;
}