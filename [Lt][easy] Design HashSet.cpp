class Node {
    public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = NULL;
    }
};


class MyHashSet {
public:
    Node* head;
    Node* tail;

    MyHashSet() {
    head = NULL;
    tail = NULL;      
    }
    
    void add(int key) {
        if(head == NULL) {
            head = new Node(key);
            tail = head;
        }
        else if(contains(key)) return;
        else {
            tail->next = new Node(key);
            tail = tail->next;
        }
    }
    
    void remove(int key) {
        Node *curr = head, *prev = nullptr;
        while(curr) {
            if(curr -> val == key) break;
            prev = curr;
            curr = curr -> next;
        }
        if(!curr) return;
        if(!prev) head = head->next;
        else {
            if(!curr->next) tail = prev;
            prev -> next = curr -> next;
        }
    }
    
    bool contains(int key) {
        Node* temp = head;
        while(temp) {
            if(temp->val == key) return true;
            temp = temp->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */