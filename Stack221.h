/**************************************************************
 * File:    Stack221.h
 * Project: CSCE 221 - Project 1
 * Author : Lauren Rose Soriano
 * Date   : February 13, 2019
 * Section: 511
 * E-mail:  laurensori@tamu.edu
 *
 * This file contains all inherited functions from the List221 
 * parent class. They are reimplemented in Stack221's cpp file.
 * It also has the function T Top() which returns the top item
 * in the stack, as well as Stack221(const Stack221 &a) which is
 * a copy constructor.
 *
 *************************************************************/

#ifndef STACK221_H
#define STACK221_H

#include <iostream>
using namespace std;

#include "List221.h"

template <class T>
class Stack221 : public List221<T>
{ 
    public:
        Stack221();
        Stack221(const Stack221 & old_stack);
        
        //Returns the top item on the stack
        T Top();

        int  Size() const;   	//Returns the size of a list
        bool Empty() const;  //Returns whether a list has data or not
        bool Push(T obj);	   //Pushes data into the list
        bool Pop();		  //Pops data from a list
        bool Clear();	//Clears a list
        Node221<T>* INSERT = new Node221<T>;
};

#include "Stack221.cpp"
#endif