/*
DISCLAIMER (🤣🤣🤣😁😁😁)

You can solve this question by directly infering from the input
as such if total_no_parent_nodes <= k..(🤣🤣). But I have used Generic Trees
for my learning purpose. I am a newbee to Advanced Data Structures
*/

#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

struct Node
{
    int key;
    vector<Node *> children;
};

Node *newNode(int key)
{
    Node *temp = new Node;
    temp->key = key;
    return temp;
}

void LevelOrderTraversal(Node *root, int *k)
{
    if (root == NULL)
        return;

    // Standard level order traversal code
    // using queue
    queue<Node *> q; // Create a queue
    q.push(root);    // Enqueue root
    while (!q.empty())
    {
        int n = q.size(); // No of nodes in the current level

        // If this node has children
        while (n > 0)
        {
            // Dequeue an item from queue and print it
            Node *p = q.front();
            q.pop();
            cout << p->key << " ";

            // // // Only modification for this problem
            if (p->children.size() > 0)
            {
                (*k)++;
            }
            // // // // /// //

            // Enqueue all children of the dequeued item
            for (int i = 0; i < p->children.size(); i++)
                q.push(p->children[i]);
            n--;
        }

        cout << endl; // Print new line between two levels
    }

    return;
}

int main()
{
    int k = 3;
    int total_parent_nodes = 0;
    int arr[] = {1, 3, 1, 1, 1, 2, 1, 1, 0, 0, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    queue<Node *> queue;
    Node *root = newNode(0);

    int j = 1, i = 1;
    queue.push(root);

    while (i < size)
    {
        Node *temp = queue.front();
        queue.pop();

        int count = arr[i];
        for (int k = 0; k < count; k++)
        {
            Node *childNode = newNode(j++);
            temp->children.push_back(childNode);
            queue.push(childNode);
            i++;
        }
        i++;
    }

    // Modify acc to this problem by adding another argument
    LevelOrderTraversal(root, &total_parent_nodes);

    if (total_parent_nodes <= k)
    {
        cout << total_parent_nodes << " Mission Successful" << endl;
    }
    else
    {
        cout << total_parent_nodes << " Mission Unsuccessful" << endl;
    }
}