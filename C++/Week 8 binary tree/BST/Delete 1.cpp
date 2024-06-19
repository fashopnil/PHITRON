#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *left;
    node *right;
};
class BST
{
public:
    node *root;
    BST()
    {
        root = NULL;
    }
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
    void BFS()
    {
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if (a->left != NULL)
            {
                l = a->left->value;
                q.push(a->left);
            }
            if (a->right != NULL)
            {
                r = a->right->value;
                q.push(a->right);
            }

            cout << "Node value= " << a->value << " Left child= " << l;
            cout << " Right child= " << r << "\n";
        }
    }
    void Insert(int value)
    {
        node *newnode = CreateNewNode(value);
        if (root == NULL)
        {
            root = newnode;
            return;
        }
        node *cur = root;
        node *prv = NULL;
        while (cur != NULL)
        {
            if (newnode->value > cur->value)
            {
                prv = cur;
                cur = cur->right;
            }
            else
            {
                prv = cur;
                cur = cur->left;
            }
        }
        if (newnode->value > prv->value)
        {
            prv->right = newnode;
        }
        else
        {
            prv->left = newnode;
        }
    }
    bool Search(int value)
    {
        node *cur = root;
        while (cur != NULL)
        {
            if (value > cur->value)
            {
                cur = cur->right;
            }
            else if (value < cur->value)
            {
                cur = cur->left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
    void Delete(int value)
    {
        node *cur = root;
        node *prv = NULL;
        while (cur != NULL)
        {
            if (value > cur->value)
            {
                prv = cur;
                cur = cur->right;
            }
            else if (value < cur->value)
            {
                prv = cur;
                cur = cur->left;
            }
            else
            {
                break;
            }
        }
        if (cur == NULL)
        {
            cout << "value is not present in BST\n";
            return;
        }
        // case 1 boths child are empty
        if (cur->left == NULL && cur->right == NULL)
        {
            if (prv->left!=NULL && prv->left->value == cur->value)
            {
                prv->left = NULL;
            }
            else
            {
                prv->right = NULL;
            }
            delete cur;
            return;
        }
        // case 2: cur has only one child
        if (cur->left == NULL && cur->right != NULL)
        {
            if (prv->left!=NULL && prv->left->value == cur->value)
            {
                prv->left = cur->right;
            }
            else
            {
                prv->right = cur->right;
            }
            delete cur;
            return;
        }
        if (cur->left != NULL && cur->right == NULL)
        {
            if (prv->left!=NULL && prv->left->value == cur->value)
            {
                prv->left = cur->left;
            }
            else
            {
                prv->right = cur->left;
            }
            delete cur;
            return;
        }
    }
};

int main()
{
    BST bst;
    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(8);

    // cout<<bst.Search(2)<<"\n";
    // cout<<bst.Search(8)<<"\n";
    //case 1
    bst.Delete(8);
    bst.BFS();
    cout<<"\n";
    // case 2
    bst.Delete(7);
    bst.BFS();
    return 0;
}