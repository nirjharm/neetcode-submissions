typedef struct node{
    unordered_map<char, struct node *> ch;
    bool eow;
} node;

class PrefixTree {
    node * head;

public:
    PrefixTree() {
        head = new node();
        head->eow = false;
    }
    
    void insert(string word) {
        node *cp = head;
        for(char c: word)
        {
            if(!cp->ch.contains(c))
            {
                cp->ch[c] = new node();
                cp->ch[c]->eow = false;
            }
            cp = cp->ch[c];
        }
        cp->eow = true;
    }
    
    bool search(string word) {
        node *cp = head;
        for(char c: word)
        {
            if(!cp->ch.contains(c))
            {
                return false;
            }
            cp = cp->ch[c];
        }
        return cp->eow;
    }
    
    bool startsWith(string prefix) {
        node *cp = head;
        for(char c: prefix)
        {
            if(!cp->ch.contains(c))
            {
                return false;
            }
            cp = cp->ch[c];
        }
        return true;
    }
};
