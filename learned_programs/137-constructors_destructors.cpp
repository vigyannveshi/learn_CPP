/*
constructors and destructors:
Used to specify values while declaration of object itself, whenever we create an object in the class, constructor is called by default
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class student
{
    string name;
    public: 
    int age;
    bool gender;

    /*Default-Constructor*/
    student()
    {
        cout<<"default"<<endl;
    }

    /*Parameterised-Constructor*/
    student(string s, int a, bool g){
        name=s;
        age=a;
        gender=g;
    }

    /*Copy-Constructor*/
    student(student &a)
    {
        cout<<endl<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    /*Destructor*/
    ~student()
    {
        cout<<"Destructor called"<<endl;
    }
    void printInfo()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Gender:";
        (gender)?cout<<"female"<<endl:cout<<"male"<<endl;
    }
    void setName(string s)
    {
        name=s;
    }
    void getName()
    {
        cout<<name<<endl;
    }

    /*Operator overloading */
    bool operator ==(student &a)
    {
        if(name==a.name&&age==a.age&&gender==a.gender)
        {
            return true;
        }
        return false;  
    }



}; 

int main()
{
    student a("Urvi",21,1);
    a.printInfo();
    /*If we are creating an object without parameters, wherein we have previously declared a constructor with parameters, then we need a default constuctor or we will get an error*/
    student b("Rahul",21,0);
    /*Two ways of declaring a copy constructor*/
    student c(a);
    c.printInfo();

    student d=a;
    d.printInfo();

    if(b==a)
    {
        cout<<"same"<<endl;
    }
    else{
        cout<<"different\n";
    }
    return 0;
}