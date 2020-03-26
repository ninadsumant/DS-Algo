#include <vector>
using namespace std;

//time O(N) | space O(1)

class LinkedList {
  public:
    int value;
    LinkedList* next;

    LinkedList(int value);
    void addMany(vector<int> values);
    LinkedList* getNthNode(int n);
};

LinkedList* findLoop(LinkedList* head) {
  // Write your code here.
	LinkedList* first = head->next;
	LinkedList* second = head->next->next;
	
	while(first != second)
	{
		first = first->next;
		second = second->next->next;
	}
	first = head;
	
	while(first != second)
	{
		first = first->next;
		second = second->next;
	}
	return first;
}
