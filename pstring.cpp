#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
string str1="gfghello";
int begin=0;
int end=str1.length();
while(begin<end)
{
if(str1[begin]!=str1[end])
{
return 0;
}
begin++;
end--;

}
return 1;
}
