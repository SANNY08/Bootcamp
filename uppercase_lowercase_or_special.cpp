#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character (uppercase,lowercase,special) :";
    cin>>ch;

    if(ch >='a' && ch <='z')
    {
        cout<<"Lowercase charecter "<<endl;
    }
    else if(ch >='A' && ch<='Z')
    {
        cout<<"Uppercase Charecter "<<endl;
    }
    else if(ch=='~' || ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='&' || ch=='^' || ch=='*' || ch=='(' || ch==')' ||  ch=='-' || ch=='+' || ch=='/')
    {
        cout<<"Special charecter "<<endl;
    }
    else{
        cout<<"Entered invalid charecter"<<endl;
    }
    return 0;
}