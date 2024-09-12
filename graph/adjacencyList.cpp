#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <stack>
using namespace std;
template <typename T>

class graph
{
public:
    unordered_map<T, list<T>> adjList;

    void addEdge(T u, T v, bool direction)
    {
        // direction =0-> undirected graph
        // direction =1-> directed graph
        // create an edge from u to v
        adjList[u].push_back(v);
        if (direction == 0)
        {
            // unidirectional edge
            // create an edge from v to u
            adjList[v].push_back(u);
        }
    }

    void printAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << "->";
            for (auto neighbours : node.second)
            {
                cout << "" << neighbours << ",";
            }
            cout << endl;
        }
    }
    // level order traversal
    void bfs(int src, unordered_map<int, bool> &visited)
    {
        queue<int> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            cout << frontNode << ",";
            // insert neighbors
            for (auto n : adjList[frontNode])
            {
                if (!visited[n])
                {
                    q.push(n);
                    visited[n] = true;
                }
            }
        }
    }

    void dfs(int src, unordered_map<int, bool> &visited)
    {
        cout << src << ",";
        visited[src] = true;
        for (auto n : adjList[src])
        {
            if (!visited[n])
                dfs(n, visited);
        }
    }

    bool IsCyclic(int src, unordered_map<int, bool> &visited)
    {
        unordered_map<int, int> parent;
        queue<int> q;
        q.push(src);
        parent[src] = -1;
        visited[src] = true;

        while (!q.empty())
        {
            int frontNode = q.front();

            q.pop();

            for (auto nbr : adjList[frontNode])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    parent[nbr] = frontNode;
                    visited[nbr] = true;
                }
                else
                {
                    if (parent[frontNode] != nbr)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
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

    void topologicalSortBfs(int n, vector<int> &ans)
    {
        queue<int> q;
        unordered_map<int, int> indegree;

        // calculation of indegree
        for (auto i : adjList)
        
        {
            int src = i.first;
            for (auto nbr : i.second)
            {
                indegree[nbr]++;
            }
        }
        // least indegerr/less dependent nodes/vertex are added to the queue
        for (int i = 0; i < n; ++i)
        {
            if (indegree[i] == 0)
                q.push(i);
        }

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            ans.push_back(frontNode);
            // after disconnection of parent node there indegree should be subtracted
            // or we can count here the no of nodes
            for (auto nbr : adjList[frontNode])
            {
                indegree[nbr]--;

                if (indegree[nbr] == 0)
                    q.push(nbr);
            }
        }
    }
};

int main()
{
    graph<int> g;
    // topological graph input
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 1);
    g.addEdge(3, 5, 1);
    g.addEdge(4, 6, 1);
    g.addEdge(5, 6, 1);
    g.addEdge(6, 7, 1);
    int n = 8;
    vector<int> ans;
    g.topologicalSortBfs(n, ans);

    for (int i = 0; i < ans.size(); ++i)
    {
        cout << i << " ";
    }

    if (ans.size() == n)
    {
        cout << "it is a valid topo sort" << endl;
    }
    else
    {
        cout << "invalid topo graph" << endl;
    }

    // unordered_map<int, bool> visited;
    // stack<int> stackKun;

    // for (int i = 0; i < n; ++i)
    // {
    //     if (!visited[i])
    //     {
    //         g.topologicalSortDfs(i, visited, stackKun);
    //     }
    // }

    // while (!stackKun.empty())
    // {
    //     cout << stackKun.top() << " ,";
    //     stackKun.pop();
    // }

    // directed edge input
    // g.addEdge(0, 1, 0);
    // g.addEdge(1, 2, 0);
    // g.addEdge(1, 3, 0);
    // g.addEdge(3, 5, 0);
    // g.addEdge(3, 7, 0);
    // g.addEdge(7, 6, 0);
    // g.addEdge(7, 4, 0);
    // cout << endl;
    // g.printAdjacencyList();
    // cout << endl;

    // unordered_map<int, bool> visited;
    // for disconnected graph make call breath first search traversal as source node ,this wont
    // affecct the time complexity if already visited then it bfs wont proceed any further

    // for (int i = 0; i <= 7; ++i)
    // {
    //     if (!visited[i])
    //     {
    //         g.bfs(0, visited);
    //     }
    // }

    // cout << "depth first search stuff" << endl;

    // unordered_map<int, bool> visited2;

    // for (int i = 0; i <= 7; ++i)
    // {
    //     if (!visited2[i])
    //     {
    //         g.dfs(i, visited);
    //     }
    // }
    // undirected edge input
    //  graph g;
    //  g.addEdge(0, 1, 0);
    //  g.addEdge(1, 2, 0);
    //  g.addEdge(0, 2, 0);

    // cout << endl;
    // g.printAdjacencyList();
    // unordered_map<int, bool> visited;

    // bool ans = false;

    // for (int i = 0; i <= 7; ++i)
    // {
    //     if (!visited[i])
    //     {
    //         ans = g.IsCyclic(i, visited);

    //         if (ans)
    //             break;
    //     }
    // }

    // (ans) ? cout << "true and is cyclic" : cout << "not Cyclic" << endl;

    return 0;
}