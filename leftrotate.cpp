#include<iostream>
using namespace std;
void reverse(int a[],int beg,int end)
{
while(beg<end)
{
int temp=a[beg];
a[beg]=a[end];
a[end]=temp;
beg++;
end--;
}
}

 int main()
   {
   int n,beg,end,d;
   cin>>n;
   cin>>d;
   
   beg=0;
   end=n-1;
   int a[n];
   for(int i=0;i<n;i++)
   {
   cin>>a[i];
   }
  
   reverse(a,beg,d);
   reverse(a,d+1,end);
   reverse(a,beg,end);
   for(int i=0;i<n;i++)
   {
   cout<<a[i]<<" ";
   }
   }
