#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){
  LinkedListSingle * head = new LinkedListSingle(-1); // two forms to declare ll

  head->addToEnd(2);
  head->printLL();

  LinkedListSingle head2; //ultimately this form uses a default constructor either method can be used if the user is not calling the function themselves
  

  head2.addToEnd(123);
  head2.printLL();
  return 0;
}
