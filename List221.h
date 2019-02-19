/**************************************************************
 * File:    List221.h
 * Project: CSCE 221 - Project 1
 * Author : Lauren Rose Soriano
 * Date   : February 13, 2019
 * Section: 511
 * E-mail:  laurensori@tamu.edu
 *
 * This file contains all parents functions that will be inherited
 * by the Queue221 and Stack221 child classes.
 * It also includes the class's constructor, destructor, and copy 
 * constructor.
 *
 *************************************************************/

#ifndef LIST221_H
#define LIST221_H

#include "Node221.h"
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

template <class T>
class List221
{
    public:
        List221();
        ~List221();
        List221(const List221<T> & a);

    
        virtual int Size() const = 0;   	//Returns the size of a list
        virtual bool Empty() const = 0;  //Returns whether a list has data or not
        virtual bool Push(T obj) = 0;	   //Pushes data into the list
        virtual bool Pop() = 0;		  //Pops data from a list
        virtual bool Clear() = 0;	//Clears a list

    protected:
        Node221<T>* head_ptr;
        Node221<T>* tail_ptr;
};

#include "List221.cpp"
#endif