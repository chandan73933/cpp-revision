#include<iostream>
using namespace std;
void test(int x)
{
 try
 {
    if(x==1)
    throw x;
    else if(x==0)
    throw x;
    else if(x==-1)
    throw 1.0;
    
    cout<<"try"<<endl;
    
 }
 catch(char c)
 {
 cout<<"char"<<endl;
 }
 catch(int m)
 {
 cout<<"integer"<<endl;
 }
 catch(double d)
 {
 cout<<"doublec"<<endl;
 }
 
 
}
int main()
{
test(1);
test(-1);
test(0);
return 0;

}
