#include <iostream>
using namespace std;
bool pythogoreantriplet(int x, int y, int z)
{
    int a=max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    return (b*b)+(c*c)==(a*a);
}
int main() {
    int x,y,z;
    cin>>x>>y>>z;
    if(pythogoreantriplet(x,y,z))
    {
        cout<<"true";
    }
    else
        cout<<"false";
}
