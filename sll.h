#include <iostream>

template<typename T>
struct Node {
    T data;
    Node* next;

    Node(T data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

template<typename T>
class Single_Linked_List {
private:
    Node<T>* head;
    Node<T>* tail;
    int num_items;

public:
    Single_Linked_List() {
        head = nullptr;
        tail = nullptr;
        num_items = 0;
    }

    //add node to front of list
    void push_front(T data) {
        Node<T>* inserting_node = new Node<T>(data, head); //created new node
        head = inserting_node;
        if (num_items == 0) {
            tail = inserting_node;
        }
        num_items++;
        inserting_node = nullptr;
    }

    //add node to end of list
    void push_back(T data) {
        Node<T>* inserting_node = new Node<T>(data, nullptr); //create new node
        if (num_items == 0) {
            tail = inserting_node;
            head = inserting_node;
        }
        else {
            tail->next = inserting_node;
            tail = inserting_node;
        }
        num_items++;
        inserting_node = nullptr;
    }

    //remove item from front 
    void pop_front() {
        if (head == nullptr) {
            throw std::invalid_argument("Attempt to call pop_front on an empty list");
        }
        if (num_items == 1) {
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        else {
            Node<T>* temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
            temp = nullptr;
        }
        num_items--;
    }

    //remove item from end
    void pop_back() {
        if (tail == nullptr) {
            throw std::invalid_argument("Argument to call pop_back on an empty list");
        }
        if (num_items == 1) {
            delete tail;
            head = nullptr;
            tail = nullptr;
        }
        else {
            Node<T>* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            temp->next = nullptr;
            delete tail;
            tail = temp;
            temp = nullptr;
        }
        num_items--;
    }

    //return head 
    T front() {
        if (num_items == 0) {
            throw std::invalid_argument("Argument to call front on an empty list");
        }
        return head->data;
    }

    //return tail
    T back() {
        if (num_items == 0) {
            throw std::invalid_argument("Argument to call front on an empty list");
        }
        return tail->data;
    }

    //return true if empty 
    bool empty() {
        return num_items == 0;
    }

    //insert item at certain index
    void insert(size_t index, const T& data) {
        if (index == 0) {
            push_front(data);
        }
        else if (index >= num_items) {
            push_back(data);
        }
        else {
            Node<T>* temp = head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            Node<T>* insertingNode = new Node<T>(data, temp->next);
            temp->next = insertingNode;
            temp = nullptr;
            num_items++;

        }
    }

    //remove item at certain index 
    bool remove(size_t index) {
        if (index == 0) {
            pop_front();
            return true;
        }
        else if (index >= num_items) {
            return false;
        }
        else {
            Node<T>* temp = head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            Node<T>* temp1 = temp->next;
            temp->next = temp1->next;
            temp1->next = nullptr;
            delete temp1;
            temp1 = nullptr;

            num_items--;
            return true;
        }
    }

    //return position of first occurance of item 
    size_t find(const T& data) {
        if (num_items == 0) {
            throw std::invalid_argument("Argument to call function on an empty list");
        }
        else {
            Node<T>* temp = head;
            size_t i = 0;
            while (temp != nullptr) {
                if (temp->data == data) {
                    return i;
                }
                temp = temp->next;
                i++;
            }
            return num_items;
        }
    }

    void println() {
        Node<T>* curr = head;
        while (curr != nullptr) {
            std::cout << curr->data << " ";
            curr = curr->next;
        }
    }
};



