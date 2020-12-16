//
// Created by ergys on 12/15/2020.
//

#ifndef EXTRA_TST_H
#define EXTRA_TST_H


class TST {
    int data;
    TST *left, *middle, *right;
public:
    TST(); // constructor

    TST(int d); // constructor

    TST *insert(TST *root, int d); // insert function

    TST *search(TST *root, int d); // search function


};


#endif //EXTRA_TST_H
