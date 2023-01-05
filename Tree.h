#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>

using namespace std;

typedef int infotype;
typedef struct node *adrnode;
struct node{
    infotype nilai = NULL;
    adrnode left = NULL;
    adrnode right = NULL;
};

adrnode newnode_1301213460(infotype x);
adrnode findnode_1301213460(adrnode root, infotype x);
void insertnode_1301213460(adrnode &root,adrnode p);
void printPreorder_1301213460(adrnode root);
void printdescendant_1301213460(adrnode root, infotype x);
int sumNode_1301213460(adrnode root);
int countLeaves_1301213460(adrnode root);
int heightTree_1301213460(adrnode root);

#endif // TREE_H_INCLUDED
