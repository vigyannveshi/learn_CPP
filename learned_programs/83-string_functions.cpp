/*
String functions:

Note: String is a part of STL--> Standard template library.

-->append;
    string_1.append(string_2);  
        --> appends string_2 in string_1.
        --> won't add any spaces.
-->accessing character
    string_name[index];
-->clear
    string_1.clear();
-->compare
    string_1.compare(string_2);
        --> compares string_1 with string_2 as: (string_1 - string_2)
-->empty
    string_1.empty();
-->erase
    string_1.erase(starting_index_for_erase,number_of_characters);
-->find
    string_1.find("consecutive_characters_or_character");
        --> returns starting index, if not found returns absurd and large value.
-->insert
    string_1.insert(insertion_index,string_name);
    OR
    string_1.insert(insertion_index,"word");
-->size or length
    string_1.size(); 
        [OR]
    string_1.length(); 
        --> returns non-negative integer.
-->substr
    string_1.substr(starting_index_of_substring,number_of_characters; 
        --> gives substring of string_1 as per the conditions given.
-->stoi
    stoi(string_1);  
        --> converts an integer in the string to an integer.
-->to_string
    to_string(variable);  
        --> converts data in the variable to string.
-->sort()
    sort(string_1.begin(),string_1.end());
        -->string.begin() 
            --> gives the first itritator.
        -->string.end() 
            --> gives the last itritator.
        --> needs the library algorithm.
        --> sorts according to ASCII table i.e. uppercase first then lower case.
        --> will sort in ascending order
    sort(string_1.begin(),string_1.end,greater<data_type>)
        --> will sort in descending order as per the given data type.
    sort(string_1.begin(),string_1.end,lesser<data_type>)
        --> will sort in ascending order as per the given data type.

*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    /*Different functions of strings*/
    string s1 = "fam", s2 = "ily", abc = "asbdfhweuvwef abdhWV hisbdfyew", a = "nincompoop",b="7428",c="The quick brown fox jumped over the lazy dog";
    /*Appending s2 to s1, here s1 is replaced with s1+s2 with and without append() function*/
    // s1.append(s2);
    /*OR*/
    // s1=s1+s2;
    //  cout<<s1;

    /*Appending, maintaining s1 and s2*/
    // cout<<s1+s2<<endl;

    /*Accessing a character in a string, suppose second character of s1*/
    // cout<<s1[1];

    /*Using clear() function*/
    // cout<<abc<<endl;
    // abc.clear();/*clears the data in ABC*/
    // cout<<abc<<endl;
    // cout<<s1;/*used to print out and see if the previous line is empty*/

    /*Comparing two strings*/
    // cout<<s1.compare(s1)<<endl;
    // cout<<s2.compare(s2)<<endl;
    // cout<<s2.compare(s1)<<endl;
    // cout<<s1.compare(s2)<<endl;

    /*empty() function*/
    // if(!abc.empty())
    // {
    //     cout<<"string is not empty"<<endl;
    // }
    // cout<<"clearing string"<<endl;
    // abc.clear();
    // if(abc.empty())
    // {
    //     cout<<"string is empty"<<endl;
    // }

    /*erase() function*/
    // cout<<a<<endl;
    // a.erase(3,3);
    // cout<<a<<endl;

    /*find() function*/
    // cout<<a.find("comp");

    /*insert() function*/
    // a.insert(5,"hello");
    // cout<<a<<endl;
    // a.erase(5,5);
    // a.insert(2,s1);
    // cout<<a<<endl;


    /*size() or length() function*/
    // cout<<s1.size()<<endl<<s1.length();


    /*substr() function*/
    // cout<<a.substr(3,6)<<endl<<a;


    /*stoi() function */
    // int i=stoi(b);
    // cout<<i+2;


    /*to_string() function*/
    // float u=3.141529;
    // cout<<to_string(u)+s1;


    /*sort() function*/
    // cout<<c<<endl;
    // sort(c.begin(),c.end());
    // cout<<c<<endl;

    return 0;
}