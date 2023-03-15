#include<bits/stdc++.h>
using namespace std;

const int N = 10000;

vector<int>graph[N];


int main()
{
	int node,edge;
	scanf("%d %d",&node,&edge);

	for(int i=0;i<edge;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);

		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	
}