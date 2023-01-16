/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
    ListNode *detectCycle(ListNode *head) {
      ListNode *p, *q;
      p = head;
      q = head;
      while (p != NULL and q != NULL)
      {
        q = q -> next;
        if (q == NULL)
        {
          return NULL;
        }
        q = q -> next;
        p = p -> next;
        if (p == NULL or q == NULL)
        {
          return NULL;
        }
      
        if (p == q)
        {
          break;
        }
        
      }
      if (p == NULL or q == NULL)
      {
        return NULL;
      }
      
      p = head;
      while (p != q)
      {
        p = p -> next;
        q = q -> next;
      }
      return p;
            
    }
};
// @lc code=end

