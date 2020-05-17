#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode * next) : val(x),
    next (next) {}
};

// try constant space
ListNode * oddEvenList(ListNode * head){
    if(head == nullptr || head->next == nullptr) return head;
    ListNode * odd = head;
    ListNode * odd_begin = odd;
    ListNode * even = head->next;
    ListNode * even_begin = even;
    ListNode * current = head->next;
    int i = 1;
    while(current != nullptr && current->next != nullptr){
        if(i){
            odd->next = current->next;
            odd = odd->next;
            i = 0;
        }else{
            even->next = current->next;
            even = even->next;
            i = 1;
        }
        current = current->next;
    }
    odd->next = even_begin;
    return odd_begin;
}

void printList(ListNode * root){
    if(root == nullptr) {
        cout << " null" << endl;
        return;
    }
    cout << root->val << " -> ";
    printList(root->next);
}

int main(){
    std::ios_base::sync_with_stdio(false);
    ListNode * root = new ListNode(1);
    ListNode * n2 = new ListNode(2); 
    root->next = n2;
    ListNode * n3 = new ListNode(3); 
    n2->next = n3;
    ListNode * n4 = new ListNode(4); 
    n3->next = n4;
    ListNode * n5 = new ListNode(5); 
    n4->next = n5;
    ListNode * n6 = new ListNode(6); 
    n5->next = n6;
    ListNode * n7 = new ListNode(7); 
    n6->next = n7;
    ListNode * n8 = new ListNode(8); 
    n7->next = n8;

    printList(oddEvenList(root));

    return 0;
}

