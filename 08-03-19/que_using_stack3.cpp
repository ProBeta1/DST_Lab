
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

//Way 3
struct user_que{
	stack<int>s;

	void enq(int x)
	{
		//Simply push

		s.push(x);
	}
	int deq()
	{
		//Condtn ??
		if(s.empty())
			return -1;
		// Take top of s
		int x = s.top();
		//Pop it
		s.pop();
		// If stack is empty , return x -> we have got the value to be deleted
		if(s.empty())
		{
			return x;
		}
		// ans stores value to be dequeued
		int ans = deq();
		//Push remaining elements in stack recursively
		s.push(x);
		// Finally returns element dequeued
		return ans;

	}
};

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	user_que q;
	q.enq(10);
	q.enq(20);
	q.enq(30);
	cout<<q.deq()<<endl;
	cout<<q.deq()<<endl;

}
