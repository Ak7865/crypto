#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main()
{
    int a=10,b=20,i,c;
    for(i=0;i<10;i++)
    {
        c=(rand()%(b-a)+a);
        cout<<c<<endl;
    }
    getch();
}