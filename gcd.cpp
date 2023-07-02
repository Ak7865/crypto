#include<iostream>
#include<conio.h>

using namespace std;
int gcd(int,int);
int main()
{
    int a,b,c,d;
    cout<<"Enter the two numbers two check relative prime : ";
    cin>>a;cin>>b;
    c=gcd(a,b);
    if(c==1)
    
        cout<<"\nThe number "<<a<<" and "<<b<<" is co prime"<<endl;
    
    else
    
        cout<<"\nThe number "<<a<<" and "<<b<<" is co not prime"<<endl;
}
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}