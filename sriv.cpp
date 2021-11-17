#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
cin>>str;
int beg=0;
int end=str.length()-1;
while(beg<end){
int temp=str[beg];
str[beg]=str[end];
str[end]=temp;
beg++;
end--;
}
cout<<str;
}
