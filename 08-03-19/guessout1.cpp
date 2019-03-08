
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
	stack<int>st;
	st.push(5);
	st.push(9);
	st.push(3);
	st.push(2);
	cout<<st.top()<<" ";
	st.pop();
	cout<<st.top()<<" ";
	st.push(7);
	cout<<st.top()<<" ";
	st.pop();	
	cout<<st.top()<<" ";


	// A) 2 3 7 3   B) 2 3 9 5  C) 2 3 9 3  D)2 3 7 9 

}
