#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char c1[30]="",c2[30]="",pt[65];
    int i,count1=0,count2=0,len;
    cout<<"\nEnter the plaintext: "<<endl;
    cin>>pt;
    len=strlen(pt);
    for(i=0;i<len;i++)
    {
        if(i%2==0){
            c1[count1++]=pt[i];
        }     
        else
            c2[count2++]=pt[i];
    }
    cout<<"\nThe cipher text: "<<"\n "<<strcat(c1,c2);
    getch();
}