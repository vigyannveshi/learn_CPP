#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class complex
{
    private:
        int real, imaginary;
    public:
        complex(int r=0, int i=0)// considers default constructor with r=0,i=0;
        {
            real =r;
            imaginary=i;
        }
        
        complex operator + (complex const &obj)
        {
            complex res;    
            res.imaginary=imaginary+obj.imaginary;
            res.real=real+obj.real;     
            return res;
        }
        void display()
        {
            cout<<real <<" + "<<imaginary<<"i"<<endl;
        }
};
int main()
{
    complex c1(12,7),c2(6,7);
    complex c3=c1+c2;
    c3.display();
    return 0;
}