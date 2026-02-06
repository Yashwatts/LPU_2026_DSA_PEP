// https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
// /*
// structure of the node of the list is as
// struct Node
// {
//     int data;
//     struct Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     // Should return head of the modified linked list
//     Node* sortedInsert(Node* head, int key) {
//         // Code here
//         Node* node = new Node(key);
//         Node* temp = head;
//         if(head == NULL || key <= head->data){
//                 node->next = head;
//                 return node;
//             }
//         while(temp->next!=NULL){
//             if(temp->data <= key && temp->next->data >= key){
//                 node->next = temp->next;
//                 temp->next = node;
//                 return head;
//             }
//             temp=temp->next;
//         }
//                 temp->next = node;
//                 node->next = NULL;
//         return head;
        
        
//         // OR
        
        
//         // Node* newNode = new Node(key);
        
//         // // 1-> Insert at beginning
//         // if(head == NULL || key < head->data){
//         //     newNode->next = head;
//         //     return newNode;
//         // }
        
//         // // 2-> Insert in middle
//         // Node* prev = NULL;
//         // Node* curr = head;
        
//         // while(curr != NULL && curr->data <= key){
//         //     prev = curr;
//         //     curr = curr->next;
//         // }
//         // prev->next = newNode;
//         // newNode->next = curr;
        
//         // return head;
//     }
// };





// https://leetcode.com/problems/intersection-of-two-linked-lists/description/
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     // int findLength(ListNode* head){
//     //     int length = 0;
//     //     ListNode* temp = head;
//     //     while(temp!=NULL){
//     //         length++;
//     //         temp = temp->next;
//     //     }
//     //     return length;
//     // }
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//          ListNode* temp1 = headA;
//          ListNode* temp2 = headB;

//          while(temp1 != temp2){
//             if(temp1 == NULL) temp1 = headB;
//             else temp1=temp1->next;
//             if(temp2 == NULL) temp2 = headA;
//             else temp2 = temp2->next;

//          }
//          return temp1;


//         // OR


//     //     int lenA = findLength(headA);
//     //     int lenB = findLength(headB);

//     //     ListNode* tempA = headA;
//     //     ListNode* tempB = headB;

//     //     int diffInLength = abs(lenA - lenB);

//     //     if(lenB > lenA){
//     //         while(diffInLength--){
//     //             tempB = tempB->next;
//     //         }
//     //     }
//     //     else{
//     //         while(diffInLength--){
//     //             tempA = tempA->next;
//     //         }
//     //     }
//     //     while(tempA != tempB){
//     //         tempA = tempA->next;
//     //         tempB = tempB->next;
//     //     }
//     //     return tempA;
//     }
// };





// https://leetcode.com/problems/linked-list-cycle/description/
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         // Floyd Loop Detection Algorithm

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast) return true;
//         }
//         return false;
//     }
// };





// https://leetcode.com/problems/linked-list-cycle-ii/description/
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast){
//                 slow = head;
//             while(slow != fast){
//             slow = slow->next;
//             fast = fast->next;
//         }
//         return fast;
//             }
//         }
//         return NULL;
//     }
// };




