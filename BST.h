//
// Created by ergys on 12/15/2020.
//

#ifndef EXTRA_BST_H
#define EXTRA_BST_H


class BST {

    int data;
    BST *left, *right;
public:
    BST(); //constructor

    BST(int d); //constructor

    BST *insert(BST *root, int d); // insert function

    BST *search(BST *root, int d); // search function


};


#endif //EXTRA_BST_H
