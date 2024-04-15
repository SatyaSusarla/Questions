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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int length=0;
        while(temp->next!=NULL){
          length++;
          temp=temp->next;
        }
        ListNode* tempu=head;
        for(int i=0;i<length/2;i++){
            tempu=tempu->next;
        }
        if(length%2!=0)
        tempu=tempu->next;

        return tempu;
    }
};