/*
Note: The program will give correct results if the number of horses is a multiple of number of races; Still to figure out, incase the number of horses is not a multiple of number of races.
Problem Statement:
-->You have 25 horses and we cannot calculate exact speed of these horses.
-->We can conduct race for the horses and find which is the fastest horse.
-->But at a time we can conduct a race between only 5 horses.
What are the minimum number of races needed to find the fastest three?  
What are the maximum number of races needed to find the fastest three?  
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n,race=0,m,h;
    cout<<"Enter the number of horses:";
    cin>>n;
    cout<<"Enter the number of horses that can race at a time:";
    cin>>h;
    m=n;

    /*Preliminary race*/
    while(n>0)
    {
        if(n>=h)
        {
            race+=(n/h);
            n-=race*h;
        }
        else if(n<h)
        {
            race+=1;
            break;
        }
    }
    /*Quarterfinals:Race amongst the winners of the first race*/
    n=race;
    while(n>0)
    {
        if(n>=h)
        {
            race+=(n/h);
            n-=race*h;
        }
        else if(n<h)
        {
            race+=1;
            break;
        }
    }

    /*Semifinals:Race amongst 1st runner up and the group containing the winner of Quarterfinals
    suppose p12,p13 are the horses amongst the preliminary round competing with the fastest horse in order of their winning positions, and ru1 is the 1st runner up of quarterfinals
    There are three possible cases:
    1) The winner and runner up are (p12,p13)respectively
    -->second fastest horse-->p12
    -->third fastest horse-->p13
    <-- No more races-->
    2) The winner is  p12 and runner up is ru1
    -->second fastest horse-->p12
    -->third fastest horse-->ru1
    <--no more races-->
    3) The winner is ru1 and runner up is p12
    -->second fastest horse-->ru1
    -->third fastest horse-->?
        -->Here we need to conduct another race to find the third fastest between p12: 
            suppose p22 is the horse amongst the preliminary round competing with the second fastest horse of quarter finals in order of their winning positions.
            a)if p22  wins
            --> Third fastest horse is p22;
            b)if p22 losses 
            --> Third fastest horse is p12;
    */
    race+=1;//-->must race semifinals
    cout<<"To find the fastest three horses amongst "<<m<<" horses, given you can race "<<h<<" horses at a time, You will need a minimum of "<<race<<" races and  maximum of "<<race+1<<" races."<<endl;
    return 0;
}