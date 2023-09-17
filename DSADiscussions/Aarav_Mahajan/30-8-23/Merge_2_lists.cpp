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
    ListNode *merge(ListNode *list1, ListNode *list2)
    {

        // if only one element in list1, merge with the list2
        if (list1->next == nullptr)
        {
            list1->next = list2;
            return list1;
        }

        ListNode *curr1 = list1;
        ListNode *forward1 = curr1->next;
        ListNode *curr2 = list2;
        ListNode *forward2 = curr2->next;

        while (curr1 != nullptr && curr2 != nullptr)
        {

            if (curr1->val <= curr2->val && curr2->val <= forward1->val)
            {

                curr1->next = curr2;

                forward2 = curr2->next;

                curr2->next = forward1;

                curr1 = curr2;

                curr2 = forward2;
            }
            else
            {

                curr1 = forward1;
                forward1 = forward1->next;

                if (forward1 == nullptr)
                {
                    curr1->next = curr2;
                    return list1;
                }
            }
        }

        return list1;
    }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (list1 == nullptr)
        {
            return list2;
        }

        if (list2 == nullptr)
        {
            return list1;
        }

        ListNode *head = nullptr;

        if (list1->val <= list2->val)
        {
            return head = merge(list1, list2);
        }
        else
        {
            return head = merge(list2, list1);
        }
    }
};