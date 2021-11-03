/*Array basics*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    //Compile-time initialization
    int array[4]={10,20,30,40};

    //Run-time initialization
    int n,arr[100];
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of the array are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}