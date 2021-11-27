/*
Inheritance:
--> Single Inheritance
--> Multiple Inheritance 
--> Multilevel Inheritance
--> Hybrid Inheritance
--> Hierarchial Inheritance

*/
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
        void funcA()
        {
            cout<<"Inherited from A\n";
        }
};
class B : public A{
    public: 
    void funcB()
    {
        cout<< "Inherited from B\n";
    }
};

class C
{
        public: 
        void funcC()
        {
            cout<< "Inherited from C\n";
        }
};

class D: public A, public C
{

};

class E: public B
{

};

class F: public B, public C
{

};
int main()
{
    /*Single inheritance: B has only inherited public A*/
    B b;
    b.funcA();

    /*Multiple inheritance: D has inherited public A and public C*/
    D d;
    d.funcA();
    d.funcC();

    /*Multilevel Inheritance: E has inherited public of B, but B had inherited public A, so automatically E inherits public A*/
    E e;
    e.funcA();

    /*Hybrid Inheritance: F is inheriting from public B and C, but B is inheriting from A, hence F will have the attributes of A, B , C*/
    F f;
    f.funcA();
    f.funcB();
    f.funcC();

    /*Hierachial inheritance: It is a type of a multilevel inheritence, having a definate pattern, similar to human family hierarchy*/
    return 0;
}