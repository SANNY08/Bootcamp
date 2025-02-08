#include<iostream>
using namespace std;
int factorial(int a)
{
  
    if(a==0 || a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
int main()
{
   int n;
   cout<<"Enter number :";
   cin>>n;

   if(n==0)
   {
    cout<<"Factorial is not defined of negative number :";
   }
   else{
     cout<<"factorial is :"<<factorial(n);
   }
   
   return 0;

}