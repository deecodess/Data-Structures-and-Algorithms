#include <iostream>
#include <stack>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {

        // if head is NULL or there is only one element, return head :)
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        // create two lists
        ListNode *oddListHead = new ListNode(0);
        ListNode *oddCurr = oddListHead;

        ListNode *evenListHead = new ListNode(0);
        ListNode *evenCurr = evenListHead;

        ListNode *curr = head;

        // one-base indexing
        int index = 1;

        while (curr != nullptr)
        {

            ListNode *newNode = new ListNode(curr->val);

            // odd
            if (index & 1)
            {

                oddCurr->next = newNode;
                oddCurr = newNode;
            }
            // even
            else
            {

                evenCurr->next = newNode;
                evenCurr = newNode;
            }

            index++;
            curr = curr->next;
        }

        // joining the two lists
        // point the oddCurr to evenListHead

        oddCurr->next = evenListHead->next;
        evenCurr->next = nullptr;

        ListNode *finalHead = oddListHead->next;

        delete (oddListHead);
        delete (evenListHead);

        return finalHead;
    }
};