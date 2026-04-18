typedef struct node{
    unordered_map<char, struct node *> ch;
    bool eow;
} node;

class WordDictionary {
    node * head;
public:
    WordDictionary() {
        head = new node();
        head->eow = false;        
    }
    
    void addWord(string word) {
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
    

    bool recursive_search(string word, node* chead)
    {
        node *cp = chead;
        int l = word.size();
        if(l == 0)
        {
            return cp->eow;
        }

        for(int i = 0; i < word.size(); i++)
        {
            char c = word[i];
            if(c == '.')
            {
                bool re = false;
                for(auto kv: cp->ch)
                {
                    re = recursive_search(word.substr(i + 1, l-(i+1)), kv.second);
                    if(re)
                        break;
                }
                return re;
            }
            
            if(!cp->ch.contains(c))
            {
                return false;
            }
            cp = cp->ch[c];
        }
        return cp->eow;
    }

    bool search(string word) {
        return recursive_search(word, head);
    }
};



