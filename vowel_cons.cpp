#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Character :";
    cin>>ch;
   if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' )
   {
    cout<<"Vowel";
   }
   else if(ch=='A' || ch=='E' || ch=='I' || ch=='o' || ch=='u'  )
   {
     cout<<"Vowel";
   }
   else{
     cout<<"Consonant";
   }
    return 0;
}