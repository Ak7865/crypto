#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){

int ct,pt,p,q,n,t,phi,e,d;
cout<<"Enter the value of p "<<endl;
cin>>p;
cout<<"Enter the value of q "<<endl;
cin>>q;
cout<<"Enter the value of e "<<endl;
cin>>e;
n=p*q;
cout<<n<<endl;
phi=(p-1)*(q-1);
cout<<phi<<endl;
 
int x=1;
d=(phi*x+1);
if(d%e==0)
{
 d=((phi*x)+1)/e;
 } else{
 x++;
 d=((phi*x)+1)/e;

 };

 cout<<d<<endl;
getch();
return 0;
}