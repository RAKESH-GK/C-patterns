#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i=0,j=0;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j<i)
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
* * * * *
  * * * *
    * * *
      * *
        *
*/
