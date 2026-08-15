class LRUCache {
public:
    struct Node {
        int key, val;
        Node *next, *prev;
        Node(int key, int val) {
            this->key = key;
            this->val = val;
            next = NULL;
            prev = NULL;
        }
    };
    map<int, Node*> mp;
    Node* head;
    Node* tail;
    int capacity;

    void insertNode(Node* node) {
        Node* headNext = head->next;
        head->next = node;
        node->prev = head;
        node->next = headNext;
        headNext->prev = node;
    }
    void deleteNode(Node* node) {
        Node* nodePrev = node->prev;
        Node* nodeNext = node->next;
        nodePrev->next = nodeNext;
        nodeNext->prev = nodePrev;
    }

    LRUCache(int capacity) {
        this->capacity = capacity;
        mp.clear();
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            deleteNode(node);
            insertNode(node);
            return node->val;
        }
        return -1;
    }

    void put(int key, int value) {
        if(mp.find(key) != mp.end()) {
            Node* node = mp[key];
            node->val = value;
            deleteNode(node);
            insertNode(node);
            return;
        }
        if (capacity == mp.size()) {
            Node* node = tail->prev;
            mp.erase(node->key);
            deleteNode(node);
            delete node;
        }
        Node* newNode = new Node(key, value);
        mp[key] = newNode;
        insertNode(newNode);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */