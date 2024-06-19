#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int id;
    int value;
    node *left;
    node *right;
    node *parent;
};
class BinaryTree
{
public:
    node *root;

    BinaryTree()
    {
        root = NULL;
    }
    node *CreateNewNode(int id, int value)
    {
        node *newnode = new node;
        newnode->id = id;
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }
    void Insertion(int id, int value)
    {
        node *newnode = CreateNewNode(id, value);
        if (root == NULL)
        {
            root = newnode;
            return;
        }
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();

            if (a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left = newnode;
                newnode->parent = a;
                return;
            }

            if (a->right != NULL)
            {
                q.push(a->right);
            }
            else
            {
                a->right = newnode;
                newnode->parent = a;
                return;
            }
        }
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
                l = a->left->id;
                q.push(a->left);
            }
            if (a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }
            if (a->parent != NULL)
            {
                p = a->parent->id;
            }
            cout << "Node id= " << a->id << " Left child= " << l;
            cout << " Right child= " << r << " Parent =" << p << "\n";
        }
    }
    void DFS(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        DFS(a->left);
        DFS(a->right);
    }
    void Inorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        Inorder(a->left);
        cout << a->id << " ";
        Inorder(a->right);
    }
    void Preorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        Preorder(a->left);
        Preorder(a->right);
    }
    void Postorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        Postorder(a->left);
        Postorder(a->right);
        cout << a->id << " ";
    }
    void Search(node *a, int value)
    {
        if (a == NULL)
        {
            return;
        }
        if (a->value == value)
        {
            cout << a->id << " ";
        }
        Search(a->left, value);
        Search(a->right, value);
    }
};

int main()
{
    BinaryTree bt;
    bt.Insertion(0, 5);
    bt.Insertion(1, 10);
    bt.Insertion(2, 10);
    bt.Insertion(3, 9);
    bt.Insertion(4, 8);
    bt.Insertion(5, 5);
    bt.Insertion(6, 7);
    bt.BFS();
    cout<<"\n";
    bt.Search(bt.root,5);
    return 0;
}