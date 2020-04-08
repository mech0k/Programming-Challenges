#include <bits/stdc++.h>

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {};
};


ListNode* middleNode(ListNode* head){
    ListNode* ans = head;
    int count = 0;
    while(head != NULL){
        head = head->next;
        count++;
    }
    for(int i = 0; i < count / 2; i++){
        ans = ans->next;
    }
    return ans;
}

int main(){
    std::ios_base::sync_with_stdio(false);

    return 0;
}

