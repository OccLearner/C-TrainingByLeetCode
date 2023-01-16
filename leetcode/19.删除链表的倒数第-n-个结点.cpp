/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //利用另一个指针判断
        ListNode *Fast, *Slow, *Tmp, *TrueHead, *Prev, *Result;
        Slow = head;
        Tmp = Slow;
        //利用一个头结点
        TrueHead = new ListNode(-1, head);
        Prev = TrueHead;
        for (int i = 0; i < n; i++)
        {
            if (Tmp != NULL)
            {
                Fast = Tmp ->next;
                Tmp = Fast;
            }    
        }
        while(Fast != NULL)
        {   
            Prev = Prev -> next;
            Slow = Slow -> next;
            Fast = Fast -> next;
        }
        Prev -> next = Slow -> next;
        Result = TrueHead -> next;
        delete Slow;
        delete TrueHead;
        return Result;
        
    }
};
// @lc code=end

