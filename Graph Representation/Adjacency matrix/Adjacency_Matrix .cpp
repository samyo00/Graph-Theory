#include<bits/stdc++.h>
using namespace std;

const int N = 1000;

int graph[N][N];

int main()
{
	int node,edge;
	scanf("%d %d",&node,&edge);

	for(int i=0;i<edge;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);

		graph[a][b] = 1;
		graph[b][a] = 1;
	}

	for(int i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		{
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
}