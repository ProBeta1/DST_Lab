
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007



{1, 2, 3, 4}
{1, 1 ,2 ,2, 3, 3, 4, 4}
void stutter(queue<int>&q)
{
	int size = q.size();
	for(int i = 0 ; i < size; i++){
		int x = q.front();
		q.pop();	
		q.push(x);
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
	stutter(q);
	showme(q);

}
