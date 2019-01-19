//Solution credits : Vivek Kumar
#include <iostream>
#define ll long long int
using namespace std;
int main()
{ 
    ll n1;
    ll m1;
    ll n2;
    ll m2;
    cin >> n1 >> m1 >> n2 >> m2;
    ll arr[n1][m1];
    ll brr[n2][m2];
    ll crr[n1][m2];
    
    for (ll i=0;i<n1;i++){
        for (ll j=0;j<m1;j++){
            cin >> arr[i][j];
        }
    }
    for (ll i=0;i<n2;i++){
        for (ll j=0;j<m2;j++){
            cin >> brr[i][j];
        }
    }
    if (m1==n2){
        
        for (ll i=0;i<m2;i++){
            for (ll p=0;p<n1;p++){
            ll sum=0;
                for (ll k=0;k<m1;k++){
                    sum+=brr[k][i]*arr[p][k];
                }
            
            crr[p][i]=sum;
        }
    }
    for (ll i=0;i<n1;i++){
        for (ll j=0;j<m2;j++){
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }        
        
        
        
    }else{
        cout << "-1" << endl;
    }
    return 0;
}
