#include<iostream>
using namespace std;
int main()
{
    int a,b,c;//s1,s2,s3;
    cout<<"Enter Angle of triangle :";
    cin>>a;
    cin>>b;
    cin>>c;
   /* cout<<"Enter Side of triangle :";
    cin>>s1;
    cin>>s2;
    cin>>s3;*/

if(a+b+c==180 ){
        cout<<"Triangle is valid ";
    }
  /*  else if(s1+s2 > s3){
         cout<<"Triangle is valid ";
    }
    else if(s1+s3 > s2)
    {
         cout<<"Triangle is valid ";
    }
    else if(s2+s3  > s1)
    {
         cout<<"Triangle is valid ";
    }*/
    else {
         cout<<"Triangle is Not valid ";
    }

return 0 ;
    
}