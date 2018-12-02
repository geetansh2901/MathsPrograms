#include<iostream.h>
#include<conio.h>
//using namespace std;
float f1(float x, float y)
{
    return x+y;
}
float f2(float x, float y)
{
    return x+y+1;
}
float f3(float x, float y)
{
    return x+y+2;
}
float f4(float x, float y)
{
    return x+y+3;
}
int main()
{   clrscr();
    cout<<"GEETANSH CHAWLA\nCSE-A/4TH SEM\n02220802716\n";
    cout<<"Solve dy/dx=x+y, y=0 when x=1, upto x=1.2 and h=0.1\nusing Taylor Series method\n";
    float x=1.0,y[20],h=0.1;
    y[0]=0;
    for(int i=0;x<=1.2;i++)
    {
	y[i+1]=y[i]+h*f1(x,y[i])+h*h/2*f2(x,y[i])+h*h*h/6*f3(x,y[i])+h*h*h*h/24*f4(x,y[i]);
    x+=0.1;
    cout<<y[i+1]<<endl;
    }
    getch();
    return 0;
}
