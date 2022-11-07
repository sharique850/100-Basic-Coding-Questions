#include<bits/stdc++.h>
using namespace std;

bool isPositive(int n)
{
    if(n>=0)
        return 1;
    else
        return 0;

}

int main()
{
    int n;
    cin>>n;

    if(isPositive(n))
        cout<<"Positive";
    else
        cout<<"Negative";
    return 0;
}