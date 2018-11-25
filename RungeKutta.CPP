#include<iostream.h>
#include<conio.h>
//using namespace std;
float f(float x, float y)
{
    return x+y*y;
}
int main()
{   clrscr();
    cout<<"GEETANSH CHAWLA\nCSE-A/4TH SEM\n02220802716\n";
    cout<<"dy/d=x+y^2 , y=1 for x=0.\nFind y when x=0.2 with h=0.2\nUsing Runge Kutta Method\n";
    float x=0.0,y=1.0;
    float h=0.2;
    float f1=h*f(x,y);
    float f2=h*f(x+h/2,y+f1/2);
    float f3=h*f(x+h/2,y+f2/2);
    float f4=h*f(x+h,y+f3);
    cout<<"\nSolution is \n y(0.2)="<<y+(f1+2*f2+2*f3+f4)/6;

    getch();
    return 0;
}
