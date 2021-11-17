#include<iostream>
using namespace std;
int main()
{
int n,m,i;
cin>>n>>m;
int a[n][m];
int temp[n][m];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>a[i][j];
}
}
for (int i = 0; i < n; i++)
{
        for (int j = 0; j < m; j++)
            {
            temp[i][j]=a[j][i];
            }
            }
            for (int i = 0; i < n; i++)
{
        for (int j = 0; j < m; j++)
            {
            a[i][j]=temp[i][j];
            }
            }           
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
}
