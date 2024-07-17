class Solution {
  public:
    Node *createTree(vector<int> parent) {
        Node* root=nullptr;
        int n=parent.size();
        if(n==0)
        {
            return nullptr;
        }
        vector<Node*> node(n,nullptr);
        for(int i=0;i<n;i++)
        {
            node[i]=new Node(i);
        }

        for(int i=0;i<n;i++)
        {
            if(parent[i]==-1)
            {
                root=node[i];
            }
            else
            {
                Node* parentNode=node[parent[i]];
                if(parentNode->left == nullptr)
                {
                    parentNode->left=node[i];
                }
                else
                {
                    parentNode->right=node[i];
                }
            }
        }
        return root;
    }
};