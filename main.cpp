#include <iostream>

using namespace std;

class Binary_Search_tree
{
private:
    struct node
    {
        int data;
        node *right,*left;
    };
    node * root;
public:
    Binary_Search_tree()
    {
        root=NULL;
    }
    bool is_Empty()
    {
        return (root=NULL);
    }
    void insert_node(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->right=newnode->left=NULL;
        if(is_Empty())
        {
            root = newnode;
        }
        else
        {
            node * ptr = root;
            node * pre;
            while(ptr!=NULL)
            {
                pre = ptr;
                if(value >= ptr->data)
                {
                    ptr = ptr->right;
                }
                else
                {
                    ptr = ptr->left;
                }
            }
            if(value >= pre->data)
            {
                pre->right = newnode;
            }
            else
            {
                pre->left = newnode;
            }
        }
    }

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
