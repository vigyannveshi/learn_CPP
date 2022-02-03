#include <iostream>

using namespace std;

int main() {
    int a;
    long b;
    char ch;
    float f;
    long double d;
    
    cin>>a>>b>>ch>>f;
    scanf("%Lf",&d);
    
    printf("%d\n%ld\n%c\n%f\n%Lf",a,b,ch,f,d);
    return 0;
}