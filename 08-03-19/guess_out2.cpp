
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
	queue<int> q;
	// produce: {1, 2, 3, 4, 5, 6}
	for (int i = 1; i <= 6; i++) {
	q.push(i);
	}
	cout<<"size : "<<q.size()<<endl;
	for (int i = 0; i < q.size(); i++) {
		cout << q.front() << " ";
		q.pop();
	}
	cout<<endl;
	cout<<"size : "<<q.size();


	// A) 4 5 6   B) 1 2 3    C) 2 3 4   D) 3 4 5 
}
