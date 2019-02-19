/**************************************************************
 * File:    List221.cpp
 * Project: CSCE 221 - Project 1
 * Author : Lauren Rose Soriano
 * Date   : February 13, 2019
 * Section: 511
 * E-mail:  laurensori@tamu.edu
 *
 * This file contains definitions for the class's constructor,
 * destructor, and copy constructor.
 *
 *************************************************************/
#ifndef LIST221_CPP
#define LIST221_CPP


#include "List221.h"


template <class T>
List221<T>::List221()
{
    head_ptr = NULL;
    tail_ptr = NULL;
}

template <class T>
List221<T>::~List221()
{
    while(head_ptr != NULL)
    {
        head_ptr = head_ptr -> previous_link; // moves head_ptr up one node
        delete head_ptr -> next_link; //deletes and return NODE back to free memory
    }
}

template <class T>
List221<T>::List221(const List221<T> & old_list)
{
    head_ptr = old_list.head_ptr;
    tail_ptr = old_list.tail_ptr;
}

#endif