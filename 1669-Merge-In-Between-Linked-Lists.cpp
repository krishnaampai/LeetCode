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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tail = list2;
        while (tail->next!=NULL){
            tail = tail->next;
        }
        int length =1;
        ListNode* countptr = list1;
        while (countptr->next!=NULL){
            countptr = countptr->next;
            length++;
        }

        int i =0;
        ListNode* temp2 = list1;
        while (temp2!=NULL && i < length){
            if (i==b){
                tail->next= temp2->next;
            }
            temp2 = temp2->next;
            i++;    
        }

         i =0;
        ListNode* temp = list1;
        while (temp!=NULL && i < length){
            if (i==a-1){
                temp->next= list2;
                
            }
            temp = temp->next;
            i++;    
        }
        return list1;
    }
};