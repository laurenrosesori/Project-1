/**************************************************************
 * File:    Node.h
 * Project: CSCE 221 - Project 1
 * Author : Lauren Rose Soriano
 * Date   : February 13, 2019
 * Section: 511
 * E-mail:  laurensori@tamu.edu
 *
 * This file contains all data members that would be parts of a
 * node. This includes a data of T type, as well as the front
 * and back pointers to the next or previou node.
 *
 *************************************************************/
#ifndef NODE221_H
#define NODE221_H

#include <iostream>
using namespace std;

template <class T>
class Node221
{
    public:
        T data;
        Node221<T> * next_link;
        Node221<T> * previous_link;

};

#include "Node221.cpp"
#endif