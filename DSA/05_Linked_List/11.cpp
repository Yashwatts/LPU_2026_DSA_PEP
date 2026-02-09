// https://leetcode.com/problems/sort-list/
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* getMiddle(ListNode* head){
//         // slow and fast pointer approach to find the middle
//         ListNode* slow = head;
//         ListNode* fast = head->next;
//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         // slow now points to mid node
//         return slow;
//     }

//     ListNode* merge(ListNode* l1, ListNode* l2){
//         ListNode dummy(0);
//         ListNode* tail = &dummy;

//         while(l1 != NULL && l2 != NULL){
//             if(l1->val <= l2->val){
//                 tail->next = l1;
//                 l1 = l1->next;
//             }
//             else{
//                 tail->next = l2;
//                 l2 = l2->next;
//             }
//             tail = tail->next;
//         }
//         if(l1 != NULL) tail->next = l1;
//         if(l2 != NULL) tail->next = l2;

//         return dummy.next;
//     }

//     ListNode* sortList(ListNode* head) {
//         // base case
//         if(head == NULL || head->next == NULL) return head;

//         ListNode* mid = getMiddle(head);
//         ListNode* left = head;
//         ListNode* right = mid->next;

//         // Disconnecting the left half and the right half
//         mid->next = NULL;

//         ListNode* sortedLeft = sortList(left);
//         ListNode* sortedRight = sortList(right);

//         return merge(sortedLeft, sortedRight);
//     }
// };




// https://leetcode.com/problems/copy-list-with-random-pointer/description
// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
    
//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         // I have to clone nodes and insert them right after the original nodes
//         Node* curr = head;

//         while(curr != NULL){
//             Node* dummy = new Node(curr->val);
//             dummy->next = curr->next;
//             curr->next = dummy;
//             curr = dummy->next;
//         }

//         // Then we have to set the random pointer of the cloned nodes
//         curr = head;
//         while(curr != NULL){
//             if(curr->random != NULL){
//                 curr->next->random = curr->random->next;
//             }
//             curr = curr->next->next;
//         }

//         // Restore the original list and segregate the cloned list
//         Node* dummy = new Node(0);
//         Node* tail = dummy;

//         curr = head;
//         while(curr != NULL){
//             Node* copyNode = curr->next;
//             curr->next = copyNode->next;

//             tail->next = copyNode;
//             tail = tail->next;

//             curr = curr->next;
//         }
//         return dummy->next;
//     }
// };