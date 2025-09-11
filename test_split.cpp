/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include <iostream>

int main(int argc, char* argv[])
{
    Node* in = new Node{1, new Node{2, new Node{3, new Node{4, new Node{5, NULL}}}}};
    Node* odds = nullptr;
    Node* evens = nullptr;

    split(in, odds, evens);

    for (Node* p=odds; p!=NULL; p=p->next){
      std::cout<<p->value<<" ";

    }
    std::cout<<std::endl;

    for (Node* p=evens; p!=NULL; p=p->next){
      std::cout<<p->value<<" ";
    }

    return 0;
}
