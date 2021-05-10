//Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots.
//If Real and Distinct , print the roots in increasing order.
//If Real and Equal , print the same repeating root twice
//If Imaginary , no need to print the roots.

//Note : Print only the integer part of the roots.

//Input Format
//First line contains three integer coefficients a,b,c for the equation ax^2 + bx + c = 0.

//Sample Input:
//1 -11 28

//Sample Output:
//Real and Distinct
//4 7

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    double d;
    d=(b*b)-(4*a*c);                                 

    double r1,r2;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    double first,second;
    if(r1<r2)
    {
    first=r1;
    second=r2;
    }
    else
    {
    first=r2;
    second=r1;
    }
    if(d>0)
    {

        cout<<"Real and Distinct"<<endl;
        cout<<first<<" "<<second<<endl;
    }
    if(d==0)
    {
        
        
        cout<<"Real and Equal"<<endl;
        cout<<first<<" "<<second<<endl;
    }
    if(d<0)
    {

        cout<<"Imaginary"<<endl;
        
    }
    return 0;
}
