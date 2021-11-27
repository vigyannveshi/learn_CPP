/*
Polymorphism:
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

/*Function overloading*/
class ApnaCollege
{
    public:
    void fun(int x)  
    {
        cout<<"I am a function with int arguement-->x\n";
    }
    void fun(double p)
    {
        cout<<"I am a function with double arguement\n";
    }
    /*If you try to overload using the function with similar arguement type, it will give an error*/
    // void fun(int y)
    // {
    //     cout<<"I am a function with int arguement-->y\n";
    // }
    void fun()
    {
        cout<<"I am a function with no arguements\n";
    }  
};

int main()
{
    ApnaCollege obj;
    obj.fun();
    obj.fun(7.365);
    obj.fun(6);

    return 0;
}