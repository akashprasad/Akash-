# Akash-
#include <iostream>
using namespace std;
int i=0;
int array_max(int x[10]) 
{
  int max,min;
  if(x[i]>x[i+1])
   max=x[i];
  if(i<10)
  {
     i++;
     array_max(x);
  }
 return max;
}
int main() 
{
   int n[10];
   cout<<"Enter 10 element of array : ";
   for(int k=0;k<10;k++)
     cin>>n[k];
   cout<<"maximum element of array : "<<array_max(n);
   return 0;
}
