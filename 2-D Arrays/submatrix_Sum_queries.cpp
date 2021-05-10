/*Given a matrix of size M x N, there are large number of queries to find submatrix sums. Inputs to queries are left top and right bottom indexes of submatrix whose sum is to find out.

How to preprocess the matrix so that submatrix sum queries can be performed in O(1) time.

Example :

tli :  Row number of top left of query submatrix
tlj :  Column number of top left of query submatrix
rbi :  Row number of bottom right of query submatrix
rbj :  Column number of bottom right of query submatrix

Input: mat[M][N] = {{1, 2, 3, 4, 6},
                    {5, 3, 8, 1, 2},
                    {4, 6, 7, 5, 5},
                    {2, 4, 8, 9, 4} };
Query1: tli = 0, tlj = 0, rbi = 1, rbj = 1
Query2: tli = 2, tlj = 2, rbi = 3, rbj = 4
Query3: tli = 1, tlj = 2, rbi = 3, rbj = 3;

Output:
Query1: 11  // Sum between (0, 0) and (1, 1)
Query2: 38  // Sum between (2, 2) and (3, 4)
Query3: 38  // Sum between (1, 2) and (3, 3)
*/
#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    int bi, bj,li,lj;
    cin>>bi>>bj>>li>>lj;
    int pref[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            pref[i][j]=0;
    }
    for(int i=0;i<m;i++)
    {
        pref[0][i]=a[0][i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            pref[i][j]=a[i][j]+pref[i-1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            pref[i][j]+=pref[i][j-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<pref[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<pref[bi][bj]-pref[0][bj]-pref[bi][0]+pref[li-1][lj-1];
}
