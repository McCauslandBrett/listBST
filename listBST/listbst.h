#ifndef LISTBST
#define LISTBST
#include"node.h"
enum traversal_type {pre_order,post_order,in_order};
template<typename T>
class listBST
{

    public:
     listBST();
     listBST(const listBST<T> & tree_reference);//
     void insert(const T& data);


     // Traversals
     void preOrder(listBST<T>& tree_reference);//
     void postOrder(listBST<T>& tree_reference);//
     void inOrder(listBST<T>& tree_reference);//
    //  Member functions
    void printDebug();
     // Traversal Process
  //  void print(const T& item);//
    // NON Member Functions
    void print_debug( node<T>* treeroot,unsigned int depth);
    void insert_data(node<T>*& parent,const T& data);
    private:
     node<T>* root;
     traversal_type traversal;
     // NON Member Functions



};
template<typename T>
listBST<T>::listBST()
 {
    root=NULL;
    traversal=pre_order;
 }
template<typename T>
listBST<T>:: listBST(const listBST<T> &tree_reference)
 {

 }
template<typename T,class Process>
void preOrder(node<T>*& root ,Process f,const T& data)
{

}

template<typename T,class Process>
void postOrder(node<T>& tree_reference,Process f)
{
    // 1. process the nodes in the left subtree
    // 2. process the nodes in the right subtree
    // 3. Process the root
}

template<typename T,class Process>
void inOrder(node<T>& tree_reference,Process f)
{
    // 1. process the nodes in the left subtree
    // 2. Process the root
    // 3. process the nodes in the right subtree

}

template<typename T>
 void listBST<T>::insert_data(node<T>*& parent,const T& data)
 {
     //cout<<"inside insert helper"<<endl;
    if(!parent)
        parent=new node<T>(data);
    else{
        if(*parent>data)
            insert_data(parent->childPtr(LEFT),data);
        else
            insert_data(parent->childPtr(RIGHT),data);
    }

 }
 template<typename T>
 void  listBST<T>::printDebug()
 {
     print_debug(root,0);
 }
  template<typename T>
 void listBST<T>::print_debug( node<T>* treeroot,unsigned int depth)
 {
     node<T>* walker=treeroot;
     cout<<setw(4*depth)<<""; //Indentation
     if(walker==NULL)
         cout<<"[empty]"<<endl;

     else if(walker->isleaf()){
         cout<<walker->getData();
         cout<<"[leaf]"<<endl;
     }
     else//non-leaf
     {
        cout<<treeroot->getData()<<endl;
         print_debug(treeroot->childPtr(RIGHT),(depth+1));
         print_debug(treeroot->childPtr(LEFT),(depth+1));
     }
 }
template<typename T>
void listBST<T>:: insert(const T& data)
{
    insert_data(root,data);
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

