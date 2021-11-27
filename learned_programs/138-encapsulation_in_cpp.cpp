#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class A
{
    public:
        int a;
        void funcA()
        {
            cout<<"Func A\n";
        }
    private:
        int b;
        void funcB()
        {
            cout<<"Func B\n";
        }

    protected:
        int c;
        void funcC()
        {
            cout<<"Func C\n";
        }
};

int main()
{
    A obj;
    obj.funcA();
    // obj.funcB();//cant be accessed externally
    // obj.funcC();//cant be accessed externally

    return 0;
}