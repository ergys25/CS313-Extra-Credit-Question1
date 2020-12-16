//
// Created by ergys on 12/15/2020.
//
#include <iostream>

using namespace std;

#include "TST.h"

TST::TST() { //   constructor
    data = 0;
    left = NULL;
    middle = NULL;
    right = NULL;

}

TST::TST(int d) { //   constructor
    data = d;
    left = middle = right = NULL;

}

TST *TST::insert(TST *root, int d) {

    if (!root) { // insert the first node, if root is null.

        return new TST(d);
    }


    if (d > root->data) { // insert to the right  if the node to be inserted is greater than the root

        root->right = insert(root->right, d);
    } else if ((root->left != NULL && d > root->left->data && d < root->data) ||
               d == root->data) { // Insert in  the middle node in case the value is less
        // than the root or even with the root but greater than left node
        root->middle = insert(root->middle, d);

    } else { // insert to the left if the node to be inserted is less than the root

        root->left = insert(root->left, d);
    }


    return root;
}

TST *TST::search(TST *root, int d) {
    if (root == NULL || root->data == d) //if root is null or it is the element we search
        return root;


    if (root->data < d) // if the element we search is greater than the root
        return search(root->right, d);

    if ((d > root->left->data && d < root->data) ||
        d == root->data) // if the element we search is less or even than the root and greater than left
        return search(root->middle, d);

    return search(root->left, d); // if the element we search is less than the root
}
