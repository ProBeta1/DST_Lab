
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int i,j,x;
    cin>>x;    
    int c=2;
    char ch[27]={'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T',
                    'U','V','W','X','Y','Z'};
    char p[27][27];
    for(j=1;j<=x;j++)
        cout<<ch[j]<<" ";
    for(j=x-1;j>0;j--)
        cout<<ch[j]<<" ";
    cout<<"\n";
    for(i=1;i<=x;i++)
    {

        for(j=1;j<=(x-i);j++)
            cout<<ch[j]<<" ";
        if(i!=x)
        for(j=1;j<=c;j++)
            cout<<" ";
        for(j=(x-i);j>0;j--)
            cout<<ch[j]<<" ";
        if(i<(x-1))
        cout<<"\n";
        c+=4;
    }
    c-=4;
    for(i=x;i>0;i--)
    {

        for(j=1;j<=(x-i);j++)
            cout<<ch[j]<<" ";
        if(i!=x)
        for(j=1;j<=c;j++)
            cout<<" ";
        for(j=(x-i);j>0;j--)
            cout<<ch[j]<<" ";
        cout<<endl;
        c-=4;
    }
    for(j=1;j<=x;j++)
        cout<<ch[j]<<" ";
    for(j=x-1;j>0;j--)
        cout<<ch[j]<<" ";
    cout<<endl;

}
