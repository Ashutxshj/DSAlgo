/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
public:
    Node *cloneGraph(Node *node)
    {
        // bfs
        if (!node)
            return NULL;

        Node *clone = new Node(node->val, {});
        unordered_map<Node *, Node *> mp;
        mp[node] = clone;
        queue<Node *> q;
        q.push(node);
        while (!q.empty())
        {
            Node *curr = q.front();
            q.pop();
            for (Node *i : curr->neighbors)
            {
                if (mp.find(i) == mp.end())
                {
                    mp[i] = new Node(i->val, {});
                    q.push(i);
                }
                mp[curr]->neighbors.push_back(mp[i]);
            }
        }
        return clone;
    }
};