#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float r1,r2,r1num,r2num,num,den;
    cout<<"Enter the coeff of x^2 :";
    cin>>a;
    cout<<"Enter the coeff of x :";
    cin>>b;
    cout<<"Enter the last term :";
    cin>>c;
    num = pow(b,2) - 4*a*c;
    den = 2*a;
    r1num = -b + sqrt(num);
    r1 = r1num/den;
    r2num = -b - sqrt(num);
    r2 = r2num/den;
    cout<<"The Roots of the given equation is : "<<r1<<" and "<<r2;
    return 0;
}
