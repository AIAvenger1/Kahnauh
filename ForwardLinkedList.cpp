#include "ForwardLinkedList.h"


    void ForwardLinkedList::push(int x)
    {
        if(empty())
        {
            auto temp = new Node{x,&first};
            last = temp;
             ++size_;
            return;
        }
        auto temp = new Node{x, last};
        last = temp;
         ++size_;
    }

    // first -> .... -> 123

    void  ForwardLinkedList::pop()
    {
        Node * temp = last;
        last = temp->prev;
        delete temp;
        --size_;
    }


    int  ForwardLinkedList::val() const
    {
        return last->data;
    }

    int& ForwardLinkedList::val()
    {
        return last->data;
    }

