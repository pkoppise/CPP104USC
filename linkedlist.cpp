#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
	int val;
	Item* next;
};

void append(Item*& head, int v)
{
    Item* newptr= new Item;
    newptr->val= v;
    newptr->next = NULL;

    if(head == NULL)
    {
        head = newptr;
    }
    else
    {
    	  Item* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;   
        }
        temp->next = newptr;
    }
}

void print(Item* ptr)
{
    if(ptr == NULL)
    {
      return;
    }
    else
    {
      print(ptr->next);
      cout << ptr->val << endl;
    }
}


int main()
{
  Item* head = NULL;
	append(head,3);
	append(head,4);
  append(head,5);
  print(head);
	return 0;
}



