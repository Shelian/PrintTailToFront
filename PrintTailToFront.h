#program once

struct ListNode
{
	int _data;
	ListNode* _next;
};

void PrintTailToFront(ListNode* pHead)
{
	if (pHead == NULL)
		return;

	PrintTailToFront(pHead->_next);
	cout << pHead->_data << "->";
}