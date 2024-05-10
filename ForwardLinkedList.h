#pragma once

class ForwardLinkedList
{
    struct Node
    {
        int data;
        Node* prev;
    };

    Node first{0,nullptr};
    Node * last = nullptr;
    unsigned size_ = 0;

public:
    ForwardLinkedList() = default;
    ForwardLinkedList(const ForwardLinkedList &) = delete;
    ForwardLinkedList (ForwardLinkedList&& ) = delete;
    ForwardLinkedList &operator=(const ForwardLinkedList &) = delete;
    ForwardLinkedList &operator=(ForwardLinkedList&&) = delete;
    //~ForwardLinkedList();
    
    unsigned size() { return size_; }
    bool empty() { return size() == 0; }

    void push(int);

    void pop();

    int val() const;

    int &val();

    class OutputIterator
    {
        Node* first;
        Node* curr;

        public:
            int operator*();
            bool
            
    };

};

