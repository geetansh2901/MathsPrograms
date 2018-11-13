#include<iostream.h>
#include<conio.h>
#include<math.h>
double eval(double x)
{return (x*log10(x)-1.2);}
void main()
{ clrscr();
cout<<"Geetansh Chawla\nCSE-A 4th sem\n02220802716";
cout<<"\nTo solve xlog(x)-1.2=0 using bisection method";
double a,b,c;
cout<<"\nEnter the initial 2 values";
cin>>a>>b;
if(eval(a)*eval(b)>0)
{
cout<<"Wrong Values Entered\nEnter again";
cin>>a>>b;}
else
{ c=(a+b)/2;
while(b-a>0.0001)
{
if(eval(c)*eval(a)<0)
b=c;
else
if(eval(b)*eval(c)<0)
a=c;
cout<<endl<<c;
c=(a+b)/2;
}}
cout<<endl<<"Solution is "<<c;
getch();
}

