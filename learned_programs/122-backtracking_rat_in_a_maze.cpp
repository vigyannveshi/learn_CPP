/*

Backtracking:
Back tracking is an algorithmic technique for solving recursive problems by trying to build every possible incrementally and removing those solutions that fail to satisfy the constraints of the problem at any point of time.

Question: Rat in a maze:
            ____________________
    START  |    ||||    ||||   |
           |                   |
           ||||    ||||     ||||
           |   ||||||||        |
           |__________||||_____|  END

Rat can move only one step at a time
-->Inorder to reach its destination, the best path would be found only by moving down and right as per the given maze.
-->The solution provided is only true if movement in maze is striclty down and right only.
The maze can be represented as a 2D matrix:
INPUT:
{1, 0, 1, 0, 1}
{1, 1, 1 ,1 ,1}
{0, 1 ,0, 1, 0}
{1, 0, 0, 1, 1}
{1, 1, 1 ,0 ,1}

-->
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1

Best possible path:
{ (1),    0,      1,      0,      1  }
{ (1),   (1),    (1),    (1),     1  }
{  0,     1,      0,     (1),     0  }
{  1,     0,      0,     (1),    (1) }
{  1,     1,      1,      0,     (1) }

OUTPUT:
{1, 0, 0, 0, 0}
{1, 1, 1, 1 ,0}
{0, 0, 0, 1, 0}
{0, 0, 0, 1, 1}
{0, 0, 0, 0 ,1}

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

/*This funcion is needed to check if block is accessible or note*/
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int** solArr)
{
    /*base condition*/
    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratInMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        else if (ratInMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0; /*Back tracking*/
        return false;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of the maze:" << endl;
    cin>>n;
    /*--Method to allocate memory for a 2D array--*/
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    /*--Method to allocate memory for a 2D array--*/

    /*Taking input for maze:*/
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    /*Initializing solution array*/
    int** solArr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }

    if (ratInMaze(arr, 0, 0, n, solArr))
    {
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<< solArr[i][j]<<" ";
            }
        cout<<endl;
        }
    }
    else
    {
        cout<<"Traversal through maze is not possible"<<endl;
    }
     
    return 0;
}