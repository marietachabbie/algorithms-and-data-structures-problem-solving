#ifndef insertion_sort_list_h
#define insertion_sort_list_h

#include <iostream>
#include <list>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class List {
private:
    Node* head;
    Node* tail;

public:
    List() {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert(int value) {
        Node* node = new Node(value);
        if (this->head == nullptr) {
            this->head = node;
            this->tail = node;
            return;
        }

        this->tail->next = node;
        node->prev = this->tail;
        this->tail = node;
    }

    void print() {
        if (this->head == nullptr) {
            cout << "Empty Linked List" << endl;
        } else {
            cout << "\nLinked List Head to Tail :";
            Node* temp = this->head;
            while (temp != nullptr) {
                cout << " " << temp->data;
                temp = temp->next;
            }
            cout << endl;
        }
    }

    void swapData(Node* first, Node* second) {
        int value = first->data;
        first->data = second->data;
        second->data = value;
    }

    void Sort() {
        Node* curr = this->head;
        while (curr != nullptr) {
            Node* next = curr;
            while (next->prev != nullptr &&
                   next->data < next->prev->data) {
                this->swapData(next, next->prev);
                next = next->prev;
            }
            curr = curr->next;
        }
    }
};

class SolutionList {
public:
    List createDLList (const vector<int>& vec) {
        List newLL;

        for (auto&& num : vec) {
            newLL.insert(num);
        }

        return newLL;
    }

    void insertionSortOfList (List& newLL) {
        newLL.Sort();
    }
};

#endif
