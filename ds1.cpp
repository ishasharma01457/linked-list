#include <iostream>
#include <conio.h>
using namespace std;

class Node{
public:
  int data;
  Node* link;
};

int main() {
  Node* head;
  Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;


  one = new Node();
  two = new Node();
  three = new Node();


  one->data = 0 ;
  two->data = 4 ;
  three->data = 6 ;


  one->link = two;
  two->link= three;
  three->link = NULL;


  head = one ;
  while (head != NULL) {
    cout << head->data;
    head = head->link;
  }
}
