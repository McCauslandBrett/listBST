#include <iostream>
#include "node.h"
using namespace std;
void nodeDriver();
int main()
{
    system("clear");
    nodeDriver();
    cout<<endl;
    return 0;
}
void nodeDriver()
{
     cout << "nodeDriver" << endl;
    node<int> r;
    node<int> l(3,2);
    cout<<r;
    r=l;
    cout<<l;


}
//NOTES
//this pointer is an implicit parameter to all member functions.
//Therefore, inside a member function,
//this may be used to refer to the invoking object.
//Friend functions do not have a this pointer, because friends are not members of a class.
//Only member functions have a this pointer.
