//Solutions for LeetCode 02. Add Two Numbers

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
void printList(ListNode* n)
{
	while (n != NULL)
	{
		cout << "[" << n->Value << "] -> ";
		n = n->Next;
	}

	cout << "NULL";
}

int main()
{
    ListNode* l1 = new ListNode();
    ListNode* l2 = new ListNode();
    ListNode* l3 = new ListNode();

    l1->val = 2;
    l1->next = l2;

    l2->val = 4;
    l2->next = l3;

    l3->val = 3;
    l3->next = NULL;

    printList(l1);

}
