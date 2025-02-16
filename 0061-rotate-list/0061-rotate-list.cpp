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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0){
            return head;
        }
        ListNode*tail=head;
        int len=1;
        while(tail->next!=NULL){
            tail=tail->next;
            len++;
        }
       
        if(k%len==0){
            return head;
        }

        k=k%len;

        tail->next=head;

        ListNode*temp=head;

        k=len-k;
        int count=1;
        while(temp!=NULL){
            if(count==k){
                break;
            }
            temp=temp->next;
            count++;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};