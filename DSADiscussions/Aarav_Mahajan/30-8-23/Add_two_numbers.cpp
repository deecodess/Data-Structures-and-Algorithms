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
    void insertNode(ListNode *&ansHead, ListNode *&ansTail, int val)
    {

        ListNode *temp = new ListNode(val);

        if (ansHead == nullptr)
        {
            ansHead = temp;
            ansTail = temp;
        }
        else
        {

            ansTail->next = temp;
            ansTail = temp;
        }
    }

    ListNode *solve(ListNode *l1, ListNode *l2)
    {

        ListNode *ansHead = nullptr;
        ListNode *ansTail = nullptr;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {

            int value1 = 0;
            int value2 = 0;

            if (l1 != nullptr)
            {
                value1 = l1->val;
            }

            if (l2 != nullptr)
            {
                value2 = l2->val;
            }

            int sum = value1 + value2 + carry;

            int digit = sum % 10;

            carry = sum / 10;

            insertNode(ansHead, ansTail, digit);

            if (l1 != nullptr)
            {
                l1 = l1->next;
            }

            if (l2 != nullptr)
            {
                l2 = l2->next;
            }
        }

        return ansHead;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *ans = solve(l1, l2);

        return ans;
    }
};