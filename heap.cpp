#include<iostream>
#include<vector>
using namespace std;


class heap{
	vector<int> v;
	bool minHeap;
	bool compare(int a, int b){
		if(minHeap){
			return a<b;
		}
		else{
			return a>b;
		}

	}
	void heapify(int index){
		int l_child = 2*index;
		int r_child = 2*index + 1;
		int min_i = index;
		if(l_child<v.size() && compare(v[l_child], v[min_i])){
			min_i = l_child;
		}
		if(r_child<v.size() && compare( v[r_child], v[min_i])){
			min_i = r_child;
		}
		if(min_i!=index){
			swap(v[min_i], v[index]);
			heapify(min_i);
		}
		
	}
public:
	heap(bool type = true){
		minHeap = type;
		v.push_back(-1);
	}
	void push(int n){
		v.push_back(n);
		int index = v.size()-1;
		int parent = index/2;
		while(index > 1 && compare(v[index], v[parent])){
			swap(v[index], v[parent]);
			index = parent;
			parent = parent/2;
		}
	}
	int top(){
		return v[1];
	}
	bool isEmpty(){
		return v.size()==1;
	}
	void print(){
		for (int i = 1; i < v.size(); i++)
		{
			cout<<v[i]<<" ";
			/* code */
		}
	}
	void pop(){
		int n = v.size()-1;
		swap(v[1], v[n]);
		v.pop_back();

		int index = 1;
		heapify(index);
	}
};

int main(int argc, char const *argv[])
{
	/* code */
	heap h;
	h.push(2);
	h.push(9);
	h.push(10);
	h.push(6);
	h.push(5);
	h.push(4);
	h.print();
	h.pop();
	cout<<"\n";
	h.print();
	cout<<"\n";
	while(!h.isEmpty()){
		cout<<h.top()<<"\n";
		h.pop();
	}
	return 0;
}