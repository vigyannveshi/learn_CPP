/*
Virtual Functions: function overwriting using virtual function
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout<<"This is the base class's print function"<<endl;
    }
    void display()
    {
        cout<<"This is the base class's display function"<<endl;
    }
};

class derieved: public base
{
    public:
    void print()
    {
        cout<<"This is the derieved class's print function"<<endl;
    }
    void display()
    {
        cout<<"This is the derieved class's display function"<<endl;
    }
};

int main()
{
    base *baseptr;
    derieved d;
    baseptr=&d;

    baseptr ->print();
    baseptr ->display();

    return 0;
}