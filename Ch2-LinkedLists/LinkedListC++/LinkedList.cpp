#include "LinkedList.h"

LinkedListSingle::LinkedListSingle(){
 //data = -12345678; // hardcoded for a test
}
void LinkedListSingle::addToEnd(int dataToAdd){
  LinkedListSingle * EndLink = new LinkedListSingle(dataToAdd);

  LinkedListSingle *node = this;
  while(node->Next != NULL){
    node=node->Next;
  }
  node->Next = EndLink;

}

void LinkedListSingle::printLL(){
  LinkedListSingle *node = this;
  while(node != NULL){
    if(node->data != -12345678)
      cout << node->data<< endl;
    node=node->Next;
  }
}

LinkedListSingle::LinkedListSingle(int d){
  data = d;
}
