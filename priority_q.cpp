#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char const *argv[])
{
	//priority_queue<int> pq; //max heap
	priority_queue<int, vector<int>, greater<int> > pq;//min heap
	int a[] = {5, 6, 17, 18, 9, 11};
	for (int i = 0; i < 6; i++)
	{
		pq.push(a[i]);
		/* code */
	}
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}