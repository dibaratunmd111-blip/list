typedef int Elem;
class Lists
{
private:
    struct Node {
        Elem data;
        Node* prev;
        Node* next;
    };

    Node* header;    
    Node* trailer;   
    int n;

public:

    class Iterator {
    private:
        Node* p;
        friend class Lists;

    public:
        Iterator(Node* ptr = 0) {
            p = ptr;
        }

        Elem& operator*() {
            return p->data;
        }

        Iterator operator++() {
            p = p->next;
            return Iterator(p);
        }

        Iterator operator--() {
            p = p->prev;
            return Iterator(p);
        }

        bool operator==(const Iterator& other) const {
            return p == other.p;
        }

        bool operator!=(const Iterator& other) const {
            return p != other.p;
        }
    };

public:
    Lists();
    ~Lists();

    int size() const;
    bool empty() const;

    Iterator begin() const;
    Iterator end() const;

    void insertFront(const Elem& e);
    void insertBack(const Elem& e);

    void insert(const Iterator& pos, const Elem& e);
    void erase(const Iterator& pos);
};


