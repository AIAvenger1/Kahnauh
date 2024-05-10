#include <iostream>
#include <string>
#include "ForwardLinkedList.h"

int main()
{

    ForwardLinkedList Test;

    const int N = 5;

    for(int i =0; i<N; i++)
    {
        Test.push(i);
    }

    for(int i =0; i<N; i++)
    {
        std::cout << Test.val() << " ";
        Test.pop();
    }



    /*
    Cycle c;

    for (int i = 1; i < 10; i++)
    {
        c.push_back(std::to_string(i));
        c.push_front(std::to_string(i * 10));
    }
    */
//
 // YANA DWOISHNITSA
    //for (Cycle::Iterator it = c.start(); it != c.end(); --it)
    //{
    //    std::cout << *it << " ";
    //}
}