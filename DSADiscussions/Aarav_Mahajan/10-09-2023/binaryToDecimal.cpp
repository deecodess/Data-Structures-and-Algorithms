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
    int getDecimalValue(ListNode *head)
    {

        //would be adding the nodes into the stack
        // and apply the formula of eg: 101 ==> 1 * 2 ^ 2 + 0 * 2 ^ 1 + 1 * 2 ^ 0
        ListNode *curr = head;

        stack<int> binaryNumber;

        while (curr != nullptr)
        {
            binaryNumber.push(curr->val);
            curr = curr->next;
        }

        // convert the binary number into decimal number

        int decimalNumber;

        int i = 0;

        while (!binaryNumber.empty())
        {

            decimalNumber = binaryNumber.top() * pow(2, i) + decimalNumber;

            i++;

            binaryNumber.pop();
        }

        return decimalNumber;
    }
};