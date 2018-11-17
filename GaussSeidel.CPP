#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
cout<<"GEETANSH CHAWLA \nCSE-A 4th SEM \n02220802716";
cout<<"\nTo solve the following equations \nusing Gauss Siedal method upto 4 decimal places";
cout<<"\n2x+y+6z=9\n8x+3y+2z=13\nx+5y+z=7";
double x[12],y[12],z[12];
cout<<"\nEnter initial values of x,y and z\n";
cin>>x[0]>>y[0]>>z[0];
int i=0;
do
{	x[i+1]=(13-3*y[i]-2*z[i])/8;
	y[i+1]=(7-z[i]-x[i+1])/5;
	z[i+1]=(9-y[i+1]-2*x[i+1])/6;
	cout<<"\n"<<i+1<<". x="<<x[i+1]<<" y="<<y[i+1]<<" z="<<z[i+1];
	i++;
}while(fabs(x[i]-x[i-1])>0.000001);
getch();
}