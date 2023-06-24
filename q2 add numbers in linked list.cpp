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

ListNode* addNumbers(ListNode* head1, ListNode* head2) {
    int carry = 0;
    ListNode* itr1 = head1;
    ListNode* itr2 = head2;
    ListNode* prev = nullptr;

    while(itr1 && itr2) {
        int sum = itr1->val + itr2->val + carry;
        carry = sum / 10;
        itr1->val = sum % 10;
        prev = itr1;
        itr1 = itr1->next;
        itr2 = itr2->next;
    }

    if(itr2) {
        prev->next = itr2;
        itr1 = prev->next;
    }

    while(carry) {
        if(!itr1) {
            prev->next = new ListNode(1);
            carry = 0;
        }

        int sum = carry + itr1->val;
        carry = sum / 10;
        itr1->val = sum % 10;

        itr1 = itr1->next;
    }
    
    return head1;
}