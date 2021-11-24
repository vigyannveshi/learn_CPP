/*
Vectors:They act as dynamic arrays.
We can add as many elements as we want
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    /*Implementation*/
    vector<int> v; // vector<datatype> vector_name;
    /*Adding elements to vector:*/
    v.push_back(1); //  Adds 1 to end, since vector is empty hence its added to start
    v.push_back(2); //  Adds 2 after 1
    v.push_back(3); //  Adds 3 after 2

    /*printing elements in a vector*/
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    } // 1 2 3--> output

    cout << endl;

    /*Second way to iterate through the vector*/

    vector<int>::iterator it; //--> using a iterator
    /*Basically iterator is a pointer that points to the first element of the vector*/
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    } // 1 2 3--> output

    cout << endl;

    /*
        Third way to traverse the vector, using auto keyword
        -->Here element used after auto i.e;
            auto element:v
        --> element datatype gets decided automatically, and compiler comes to
            know that "element" is an element of vector v here auto will become int
        --> here "element" is not an iterator, it will directly signify the values

    */

    for (auto element : v)
    {
        cout << element << " ";
    } // 1 2 3--> output
    cout << endl;

    /*using v.popback() function: used to pop out the end element out from the vector*/

    v.pop_back();

    for (auto element : v)
    {
        cout << element << " ";
    } // 1 2--> output
    cout << endl;

    /*Other alternatives to initialise a vector*/
    vector<int> v2 (3,50);
    
    for(auto element:v2)
    {
        cout<<element<<" ";
    }//50 50 50--> output
    cout<<endl;

    /*swapping values in vector v and v2*/
    swap(v,v2);
    for(auto e:v)
    {
        cout<<e<<" ";
    }//50 50 50--> output
    cout<<endl;
    for(auto e:v2)
    {
        cout<<e<<" ";
    }//1 2-->output
    cout<<endl;

    v.push_back(38);
    v.push_back(12);
    v.push_back(586);

    for(auto e:v)
    {
        cout<<e<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for(auto e:v)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(auto e:v)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}