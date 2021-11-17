#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
if(n==1)
return 1;

return sum(n%10);


}
int main()
{
cout<<sum(634);
}
