#include "Tree.h"

int main()
{
    int array[9] = {5,3,9,10,4,7,1,8,6};
    adrnode root = new node;
    adrnode p;
    for(int i=0;i<9;i++){
        p = newnode_1301213460(array[i]);
        insertnode_1301213460(root,p);
    }
    cout<<endl;cout<<"==================================="<<endl;

    for(int i=0;i<9;i++){
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Pre Order      :";
    printPreorder_1301213460(root);cout<<endl;cout<<endl;
    cout << "Descendent of Node " << "9   :";
    printdescendant_1301213460(root,9);cout<<endl;
    cout << "Sum of BST Info        : "
    << sumNode_1301213460(root) << endl;
    cout << "Number of Leaves       : "
    << countLeaves_1301213460(root) << endl;
    cout << "Height of Tree         : "
    << heightTree_1301213460(root) << endl;
    cout<<endl;cout<<"==================================="<<endl;
    return 0;

}
