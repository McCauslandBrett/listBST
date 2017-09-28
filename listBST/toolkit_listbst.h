#ifndef TOOLKIT_LISTBST
#define TOOLKIT_LISTBST
#include "node.h"
namespace ToolKit
{
using namespace std;
template<typename T>
 void insert_data(node<T>*& parent,const T& data);




template<typename T>
 void insert_data(node<T>*& parent,const T& data)
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
}
#endif // TOOLKIT_LISTBST

