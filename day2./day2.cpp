#include<iostream>

using namespace std;

int main()

{
 int a[4]={1,2,4,5},sum=0,missingno=0,n;
 n = sizeof(a)/sizeof(a[0]);

   
for(int i=0;i<=3;i++)
{
     sum = sum + a[i];
    
}
int m =n+1;
int total = m*(m+1)/2;

 missingno= total - sum;
 
 
cout<<missingno<<"";
}

