/*

Conversions:
a)Binary to Decimal
b)Octal to Decimal
c)Hexadecimal to Decimal
d)Decimal to Binary
e)Decimal to Octal
f)Decimal to Hexadecimal

*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void binaryToDecimal();
void octalToDecimal();
void hexadecimalToDecimal();
void decimalToBinary();
void decimalToOctal();
void decimalToHexadecimal();

int main()
{
    cout << "Enter the character corresponding to the conversion you want to perform" << endl
         << "'a' for Binary to Decimal" << endl
         << "'b' for Octal to Decimal" << endl
         << "'c' for Hexadecimal to Decimal" << endl
         << "'d' for Decimal to Binary" << endl
         << "'e' for Decimal to Octal" << endl
         << "'f' for Decimal to Hexadecimal" << endl;
    char c;
    cin >> c;
    switch (c)
    {
    case 'a':
        binaryToDecimal();
        break;
    case 'b':
        octalToDecimal();
        break;
    case 'c':
        hexadecimalToDecimal();
        break;
    case 'd':
        decimalToBinary();
        break;
    case 'e':
        decimalToOctal();
        break;
    case 'f':
        decimalToHexadecimal();
        break;
    default:
        cout << "Add a valid input";
        break;
    }
    return 0;
}

/*Binary to Decimal:*/
void binaryToDecimal()
{
    long n,m;
    cout << "Enter a binary number:";
    cin >> n;
    m=n;
    int answer = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        answer += x * y;
        x *= 2;
        n /= 10;
    }
    cout << "binary(" << m << ")"
         << " = Decimal(" << answer << ")";
}

/*Octal to Decimal:*/
void octalToDecimal()
{
    int n,m;
    cout << "Enter an octal number:";
    cin >> n;
    m=n;
    int answer = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        answer += x * y;
        x *= 8;
        n /= 10;
    }
    cout << "octal(" << m << ")"
         << " = Decimal(" << answer << ")";
}

/*Hexadecimal to Decimal:*/
void hexadecimalToDecimal()
{
    string str;
    cout << "Enter a hexadecimal number:";
    cin >> str;
    int answer = 0;
    int x = 1;
    int s = str.size();
    for (int i = s - 1; i >= 00; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            answer += x * (str[i] - '0');
            x *= 16;
        }
        else if (str[i] >= 'A' && str[i] <= 'F')
        {
            answer += x * (str[i] - 'A' + 10);
            x *= 16;
        }
    }
    cout << "Hexadecimal(" << str << ")"
         << " = Decimal(" << answer << ")";
}

/*Decimal to binary:*/
void decimalToBinary()
{
    int n,m;
    cout << "Enter a decimal number:";
    cin >> n;
    m=n;
    int x = 1;
    int answer = 0;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        answer = answer * 10 + lastDigit;
    }
    cout << "Decimal(" << m << ")"
         << " = Binary(" << answer << ")";
}

/*Decimal to Octal:*/
void decimalToOctal()
{
    int n,m;
    cout << "Enter a decimal number:";
    cin >> n;
    m=n;
    int x = 1;
    int answer = 0;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        answer = answer * 10 + lastDigit;
    }
    cout << "Decimal(" << m << ")"
         << " = Octal(" << answer << ")";
}

/*Decimal to Hexadecimal:*/
void decimalToHexadecimal()
{
    int n,m;
    cout << "Enter a decimal number:";
    cin >> n;
    m=n;
    int x = 1;
    string answer = "";
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 16;
        if (lastDigit <= 9)
        {
            answer += to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            answer.push_back(c);
        }
    }
    cout << "Decimal(" << m << ")"
         << " = Hexadecimal(" << answer << ")";
}

/*Second alternative*/
// void decimalToHexadecimal()
// {
// int n;
// cout << "Enter a decimal number:";
// cin >> n;
//     int rem, temp;
//     string answer="";
//     temp=n;

//     while(temp>0)
//     {
//         rem=temp%16;
//         if(rem<10)
//         {
//             char c=48+rem;
//             answer.push_back(c);
//         }
//         if(rem>10)
//         {
//             char c=55+rem;
//             answer.push_back(c);
//         }
//         temp=temp/16;
//     }
//     reverse(answer.begin(), answer.end());
// cout << "Decimal(" << n << ")"
//      << " = Hexadecimal(" << answer << ")";
// }