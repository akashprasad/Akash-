# Akash-
marge
#include<iostream>
using namespace std;
int marge(int x[],int y[],int a,int c)
 {
   int b[200];int i;
   for( i=0;i<a;i++)
    {
      b[i]=x[i];
    }
    int z=a;
    for(int e=z;e<z+c;e++)                 
    {
      for(int j=0;j<c;j++)
      {
         b[e]=y[j];
      }
    }
   int l=z+c;
    for(int k=0;k<l;k++)
     cout<<b[k]<<endl;
    return 0;
 }

int main()
{
  int a[100],b[100],a1,a2,k;
  cout<<"Enter the limit of both the array(0 to 100): ";
  cin>>a1>>a2;
  cout<<"Enter the element of first array (0 to "<<a1<<") : "<<endl;
  for(int i=0;i<a1;i++)
   cin>>a[i];
  cout<<endl<<"Enter the element of second array (0 to "<<a2<<") : "<<endl;
  for(int j=0;j<a2;j++)
   cin>>b[j];
 marge(a,b,a1,a2);
  
  return 0;
} 
