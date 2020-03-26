#include <vector>
using namespace std;

class LinkedList {
  public:
    int value;
    LinkedList* next;

    LinkedList(int value);
    void addMany(vector<int> values);
    vector<int> getNodesInArray();
};

void removeKthNodeFromEnd(LinkedList* head, int k) {
  // Write your code here.
	int counter  = 1;
	LinkedList* first = head;
	LinkedList* second = head;
	while(counter <=k )
	{
		second = second->next;
		counter++;
	}
	if(second == NULL)
	{
		head->value = head->next->value;
		head->next = head->next->next;
		return;
	}
	
	while(second->next != NULL)
	{
		second = second->next;
		first = first->next;
	}
	first->next = first->next->next;
}
