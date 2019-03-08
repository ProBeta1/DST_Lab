
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

//Way 1
struct user_que{
	stack<int>s1,s2;

	void enq(int x)
	{
		//Pop from s1 and put to s2
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}

		//Push x to s1
			s1.push(x);

		//Put back contents of s2 back to s1
			while(!s2.empty())
			{
				s1.push(s2.top());
				s2.pop();
			}

	}
	int deq()
	{
		//Condtn ??
		if(s1.empty())
			return -1;
		int x = s1.top();
		s1.pop();
		return x;
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
