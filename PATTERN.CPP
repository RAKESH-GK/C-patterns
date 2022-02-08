#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i=0,j=0,k=5;
for(i=1;i<=5;i++)
{
for(j=i;j<=k;j++)
{
cout<<"* ";
}
k--;
cout<<"\n";
}
getch();
}