#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i=0,j=0,rows,n,m;
cout<<"enter the number of rows:";
cin>>rows;
m=rows;
n=rows-1;
for(i=1;i<=rows;i++)
{
    m--;
    for(j=1;j<=n+i;j++)
    {
	if(j<=m)
	{
	cout<<"  ";
	}
	else
	{
	cout<<"* ";
	}
    }
    cout<<"\n";
}
getch();
}
/*
OUTPUT:
enter the number of rows:7
	    *
	  * * *
	* * * * *
      * * * * * * *
    * * * * * * * * *
  * * * * * * * * * * *
* * * * * * * * * * * * *
*/
	     
