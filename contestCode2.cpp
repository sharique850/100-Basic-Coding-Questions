/*
Take T test cases as input along with numbers. 
Product that number and take its least significant value and if it is 2,3, and 5
Print YES else NO

Input : 5
		2 2 2 2 2
Output : YES 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		long long product=1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			product = product * x;
		}

		int digit = product % 10;

		if(digit==2 || digit==3 || digit==5)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}


	return 0;
}	