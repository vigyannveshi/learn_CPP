#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class Ground
{
    int rooms;
    protected:
        void put();
    public:
    void  get();
};

/*
Note: whenever private is inherited it enters the private of the derieved class but 
        isn't passed on the child class of the class inheriting the private data members.
      when a class inherits a private class, it can also access its protected members.

*/
class Middle: private Ground
{
    int labs;


    public:
    void Take();
    void Give()
    {
        Ground G;
        // G.rooms=5;/*cant access rooms in public, whatever inherited as private remains private*/
        G.get();
        // G.put(); /* cant access put(), because it is a protected function in ground*/
        Take();
        labs=7;
        Top t;
        t.In();
        t.Out();
    }

};

class Top: public Middle
{
    int roof;
    public:
    void In();
    void Out();
};

/*
Question:
1) Comment on the type of inheritance?
--> It is a multilevel inheritance.

2) Write the names of all the members which are directly accessible by the member function Give() of the class Middle?
--> get(), labs, Take(),In(),Out(). {put()--> doubt as to how?}

3) Write names of all members which are directly accesible by member function Out() of class top
--> get(), Give(), Take(), In(), roof;

4)Write names of all members which are directly accessible by object T of class Top declared in main() function?
--> get(), Give(), Take(), In().

*/


int main()
{
    

    return 0;
}