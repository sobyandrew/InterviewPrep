#include <iostream>
using namespace std;

class LinkedListSingle{
public:
  int data;
  LinkedListSingle * Next = NULL;

  LinkedListSingle();
  LinkedListSingle(int d);//{
  //   data = d;
  // }

  void addToEnd(int dataToAdd);//{
  //   LinkedListSingle * EndLink = new LinkedListSingle(dataToAdd);
  //
  //   LinkedListSingle node = this;
  //   while(node.Next != NULL){
  //     node=node.next;
  //   }
  //   node.next = EndLink;
  //
  // }

  void printLL();//{
  //   LinkedListSingle node = this;
  //   while(node != NULL){
  //     cout << node.data;
  //     node=node.next;
  //   }
  // }


};
