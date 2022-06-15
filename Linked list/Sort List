class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head) return head;
        vector<int> arr;
        ListNode* cur = head;
        
        while(cur){
            arr.push_back(cur->val);
            cur = cur->next;
        }
        
        sort(arr.begin(), arr.end());
        
        cur = head;
        int i = 0;
        while(cur){
            cur->val = arr[i++];
            cur = cur->next;
        }
        
        return head;
    }
};
