#include<iostream.h>
#include<conio.h>
#include<math.h>
double eval(double x)
{return (x*log10(x)-1.2);}
void main()
{ clrscr();
cout<<"Geetansh Chawla\nCSE-A 4th sem\n02220802716";
cout<<"\nTo solve xlog(x)-1.2=0 using Regula Falsi Method";
double a,b,c;
cout<<"\nEnter initial values ";
cin>>a>>b;
while(eval(a)*eval(b)>0)
{cout<<"\nEnter values again";
cin>>a>>b;}
c=a-(b-a)/(eval(b)-eval(a))*eval(a);
while(c-a>0.01)
{if(eval(c)*eval(a)<0)
b=c;
else if(eval(c)*eval(b)<0)
a=c;
c=a-(b-a)/(eval(b)-eval(a))*eval(a);
cout<<endl<<c;}
cout<<endl<<"Solution is "<<c;
getch();
}