#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode* random;

    ListNode(int el) {
        val = val;
        next = nullptr;
        random = nullptr;
    }
};

ListNode* copyLinkedList(ListNode* head) {
    ListNode* itr = head;

    //creating new nodes
    while(itr) {
        ListNode* newNode = new ListNode(itr->val);
        newNode->next = itr->next;
        itr->next = newNode;

        itr = newNode->next; 
    }

    //linking random pointers
    itr = head;
    while(itr) {
        itr->next->random = itr->random? itr->random->next: nullptr;
        itr = itr->next->next;
    }

    //removing the new linked list
    itr = head;
    ListNode* ans = head->next;
    while(itr) {
        ListNode* copy = itr->next;
        itr->next = copy->next;
        copy->next = itr->next->next;
        itr = itr->next;
    }

    return ans;
}