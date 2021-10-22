/*
Problem Statement:
-->Every month she gets pocket money=3000/- which she spends on her outings. 
-->On every outing she needs Rs 300/-
-->Neha is allowed to go for outings only on odd days in a month

Deduce a program to show the days she can go for outings in a month
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int pocketMoney=4500;
    for(short int date=1;date<=30;date++)
    {
        if(pocketMoney<300)
        {
            break;
        }
        if(date%2==0)
        {
            continue;
        }
        cout<<"Neha can go out on "<<date<<endl;
        pocketMoney-=300;
    }

    return 0;
}