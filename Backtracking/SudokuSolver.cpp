#include<bits/stdc++.h>
using namespace std;

bool canPlace(int mat[][9], int i, int j, int n, int number)
{
    for (int x = 0; x < n; x++)
    {
        if(mat[x][j]==number || mat[i][x]==number)
        {
            return false;
        }
    }
    int root = sqrt(n);
    int sx= (i/root)*root;
    int sy = (j/root)*root;

    for(int x=sx;x<sx+root;x++)
    {
        for(int y=sy;y<sy+root;y++)
        {
            if(mat[x][y]==number)
            {
                return false;
            }
        }
    }
    return true;
    
}


bool SolveSudoku(int mat[][9], int i, int j, int n)
{
    //base case
    if(i==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n)
    {
        return SolveSudoku(mat, i+1,0,n);
    }
    if(mat[i][j]!=0)
    {
        return SolveSudoku(mat, i,j+1,n);
    }
    //rec case
    for(int number=1;number<=9;number++)
    {
        if(canPlace(mat,i,j,n,number))
        {
            mat[i][j]=number;
            bool couldweSolve = SolveSudoku(mat,i,j+1,n);
            if(couldweSolve)
            {
                return true;
            }
        }
    }
    mat[i][j]=0;//backtrack
    return false;
}

int main()
{
    int mat[9][9]=
    {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };
    SolveSudoku(mat,0,0,9);
}