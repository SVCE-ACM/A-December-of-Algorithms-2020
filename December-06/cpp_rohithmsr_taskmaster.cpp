#include <iostream>
#include <string>
#include <list>

using namespace std;

class Graph
{
    int v;

    list<char> *adj;

public:
    Graph(int v);

    void addEdge(char v, char w);

    void topologicalSort(char v, bool *visited, list<char> *stack);
};

Graph::Graph(int V)
{
    this->v = V;
    adj = new list<char>[V];
}

void Graph::addEdge(char v, char w)
{
    adj[v - 65].push_back(w);
}

void Graph::topologicalSort(char v, bool *visited, list<char> *stack)
{
    visited[v - 65] = true;

    //toposort for adjacent vertices
    for (auto i = adj[v - 65].begin(); i != adj[v - 65].end(); ++i)
        if (!visited[*i - 65])
            topologicalSort(*i, visited, stack);

    stack->push_back(v);
}

void addEdges(string input)
{
    int V = 0;
    char letter = 'A';

    for (int i = 1; i < input.size() - 1; i++)
    {
        if (input[i] == '[')
        {
            V++;
        }
    }

    Graph g(V);

    for (int i = 1; i < input.size() - 1; i++)
    {
        if (input[i] == ']')
        {
            letter++;
        }
        else if (input[i] >= 65 & input[i] <= 90)
        {
            g.addEdge(letter, input[i]);
        }
        else
        {
            continue;
        }
    }
}

void findCompletionOrderOfTasks(string input)
{
    list<char> stack;

    int V = 0;
    char letter = 'A';

    // Find the no of vertices
    for (int i = 1; i < input.size() - 1; i++)
    {
        if (input[i] == '[')
        {
            V++;
        }
    }

    Graph g(V);

    // add the corresponding Edges to the graph
    for (int i = 1; i < input.size() - 1; i++)
    {
        if (input[i] == ']')
        {
            letter++;
        }
        else if (input[i] >= 65 & input[i] <= 90)
        {
            g.addEdge(letter, input[i]);
        }
        else
        {
            continue;
        }
    }

    // Creates boolean array of visited or not
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            g.topologicalSort((char)(i + 65), visited, &stack);
        }
    }

    while (!stack.empty())
    {
        cout << stack.back() << " ";
        stack.pop_back();
    }
}

int main()
{
    string input;
    getline(cin, input);
    findCompletionOrderOfTasks(input);
    return 0;
}