
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007






//In : {1, 2, 3}
//Out : {1, 2, 3, 3, 2, 1}
void mirror(queue<int>&q)
{
	stack<int> s;
	int size = 	q.size();
	for(int i = 0; i < size; i++){
		int x = q.front();
		q.pop();
		q.push(x);
		s.push(x);
	}
	while(!s.empty()){
		int x = s.top();
		s.pop();
		q.push(x);
	}
	


}

void showme(queue<int>q)
{
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	showme(q);
	mirror(q);
	showme(q);
	

}
