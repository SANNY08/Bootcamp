#include<iostream>
using namespace std;
void continue(int n)
{
    cout<<n;

}
int end(int num)
{
    exit ;
}
int main()
{
    int a,p;
    cout<<"Entre value:";
    cin>>a;
    cout<<"Enter number, do you want continue Press :1";
    cin>>p;
    cout<<"Enter number, do you want end Press :0";
    cin>>p;
    switch(p){
        case 1:
        continue();
        break;

        case 0: end(a);
        break;
    default : 
    cout<<"Enter valid number ";
    break;
    }
   

return 0;

}