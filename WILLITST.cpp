#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int flag=1;

    while(n!=1)
    {
        if(n%2==1)
         flag=0;
         n/=2;
    }

    if(flag==1)
        cout<<"TAK";
    else
        cout<<"NIE";
}
