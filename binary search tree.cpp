#include<iostream>
using namespace std;

class treenode
{
    float data;
    treenode *leftptr;
    treenode *rightptr;

    public:
    treenode *p,*root;

    treenode *make_tree(float v)
    {
        treenode *np;
        np = new treenode;
        np->data = v;
        np->leftptr = NULL;
        np->rightptr = NULL;

        return np;
    }

    treenode *insert(treenode *nptr,float iteam)
    {
        if(nptr == NULL)
        {
            nptr = make_tree(iteam);
        }
        else if(iteam < nptr->data)
        {
            nptr->leftptr = insert(nptr->leftptr,iteam);
        }
        else if(iteam > nptr->data)
        {
             nptr->rightptr = insert(nptr->rightptr,iteam);
        }

        return nptr;
    }
};

int main()
{
    treenode tree;
    float iteam;
    treenode *rootptr;
    rootptr = NULL;
    cin >> iteam;
    rootptr = tree.insert(rootptr,iteam);

    return 0;
}
