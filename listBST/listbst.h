#ifndef LISTBST
#define LISTBST
#include"node.h"
template<typename T>
enum traversal_type {pre_order,post_order,in_order};
class listBST
{

    public:
     listBST();
     listBST(const listBST<T> & tree_reference);//

     void preOrder(listBST<T>& tree_reference);//
     void postOrder(listBST<T>& tree_reference);//
     void inOrder(listBST<T>& tree_reference);//


    private:
     node<T>* root;
     traversal_type traversal;


};
template<typename T>
listBST<T>::listBST()
 {
    root=NULL;
    traversal=0;
 }
template<typename T>
listBST<T>:: listBST(const listBST<T> &tree_reference)
 {

 }
template<typename T,class Process>
void preOrder(node<T>*& ptr ,Process f)
{
    // 1. process the root
    // 2. process the nodes in left subtree
    // 3. process the nodes in right subtree
    if(root)
    {
        f(ptr);
        preOrder(ptr->childPtr(LEFT),f);
        preOrder(ptr->childPtr(RIGHT),f);

    }
}

template<typename T,class Process>
void postOrder(node<T>& tree_reference)
{
    // 1. process the nodes in the left subtree
    // 2. process the nodes in the right subtree
    // 3. Process the root
}

template<typename T,class Process>
void inOrder(node<T>& tree_reference)
{
    // 1. process the nodes in the left subtree
    // 2. Process the root
    // 3. process the nodes in the right subtree

}
//NOTES

// Parameters that are functions
// Micheal Main and Walter Savitch pg 508
//RULES
//1. parameters in the nested parameter must be a reference
//2.
//Form
//void apply(void f(int&), )
//OR
// template <class Process, ,>
//void apply(Process f,,)

//TRAVERSAL TYPES
/* pre-order
 * 1. process the root
 * 2. process the nodes in left subtree
 * 3. process the nodes in right subtree
 */
/* post-order
 * 1. process the nodes in the left subtree
 * 2. process the nodes in the right subtree
 * 3. Process the root
 */
/* in-order
 * 1. process the nodes in the left subtree
 * 2. Process the root
 * 3. process the nodes in the right subtree
 *
 */











#endif // LISTBST

