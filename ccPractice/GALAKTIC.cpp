#include <stdio.h>
#include <stdlib.h>

#define MAXN 100000
#define INF 100000

typedef struct adj {
	int label;
	struct adj *next;
} Adj;

Adj AdjList[1 + MAXN];
int cost[1 + MAXN];
short color[1 + MAXN];

int n, m;
int minCost;

int isolatedComponents;

void dfs_visit(int u)
{
	Adj *v;
	color[u] = 1;
	if (cost[u] >= 0 && cost[u] < minCost)
		minCost = cost[u];
	for (v = AdjList[u].next; v != NULL; v = v->next)
		if (color[v->label] == 0)
			dfs_visit(v->label);
	//color[u] = 2;
}

int dfs()
{
	int u, totalCost = 0;
	int globalMin = INF;
	int connectedComponents = 0;
	isolatedComponents = 0;
	for (u = 1; u <= n; ++u)
		if (color[u] == 0)
		{
			++connectedComponents;
			minCost = INF;
			dfs_visit(u);
			if (minCost == INF)
				++isolatedComponents;
			else
			{
				if (minCost < globalMin)
					globalMin = minCost;
				totalCost += minCost;
			}
		}
	if (connectedComponents == 1)
		return 0;
	if (isolatedComponents != 0)
		return -1;
	return totalCost + (connectedComponents - 2) * globalMin;
}

int main()
{
	int a, b, i;
	Adj *tmp;
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; ++i)
	{
		scanf("%d%d", &a, &b);

		tmp = (Adj *) malloc(sizeof(Adj));
		tmp->label = b;
		tmp->next = AdjList[a].next;
		AdjList[a].next = tmp;

		tmp = (Adj *) malloc(sizeof(Adj));
		tmp->label = a;
		tmp->next = AdjList[b].next;
		AdjList[b].next = tmp;
	}
	for (i = 1; i <= n; ++i)
		scanf("%d", &cost[i]);
	printf("%d\n", dfs());
	return 0;
}