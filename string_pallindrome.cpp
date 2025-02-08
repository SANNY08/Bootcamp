#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20];
    int i;
   cout<<"Enter String :";
   cin>>a;
   string mlength(a);

    for(i=0;i<mlength.length() /2;i++)
    {
        if(a[i]!=a[mlength.length()-1-i])
        {
            printf("Not Palindrome");
            break;
        }
    }
    if(i==mlength.length()/2)
    {
        printf("Palindrome");
    }
}