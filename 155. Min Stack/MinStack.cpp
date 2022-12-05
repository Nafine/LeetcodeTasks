//better to split it in two file (in one .cpp and one .hpp)

class MinStack {

private:

    struct Node
    {
        int value;
        int min;
        Node *prev;    

        Node(int value, int min, Node* prev)
        {
            this->value = value;
            this->min = min;
            this->prev = prev;
        }
    };

    Node *head;


public:
    MinStack() {
        head = nullptr;
    }

    ~MinStack()
    {

        while (head)
        {
            Node* tempHead = head->prev;
            delete head;
            head = tempHead;
        }
    }

    void push(int val) {
   
        if (!head)
        {
            head = new Node(val, val , nullptr);
        }

        else
        {
            head = new Node(val , std::min(val, head->min), head);
        }
    }

    void pop() {
        head = head->prev;
    }

    int top() {
        return head->value;
    }

    int getMin() {
        return head->min;
    }
};
