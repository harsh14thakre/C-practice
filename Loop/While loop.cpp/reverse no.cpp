#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter the value to be reverse";
    cin>>n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev;

}