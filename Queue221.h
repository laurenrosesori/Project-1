/**************************************************************
 * File:    Queue221.h
 * Project: CSCE 221 - Project 1
 * Author : Lauren Rose Soriano
 * Date   : February 13, 2019
 * Section: 511
 * E-mail:  laurensori@tamu.edu
 *
 * This file contains all inherited functions from List221.h that
 * will be implemented by this child class. It also contains 
 * T Front() and T Back() which are the items at the front and 
 * back of the queue.
 *
 *************************************************************/

#ifndef QUEUE221_H
#define QUEUE221_H

#include <iostream>
using namespace std;

#include "List221.h"

template <class T>
class Queue221 : public List221<T>
{
    public:
        T Front(); //Returns the item at the front of the queue
        T Back();  //Returns the item at the back of the queue

        //Inherited Functions
        int Size() const;   	//Returns the size of a list
        bool Empty() const;  //Returns whether a list has data or not
        bool Push(T obj);	   //Pushes data into the list
        bool Pop();		  //Pops data from a list
        bool Clear();	//Clears a list
};

#include "Queue221.cpp"
#endif