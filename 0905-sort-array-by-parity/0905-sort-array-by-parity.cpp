class Solution {
    typedef struct node{
        int val ;
        node* next ;
    } node;
    node* push_front(node* head,int val){
        if(head==nullptr){
            node* newNode = new node ;
            newNode->val = val ;
            newNode->next = nullptr ;
            head = newNode ;
            return head ;
        }
        node* newNode = new node ;
        newNode->val = val ;
        newNode->next = head ;
        head = newNode ;
        return head ;
    }
    node* push_back(node* head,int val){
         if(head==nullptr){
            node* newNode = new node ;
            newNode->val = val ;
            newNode->next = nullptr ;
            head = newNode ;
            return head ;
        }
        node* newNode = new node ;
        newNode->val = val ;
        newNode->next = nullptr ;
        node* temp = head ;
        while(temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode ;
        return head ;
    }
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v = {} ;
        node* head = nullptr ;
        for(auto in : nums){
            if(in%2==0) head = push_front(head,in);
            else head = push_back(head,in);
        }
        while(head!=nullptr){
            v.push_back(head->val);
            head=head->next;
        }
        return v ;
    }
};