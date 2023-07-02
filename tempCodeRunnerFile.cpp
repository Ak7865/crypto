#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int k,i,l=0,t[50];
    char p[50],c[50];
    printf("\nEnter the plaintText: ");
    gets(p);
    l=strlen(p);
    for(i=0;i<l;i++)
    {
        if(p[i]!= ' ')
        {
            if(islower(p[i]==0))
            {
                p[i]=tolower(p[i]);
            }
        }
    }
    for(i=0;i<l;i++)
    {
        t[i]=(int)p[i]-97;
    }
    for(i=0;i<l;i++)
    {
        if(p[i]==' ')
        {
            c[i]=t[i];
        }
        else
        {
            c[i]=(t[i]+3%26);
        }
    }
    printf("\nThe cipherText is : ");
    for(i=0;i<l;i++)
    {
        printf("%c",(c[i]+97));
    }
    printf("\n");
    return 0;
}