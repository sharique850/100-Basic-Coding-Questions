/*
Convert binarry into decimal
Input: 5
	   10010

Output:18
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

		string s;
		cin>>s;

		long long result = 0;
		long long power = 1;
		for(int i=s.size()-1;i>=0;i--)
		{
			int idigit = s[i] - '0';
			result = result + (idigit * power);
			power = power * 2;
		}
		cout<<result<<endl;
	}
}