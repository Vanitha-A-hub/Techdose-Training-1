/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *ans = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *result = ans;
    if(!list1 && !list2)
        return list1;
    while(list1 && list2)
    {
        if(list1->val < list2->val)
        {
            result->next = list1;
            list1 = list1->next;
        }
        else
        {
            result->next = list2;
            list2 = list2->next;
        }
        result = result->next;
    }
    if(list1)
    {
        result->next = list1;
    }
    if(list2)
    {
        result->next = list2;
    }
    return ans->next;
}
