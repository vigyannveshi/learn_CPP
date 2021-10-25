/*
Problem Statement:
You have a robot who gives different response wrt buttons pressed:
A-Hello
B-Namaste
C-Hola
D-Bonjour
E-Salut
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    char c;
    cin >> c;
    switch (c)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Hola" << endl;
        break;
    case 'd':
        cout << "Bonjour" << endl;
        break;
    case 'e':
        cout << "Salut" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
    }
    return 0;
}