#include<iostream>
using namespace std;
float f(float x)
{
    return 1/(1+x*x);
}
int main()
{
    cout<<"Evaluate integral 1/(1+x*x) using Trapezoidal Rule with h=0.6"<<endl;
    float x=0.6,y=0.3*(f(0)+f(6));
    cout<<0.3*f(0);
    while(x<6)
    {
        y+=0.6*f(x);
        x+=0.6;
        cout<<endl<<0.6*f(x);
    }
    cout<<endl<<0.3*f(6);
    cout<<"\nSolution is "<<y;
    return 0;
}
