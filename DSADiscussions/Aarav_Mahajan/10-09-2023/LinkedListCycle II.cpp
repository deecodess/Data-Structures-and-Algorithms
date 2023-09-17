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
    ListNode *checkCycle(ListNode *head)
    {

        // would create two pointers

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return slow;
            }
        }

        return nullptr;
    }
    ListNode *detectCycle(ListNode *head)
    {

        if (head == nullptr)
        {
            return nullptr;
        }

        // would be creating a intersectionPoint and create a new slow pointer pointing head initially...

        ListNode *intersectionPoint = checkCycle(head);
        ListNode *slow = head;

        // if no cycle is present in the list, toh seedha 'nullptr' return karna bhai :)
        if (intersectionPoint == nullptr)
        {
            return nullptr;
        }

        while (slow != intersectionPoint)
        {

            intersectionPoint = intersectionPoint->next;
            slow = slow->next;
        }

        return slow;
    }
};