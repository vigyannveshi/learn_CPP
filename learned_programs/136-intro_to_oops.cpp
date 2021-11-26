/*
Object Oriented Programming:

Class:It is user defined data type, with some attributes and functions.

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
};


int main()
{
    /*Creating a object*/
    // student a;
    // a.name='Urvi'; 
    // a.age=20;
    // a.gender=1;

    /*Creating an array of object*/
    student arr[3];
    for(int i=0;i<3;i++)
    {  
        string s="";
        cout<<"Enter students name:";
        cin>>s;
        arr[i].setName(s);
        cout<<"Enter students age:";
        cin>>arr[i].age;
        cout<<"Enter students gender:";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++)
    {
        arr[i].printInfo();
    }
    cout<<endl<<"printing private data members using get name:"<<endl;
    for(int i=0;i<3;i++)
    {
        arr[i].getName();
        cout<<endl;
    }
    return 0;
}