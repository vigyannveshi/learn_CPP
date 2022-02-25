/*
The program shall correctly visualize the total number of perfectly ascending and perfectly descending numbers for a 5 digit number have digits from 0 to 9

eg: 54320,54321,96420 etc--> perfectly descending
    23456, 25789, 12345 etc--> perfectly ascending
    here 01234 although appears ascending but can't be treated as a 5 digit number. 
*/

#include <iostream>

using namespace std;
#define N 5

bool is_sorted(int arrSize, int arr[])
{
    /*Base Case: If the array has size = 0 or 1,it is already sorted */
    if(arrSize<=1)
    {
        return 1;
    }
   /*Recursive Case: Check if the last element in the array is greater than the previous element*/
   if(arr[arrSize-1]>arr[arrSize-2])
   {
       return is_sorted(arrSize-1,arr);
   }
       return 0;    
}

bool check_descending(int a)
{
    int i=0 ,arr[N];
    while(a!=0||i<N)
    {
        int rem=a%10;
        arr[i]=rem;
        i++;
        a/=10;
    }

    return is_sorted(N,arr);
}

bool check_ascending(int a)
{
    int i=0 ,arr[N];
    while(a!=0||i<N)
    {
        int rem=a%10;
        arr[i]=rem;
        i++;
        a/=10;
    }
    int Arr[N];
    for(int i=4;i>=0;i--)
    {
        Arr[4-i]=arr[i];
    }
    return is_sorted(N,Arr);
}

int main()
{
    
    int count_D=0,count_A=0;
    for(int i=0;i<99999;i++)
    {
        if(check_descending(i)==1)
        {
            cout<<i<<endl;
            count_D++;
        }
    }
    cout<<endl<<count_D<<endl<<endl<<endl;
    for(int i=0;i<99999;i++)
    {
        if(check_descending(i)==1)
        {
            cout<<i<<endl;
            count_A++;
        }
    }
    cout<<count_A;
    
    return 0;
}
