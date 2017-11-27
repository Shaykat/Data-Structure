#include<iostream>
using namespace std;

class Treenode
{
    Treenode *leftchild;
    Treenode *rightchild;
    float data;

    public:

    Treenode *make_tree(Treenode *root,float iteam)
    {
        Treenode *np;
        if(root == NULL)
        {
           np = new Treenode;
           np->data = iteam;
           np->leftchild = NULL;
           np->rightchild = NULL;
        }
        return np;
    }

    Treenode *insert(Treenode *root,float iteam)
    {
        if(root == NULL)
        {
            root = make_tree(root,iteam);
        }
        else if(iteam < root->data)
        {
            root->leftchild = insert(root->leftchild,iteam);
        }
         else if(iteam > root->data)
        {
            root->rightchild = insert(root->rightchild,iteam);
        }
        return root;
    }

    void Inorder(Treenode *root)
    {
        if(root != NULL)
        {
            Inorder(root->leftchild);
            cout << root->data << " ";
            Inorder(root->rightchild);
        }
    }

    void Postorder(Treenode *root)
    {
        if(root != NULL)
        {
            Postorder(root->leftchild);
            Postorder(root->rightchild);
            cout << root->data << " ";

        }
    }

    Treenode *Search(Treenode *root,float iteam)
    {
        while(root != NULL)
        {
            if(root->data == iteam)
            break;

            if(iteam > root->data){
                root = root->rightchild;
            }
            else {
                root = root->leftchild;
            }
        }
        if(root->data == iteam){
            cout << iteam << " is found" << endl;
        }
        else {
            cout << iteam << " is not found" << endl;
        }
    }
};

int main()
{
    Treenode Tree;
    Treenode *rootptr = NULL;
    int n,i;
    float iteam;

    //build a tree
    cout << "Enter how many nodes you want to add: ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "Enter Iteam: ";
        cin >> iteam;
        rootptr = Tree.insert(rootptr,iteam);
    }

    //Inorder Print
    cout << "\nInorder print of The Tree: ";
    Tree.Inorder(rootptr);

    //Postorder print
    cout << "\n\nPostorder Print of The Tree: ";
    Tree.Postorder(rootptr);

    //search
    cout << "\n\nEnter a value to search: ";
    cin >> iteam;
    Tree.Search(rootptr,iteam);

}
