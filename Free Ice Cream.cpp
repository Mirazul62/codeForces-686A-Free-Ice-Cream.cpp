#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,sum=0,count=0,p;
    char a[10000];
    cin>>t>>n;
    sum=n;
    for(i=0;i<t;i++)
    {
        cin>>a[i]>>p;
        if(a[i]=='+')
            sum+=p;
        if(a[i]=='-')
          {
              if(sum>=p)
              sum-=p;
              else
                count++;

          }

            // cout<<sum<<" "<<count<<endl;
    }
    cout<<sum<<" "<<count;

}
