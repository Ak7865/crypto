#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int k,i,l=0,t[50];
    char p[50],c[50];
    printf("\nEnter the cipherText: ");
    gets(c);
    l=strlen(c);
    for(i=0;i<l;i++)
    {
        if(c[i]!= ' ')
        {
            if(islower(c[i]==0))
            {
                c[i]=tolower(p[i]);
            }
        }
    }
    for(i=0;i<l;i++)
    {
        t[i]=(int)c[i]-97;
    }
    for(i=0;i<l;i++)
    {
        if(c[i]==' ')
        {
            p[i]=t[i];
        }
        else
        {
            p[i]=(t[i]-3%26);
        }
    }
    printf("\nThe cipherText is : ");
    for(i=0;i<l;i++)
    {
        printf("%c",(p[i]+97));
    }
    printf("\n");
    return 0;
}