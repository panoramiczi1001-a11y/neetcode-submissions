/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode *p;
        ListNode *q;
        unordered_set<ListNode*> seen;
        p = head;
        //bool found = false;
        while (1)
        {
            if (p == NULL) break;
            /*
            auto it = find(seen.begin(),seen.end(),p);
            if (it != seen.end())
            {
                found = true;
                break;
            }
            seen.push_back(p);
            */
            auto it = seen.insert(p);
            if (!it.second) return true;
            p = p -> next;
        }
        return false;
    }
};
