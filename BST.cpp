//
// Created by ergys on 12/15/2020.
//
#include <iostream>
#include "BST.h"

BST::BST() { // constructor
    data = 0;
    left = NULL;
    right = NULL;
}

BST::BST(int d) { //constructor
    data = d;
    left = right = NULL;
}

BST *BST::insert(BST *root, int d) { // Insert the first node, if root is null.
    if (!root) {

        return new BST(d);
    }

    if (d > root->data) { // insert to the right node if the node to be inserted is greater than the root

        root->right = insert(root->right, d);
    } else { // insert to the left if the node to be inserted is less than the root

        root->left = insert(root->left, d);
    }


    return root;
}

BST *BST::search(BST *root, int d) {

    if (root == NULL || root->data == d) //if root is null or it is the element we search
        return root;


    if (root->data < d) // if the element we search is greater than the root
        return search(root->right, d);


    return search(root->left, d); // if the element we search is less than the root
}
