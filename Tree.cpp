#include "Tree.h"

adrnode newnode_1301213460(infotype x){
    adrnode Node = new node;
    Node->nilai = x;
    return Node;
}
adrnode findnode_1301213460(adrnode root, infotype x){
    adrnode q = root;
    if(q!=NULL){
        if(q->nilai!=NULL){
            if(q->nilai!=x){
                if(x>q->nilai){
                    q = q->right;
                }else{
                    q = q->left;
                }
                return findnode_1301213460(q,x);
            }else{
                return q;
            }
        }else{
            return q;
        }
    }else{
        return q;
    }


}
void insertnode_1301213460(adrnode &root,adrnode p){
    if(root!=NULL){
        if(root->nilai!=NULL){
            cout << "-2";
            if(findnode_1301213460(root,p->nilai)==NULL){
                cout << "-3";
                if(p->nilai>root->nilai){
                    cout << "-4";
                    insertnode_1301213460(root->right,p);
                }else{
                    cout << "-5";
                    insertnode_1301213460(root->left,p);
                }
            }else{
                cout << "duplicate\n";
            }
        }else{
            cout << "-1\n";
            root->nilai = p->nilai;
            cout << root->nilai << endl;
            cout << findnode_1301213460(root,p->nilai) << endl;
        }
    }else{
        cout << "-1\n";
        root = p;
        cout << "nilai : " << root->nilai << endl;
        cout << "alamat : " << root << endl;
    }

}
void printPreorder_1301213460(adrnode root){
    if(root!=NULL){
        if(root->nilai!=NULL){
            cout << " " << root->nilai;
            if(root->left!=NULL){
                printPreorder_1301213460(root->left);
            }
            if(root->right!=NULL){
                printPreorder_1301213460(root->right);
            }
        }
    }else{
        cout << "kosong\n";
    }
}
void printdescendant_1301213460(adrnode root, infotype x){
    root = findnode_1301213460(root,x);
    if(root!=NULL){
        if(root->nilai!=NULL){
            if(root->left!=NULL){
                printPreorder_1301213460(root->left);
            }
            if(root->right!=NULL){
                printPreorder_1301213460(root->right);
            }
        }
    }else{
        cout << "kosong\n";
    }
}
int sumNode_1301213460(adrnode root){
    int sum = root->nilai;
    if(root!=NULL){
        if(root->nilai!=NULL){
            if(root->left!=NULL){
                sum = sum + sumNode_1301213460(root->left);
            }
            if(root->right!=NULL){
                sum = sum + sumNode_1301213460(root->right);
            }
            return sum;
        }else{
            return sum;
        }
    }else{
        return sum;
    }
}
int countLeaves_1301213460(adrnode root){
    if(root!=NULL){
        if(root->right==NULL && root->left==NULL){
            return 1;
        }else{
            return countLeaves_1301213460(root->left) + countLeaves_1301213460(root->right);
        }
    }else{
        return 0;
    }
}
int heightTree_1301213460(adrnode root){
    if(root!=NULL){
        if(root->right==NULL && root->left==NULL){
            return 0;
        }else{
            if(heightTree_1301213460(root->left)>heightTree_1301213460(root->right)){
                return 1 + heightTree_1301213460(root->left);
            }else{
                return 1 + heightTree_1301213460(root->right);
            }
        }
    }else{
        return 0;
    }
}
