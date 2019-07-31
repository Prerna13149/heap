/*
MAGICAL CANDY BAGS
Priyansh loves candy! While taking a stroll in the park, he stumbled upon N Bags with candies. The i'th of these bags contains Ai candies. He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number of candies in the bag increases magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies! ,where [x] is the greatest integer less than x Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes. In a single minute,Monk can consume all the candies in a single bag, regardless of the number of candies in it. Find the maximum number of candies that Monk can consume.


Input Format:
First line contains an integer T. T test cases follow. First line of each test case contains two space-separated integers N and K. Second line of each test case contains N space-separated integers,the number of candies in the bags.

Constraints:
1 ≤ T ≤ 10
1 ≤ N ≤ 10^5
0 ≤ K ≤ 10^5
0 ≤ Ai ≤ 10^10

Output Format:
Print the answer to each test case in a new line.

Sample Input:
1
5 3
2 1 7 4 2
Sample Output:
14
Time Limit: 2 sec
*/

#include<iostream>
#include<queue>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	priority_queue<long long int> pq; //max heap
	//priority_queue<int, vector<int>, greater<int> > pq;//min heap
	long long int test;
	cin>>test;
	long long int i=0;
	while(i<test){
		long long int k;
		long long int n;
		long long int candy;
		cin>>n>>k;
		for(long long int j = 0;j < n;j++){
			cin>>candy;
			pq.push(candy);
		}
		long long int l = 0;
		long long int count = 0;
		while(l<k){
			long long int temp = pq.top();
			count = count + pq.top();
			pq.pop();
			pq.push(floor(temp/2));
			l++;
		}
		cout<<count<<"\n";
		i++;
	}
	return 0;
}
