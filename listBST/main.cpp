#include <iostream>
//#include "node.h"
#include"listbst.h"
using namespace std;
void nodeoperatorsDriver();
void nodeincrementersDriver();
void listBSTDriver();
int main()
{
    system("clear");
    //nodeoperatorsDriver();
    //nodeincrementersDriver();
    listBSTDriver();
    cout<<endl;
    return 0;
}
void nodeoperatorsDriver()
{
     cout << "nodeDriver operators" << endl;
    node<int> r;
    node<int> t;
    t=r;
    node<int> l(3,2);
    cout<<r;
    r=l;
    cout<<l<<endl<<endl;

    cout<<"r ="<<r<<endl;
    cout<<"l = "<<l<<endl;
    cout<<"t= "<<t<<endl<<endl;

    if(r==r)
        cout<< "r==r"<<endl;
    if(l>t)
        cout<<"(l>t)"<<endl;
    if(r>=r)
        cout<<"(r>=r)"<<endl;
    if(t!=r)
          cout<<"(t!=r)"<<endl;




}
void nodeincrementersDriver()
{
     cout << "nodeincrementersDriver" << endl;
    node<int> r;
    node<int> t;
    t=r;
    node<int> l(3,2);
    cout<<r;
    r=l;
    cout<<l<<endl<<endl;

    cout<<"r ="<<r<<endl;
    cout<<"l = "<<l<<endl;
    cout<<"t= "<<t<<endl<<endl;

    cout<< "r++"<<endl;
    cout<<r++<<endl;

    cout<< "++r"<<endl;
    cout<<++r<<endl;
}
void listBSTDriver()
{
    cout << "listBSTDriver" << endl;
   listBST<int> r;
   r.insert(4);
   r.insert(5);
   r.insert(6);
  r.printDebug();

}

//NOTES
//this pointer is an implicit parameter to all member functions.
//Therefore, inside a member function,
//this may be used to refer to the invoking object.
//Friend functions do not have a this pointer, because friends are not members of a class.
//Only member functions have a this pointer.
