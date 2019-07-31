/*

*/

#include<queue>
#include<iostream>
#include<vector>
#include<functional>
#include<cstdio>

using namespace std;

void query_heap(priority_queue<int, vector<int>, greater<int> >pq){
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<"\n";
	return;
}
int main(int argc, char const *argv[])
{
	priority_queue<int, vector<int>, greater<int> >pq;
	int num;
	int k = 3;
	int ct = 0;
	while(scanf("%d", &num)!=EOF){
		if(num==-1){
			query_heap(pq);
		}
		else if(ct < k){
			//cout<<"push "<<num<<"\n";
			pq.push(num);
			ct++;
		}
		else{
			if(num>pq.top()){
				pq.pop();
				pq.push(num);
			}
		}
	}
	return 0;
}
