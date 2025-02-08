#include<iostream>
#include<string.h>
using namespace std;
void reversestring(char ch[],int start,int end)
{
    if(start >= end)
    return;
    char temp=ch[start];
    ch[start]=ch[end];
    ch[end]=temp;

    return reversestring(ch,start+1,end-1);
    
}
int main()
{
    char ch[10];
    cout<<"Enter Character :";
    cin>>ch; 
    int length = strlen(ch);
    reversestring(ch, 0, length - 1); 
    cout<<"Reverse String :"<<ch<<endl;
}
