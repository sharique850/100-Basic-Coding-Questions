/*
Take input string into one line and convert into UPPER case and print in new line

Input : hi my name is sharique akhter

Output : HI
		 MY
		 NAME
		 IS
		 SHARIQUE
		 AKHTER
*/


char Upper(char c)
{
	return 'A' + (c - 'a');
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	while(true)
	{
		string s;
		cin>>s;

		if(s.size()==0)
			break;

		for(int i=0;i<s.size();i++)
		{
			s[i] = Upper(s[i]);
		}

		cout<<s<<endl;
	}
	return 0;
}