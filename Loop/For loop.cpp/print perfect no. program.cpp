#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    int sum=0;
    for(int i=1;i<n;++i)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
        if(sum==n)
         {
            cout<<"This is a perfect no.";
         }
    
      else{ cout<<"This is not a perfect no.";}
     
}


