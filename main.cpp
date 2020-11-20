#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
int a,n,f2,f1,f;
cout<< "Enter the Fibonacci number of the value you want to get \n ";
cin>> n;
if(n>0 ){
    f2=1;
    f1=1;
    for(int i=1;i<=(n-2);i++){
        f=f2+f1;
        f1=f2;
        f2=f;
        }
        cout<<"f="<<f;
        }
else
    if(n<0)
{
    cout<< "please enter another number";
}
    else
    cout<< "Number Fibonacci is "<< n;
return 0;
}
