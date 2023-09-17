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
    ListNode *reverseKGroup(ListNode *head, int k)
    {

        ListNode *currptr = head;

        // keep checking that nodes left out >= k, otherwise return head
        
        for (int i = 0; i < k; i++)
        {

            if (currptr == nullptr)
            {
                return head;
            }

            currptr = currptr->next;
        }

        // reversing logic

        ListNode *curr = head;
        ListNode *prev = nullptr;
        ListNode *forward = nullptr;

        for (int i = 0; i < k; i++)
        {

            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        // call the reversal for remaining nodes

        if (forward != nullptr)
        {

            head->next = reverseKGroup(forward, k);
        }

        return prev;
    }
};