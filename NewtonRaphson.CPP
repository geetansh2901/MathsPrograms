#include<iostream.h>
#include<conio.h>
#include<math.h>
double eval(double x)
{return (x*log10(x)-1.2);}
double deri(double x)
{ return log10(x)+1/2.303;}
void main()
{ clrscr();
cout<<"Geetansh Chawla\nCSE-A 4th sem\n02220802716";
cout<<"\nTo solve xlog(x)-1.2=0 using Newton Raphson method";
double a,b;
cout<<"\nEnter initial value";
cin>>a;
double h=eval(a)/deri(a);
b=a-h;
while(a-b>0.000001)
{a=b;
h=eval(a)/deri(a);
b=a-h;
cout<<endl<<b;}
cout<<endl<<"Solution is "<<b;
getch();}

