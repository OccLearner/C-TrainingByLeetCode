/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m = 0, n = 0;
        int NumSub;
        ListNode *p = headA, *q = headB;
        while (p != NULL)
        {
            p = p -> next;
            m++;    
        }

        while (q != NULL)   
        {
            q = q -> next;
            n++;
        }

        p = headA;
        q = headB;

        if (m > n)
        {
            NumSub = m - n;
            for (int i = 0; i < NumSub; i++)
            {
                p = p -> next;
            }   
            
        }
        else
        {
            NumSub = n - m;
            for (int i = 0; i < NumSub; i++)
            {
                q = q -> next;
            }
            
        }

        while (p != NULL && q != NULL)
        {
            if (p == q)
            {
                return p;
            }
            p = p -> next;
            q = q -> next;
            
        }  
        return NULL; 
        
            
    }
};
// @lc code=end

