#include <iostream>
#include <unordered_map>
#include <queue>
#include <stack>
#include <list>
#include <vector>
#include <climits>
using namespace std;

class graph
{
public:
    unordered_map < int, list<pair<int, int>> adjList;

    int addEdge(int u, int v, int weight, bool direction)
    {
        // 1-directed 0-undirected
        adjList[u].push({v, weight})

            if (direction == 0)
        {
            adjList[v].push({u, weight})
        }
    }

    int printAdjacencyList()
    {
        for (auto src : adjList)
        {
            cout << src.first << "->" << endl;

            for (auto nbr : src.second)
            {
                cout << "{" << nbr << " "
                     << "}" << endl;
            }
        }
    }
    // method is restricted to graph with weight of 1 and is for undirected graph
    int shortestPath(int src, int destination)
    {
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        queue<int> q;

        queue.push(src);
        visited[src] = true;
        parent[src] = -1;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            for (auto nbr : adjList[frontNode])
            {
                if (!visited[nbr.first])
                {
                    q.push(nbr.first);
                    visited[nbr.first] = true;
                    parent[nbr.first] = frontNode;
                }
            }
        }
        stack<int> stackKun;
        int node = destination;
        while (node != -1)
        {
            stackKun.push(node);
            node = parent[node];
        }

        while (!stackKun.empty())
        {
            int top = stackKun.top();
            cout << top << "->" << ;
            stackKun.pop();
        }
    }

    void topologicalSortDfs(int src, unordered_map<int, bool> &visited, stack<int> &stackKun)
    {
        visited[src] = true;
        for (auto nbr : adjList[src])
        {
            if (!visited[nbr])
            {
                topologicalSort(nbr, visited, stackKun);
            }
        }
        stackKun.push(src);
    }

    void shortestPathDirectedGraph(int src, int stackKun, int n)
    {
        vector<int> dis(n, INT_MAX);
        int src = stackKun.top();
        stackKun.pop();
        dis[src] = 0;

        for (auto nbr : adjList[0])
        {
            if (dis[topElement] + nbr.second < dis[nbr.first])
            {
                dis[nbr.first] = dis[0] + nbr.second;
            }
        }

        while (!stackKun.empty())
        {
            int topElement = stackKun.top();
            stackKun.pop();
            if (dis[topElement] != -1)
            {
                for (auto nbr : adjList[topElement])
                {
                    if (dis[topElement] + nbr.second < dis[nbr.first])
                    {
                        dis[nbr.first] = dis[topElement] + nbr.second;
                    }
                }
            }
        }
        cout << "printing ans:" << endl;
        for (int i = 0; i < n; ++i)
        {
            cout << i << "->" << dis[i] << endl;
        }
    }
};

int main()
{
    graph g;
    g.addEdge(0, 1, 5, 1);
    g.addEdge(0, 2, 3, 1);
    g.addEdge(2, 1, 2, 1);
    g.addEdge(1, 3, 3, 1);
    g.addEdge(2, 3, 5, 1);
    g.addEdge(2, 4, 6, 1);
    g.addEdge(4, 3, 1, 1);
    stack<int> stackKun;
    unordered_map<int, bool> visited;

    g.topologicalSortDfs(0, stackKun, visited);

    g.shortestPathDirectedGraph(0, stackKun, 5) return 0;
}