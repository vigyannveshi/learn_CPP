#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    /*Data Types*/
    int a;  //declaration
    a=12;   //initialization
    cout<<"size of int:"<<sizeof(a)<<endl;

    float b;
    cout<<"size of float:"<<sizeof(b)<<endl;

    char c;
    cout<<"size of character:"<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool:"<<sizeof(d)<<endl;
    
    /*Type Modifiers*/

    unsigned int ui;
    cout<<"size of unsigned int:"<<sizeof(ui)<<endl;

    signed int si;
    cout<<"size of sized int:"<<sizeof(si)<<endl;

    short int sI;
    cout<<"size of short int:"<<sizeof(sI)<<endl;

    long int lI;
    cout<<"size of long int:"<<sizeof(lI)<<endl;
    return 0;
}