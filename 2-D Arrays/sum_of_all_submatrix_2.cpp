//  USING PERMUTATIONS (O(N2))
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum+=(a[i][j]*(i+1)*(j+1)*(m-j)*(n-i));
            //(i+1)*(j+1)=upper area and m/n-1 lower area
        }
    }
    cout<<sum;

}
