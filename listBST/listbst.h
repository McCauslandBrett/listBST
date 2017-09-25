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
template<typename T>
void preOrder(listBST<T>& tree_reference)
{
    if(root)
}

template<typename T>
void postOrder(listBST<T>& tree_reference)
{

}

template<typename T>
void inOrder(listBST<T>& tree_reference)
{

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














#endif // LISTBST

