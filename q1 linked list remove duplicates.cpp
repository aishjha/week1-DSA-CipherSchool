#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int el) {
        val = val;
        next = nullptr;
    }
};

ListNode* removeDuplicates(ListNode* head) {
    ListNode* dummyHead = new ListNode(0);
    ListNode* itr = head;
    ListNode* itr2 = dummyHead;

    while(itr) {
        if(itr->val != itr2->val || itr == head) {
            itr2->next = itr;
            itr2 = itr2->next;
        }

        itr = itr->next;
    } 

    return dummyHead->next;
}