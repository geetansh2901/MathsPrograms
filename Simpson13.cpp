#include<iostream>
using namespace std;
float f(float x)
{
    return 1/(1+x*x);
}
int main()
{
    cout<<"Evaluate integral 1/(1+x*x) using Simpson's 1/3 Rule with h=0.6";
    float x=0.6,y=0.2*(f(0)+f(6));
    cout<<endl<<0.2*f(0);
    for(int i=1;i<=9;i++)
    {
        if(i%2==1)
        {y+=0.8*f(x);
        cout<<endl<<0.8*f(x);}
        else

        {y+=0.4*f(x);
        cout<<endl<<0.4*f(x);}
        x+=0.6;
    }
    cout<<endl<<0.2*f(6);
    cout<<"\nSolution is "<<y;
    return 0;
}
