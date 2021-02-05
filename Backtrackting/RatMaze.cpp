#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, L, R) for (int i = (L); i <= (R); i++)
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
//main function
bool ratinMaze(int **arr, int x, int y, int n, int **solArr)
{

    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;

        if (ratinMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }

        if(ratinMaze(arr,x,y+1,n,solArr)){
            return true;
        }

        //If both down and right dosent give the solution then we will backtrack
        solArr[x][y]=0;  //backtracking 
        return false;
    }

    return false;
}

int main()
{

    int n;
    cin >> n;
    
    //Dynamic Memory Allocation

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solArr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }

    if(ratinMaze(arr,0,0,n,solArr)){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }    
     
    
}