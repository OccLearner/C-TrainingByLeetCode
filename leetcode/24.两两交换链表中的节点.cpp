/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
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
    ListNode* swapPairs(ListNode* head) {
        ListNode *Current, *Next, *Prev, *tmp;
        //将其作为头结点使用
        ListNode *p = new ListNode(-1, head);
        Prev = p;
        Current = head;
        if (Current != NULL and Current -> next != NULL)
        {
            head = Current -> next;
        }
        
        while(Current != NULL and Current -> next != NULL)
        {
            Next = Current -> next;
            Current -> next = Next -> next;
            Next -> next = Current;

            //交换
            tmp = Current;
            Current = Next;
            Next = tmp;

            Prev -> next = Current;

            Current = Next -> next; 
            Prev = Next;
        }
        delete p;
        return head;
    }
};
// @lc code=end

