#include <iostream>
#include <stdlib.h>
#include "avl.hpp"

using namespace std;

AvlTree::AvlTree()
{
    root = NULL;
}

Node *AvlTree::getRoot()
{
    return this->root;
}

void AvlTree::setRoot(Node *newRoot)
{
    this->root = newRoot;
}

void AvlTree::insert(string value)
{
    insert(root, value);
}

void AvlTree::insert(Node *treeNode, string value)
{
    if (!treeNode)
    {
        treeNode = new Node();
        treeNode->item = value;
        treeNode->height = 0;
        root = treeNode;
    }
    else
    {
        if (value < treeNode->item)
        {
            if (!treeNode->left)
            {
                Node *treeTemp = new Node();
                treeTemp->item = value;
                treeTemp->height = 0;
                treeNode->left = treeTemp;
            }
            else
                insert(treeNode->left, value);
                treeNode->height = getHeight(treeNode);
        }
        else
        {
            if (!treeNode->right)
            {
                Node *treeTemp = new Node();
                treeTemp->item = value;
                treeTemp->height = 0;
                treeNode->right = treeTemp;
            }
            else
                insert(treeNode->right, value);
                treeNode->height = getHeight(treeNode);
        }
    }
}

/* Calcula a altura da árvore a partir de um nó */
int AvlTree::getHeight(Node *current)
{
    if (current == NULL || (current->left == NULL && current->right == NULL))
        return 0;
    else
    {
        if (getHeight(current->left) > getHeight(current->right))
            return (1 + getHeight(current->left));
        else
            return (1 + getHeight(current->right));
    }
}

/* Imprime a arvore */
void AvlTree::printTree(Node *current)
{
    if (current != NULL)
    {
        cout << current->item << " " << current->height << endl;
        printTree(current->left);
        printTree(current->right);
    }
}

/* Testa se a arvore está balanceada */
bool AvlTree::isBalanced(Node *treeNode)
{
    int L, R;

    if(!treeNode->left && !treeNode->right) return 1;
    else {
        if(treeNode->left && !isBalanced(treeNode->left)) return 0;
        if(treeNode->right && !isBalanced(treeNode->right)) return 0;
    }

    if(treeNode->left) L = getHeight(treeNode->left);
    else L = -1;
    if(treeNode->right) R = getHeight(treeNode->right);
    else R = -1;

    if(L - R > 1 || L - R < -1) return 0;
    else return 1;
}
