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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result= new ListNode(0);
        ListNode* current = result; // 34an a create list gdeda a create node we a5li pointer y4awr 3aliha
        int carry=0;
    

    while (l1 || l2 || carry){
        int sum=carry;
    if(l1){
    
        sum+= l1->val;
        l1=   l1->next;
    }
    if(l2){
        sum+= l2->val;
        l2 = l2->next;
    }
   
    carry =sum/10 ; // 34an lw el sum aktr mn 9 hyb2a el ba2y 3obara 3an carry l el operation eli b3dha
    current->next = new ListNode(sum % 10);  // Store last digit of sum
    current=current->next;
    }
    return result->next;
    }
};
