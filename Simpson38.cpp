#include<iostream>
using namespace std;
float f(float x)
{
    return 1/(1+x*x);
}
int main()
{
    cout<<"Evaluate integral 1/(1+x*x) using Simpson's 3/8 rule with h=0.6";
    float x=0.6,y=(f(0)+f(6));
    cout<<endl<<f(0)*0.6*3/8;
    for(int i=1;i<=9;i++)
    {
        if(i%3==0)
        {y+=2*f(x);
        cout<<endl<<2*f(x)*3/8*.06;}
        else
        {y+=3*f(x);
        cout<<endl<<3*f(x)*3/8*.06;}
        x+=0.6;
    }
     cout<<endl<<f(6)*0.6*3/8;
    y=y*3/8*0.6;
    cout<<"\nSolution is "<<y;
    return 0;
}
