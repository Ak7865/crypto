#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char c1[30]="",c2[30]="",c3[30]="",pt[65];
    int i,count1=0,count2=0,count3=0,len;
    cout<<"\nEnter the plaintext: "<<endl;
    cin>>pt;
    len=strlen(pt);
    for(i=0;i<len;i++)
    {
        if(i%4==0){
            c1[count1++]=pt[i];
        }     
        else if (i%2==1)
        {
            c2[count2++]=pt[i];
        }
        else
            c3[count3++]=pt[i];
    }
    string s;
    s.append(c1);
    s.append(c2);
    s.append(c3);
    cout<<"\nThe cipher text: "<<"\n "<<s;
    getch();
}