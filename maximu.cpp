#include<iostream>
using namespace std;
int main()
{
	string A;
	string B;
	cin>>A;
	cin>>B;
	for(int i=0;i<A.length();i++)
	{
		for(int j=0;j<B.length();i++)
		{
			if(A[i]==B[j])
			{
				cout<<"YES";
			}
			else
			cout<<"NO";
		}
	}
}
