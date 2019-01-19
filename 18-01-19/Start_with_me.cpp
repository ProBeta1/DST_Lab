//Solution Credits : Vivek Kumar
#include <iostream>
using namespace std;
int  main(){
    int t;
    cin >> t;
    t+=1;
    while (t--){
        string s;
        getline(cin,s);
        s=" "+s;
        for (int i=0;i<s.length();i++){
            if (s[i]==' '){
                if (s[i+1]>='a' && s[i+1]<='z')
                    s[i+1]=(char)(s[i+1]-32);
                    if (i!=0)
                cout << " ";    
            }else{
                cout << s[i];
            }
        }
        cout << endl;
        }
        return 0;
}
