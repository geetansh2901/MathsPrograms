#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    cout<<"Geetansh Chawla\nCSE-A\n02220802716";
    cout<<"\nTo solve the following equation using Gauss Jordan Method";
    cout<<"\n2x1-7x2+4x3=9\n";
    cout<<"x1+9x2-6x3=1\n";
    cout<<"-3x1+8x2+5x3=6\n";
    float x[3][4]={2,-7,4,9,1,9,-6,1,-3,8,5,6};
   int i,j;
    for(i=0;i<3;i++)
    {
	cout<<endl;
	for(int j=0;j<4;j++)
	    cout<<x[i][j]<<"\t";
    }

	for(j=0;j<4;j++)
	{x[1][j]-=0.5*x[0][j];
	x[2][j]+=1.5*x[0][j];
	x[2][j]+=x[1][j]/5;
	x[2][j]/=9.4;
	x[1][j]+=8*x[2][j];
	x[1][j]/=12.5;
	x[0][j]=x[0][j]+7*x[1][j]-4*x[2][j];
	x[0][j]/=2;
}
cout<<endl<<endl<<"Solution is\tx1="<<x[0][3]<<"\tx2="<<x[1][3]<<"\tx3="<<x[2][3];


    getch();
}
