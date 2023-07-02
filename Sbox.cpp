#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int s[6],x[4],i,j,r,c,y,m;
 int t[4][16]= {14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,
                0,15,7,4,14,2,13,10,3,6,12,11,9,5,3,8,
                4,1,14,8,13,6,2,11,15,12,4,7,3,10,5,0,
                15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13};
 for(i=0;i<=3;i++)
 {
  cout<<endl;
  for(j=0;j<=15;j++)
  {
   cout<<t[i][j]<<" ";
  }
                                             
 }
//  cout<<"\nEnter the input(in decimal)"<<endl;
//  cin>>m;
//  i=5;
//  while(i>=0)
//  {
//   s[i]=m%2;
//   m=m/2;
//   i--;
//  }
 cout<<"\nThe input in binary is....:"<<endl;
 
for(i=0;i<=5;i++)
{
  cin>>s[i];
}
r=(2*(s[0]))+(s[5]);
c=(8*(s[1]))+(4*(s[2]))+(2*(s[3]))+(s[4]);
 y=t[r][c];
 cout<<"\nS box output is :"<<y<<endl;
 //return 0;
 getch();
}
//sbox in c++?