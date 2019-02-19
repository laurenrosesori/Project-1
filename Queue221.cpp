/**************************************************************
 * File:    Queue221.cpp
 * Project: CSCE 221 - Project 1
 * Author : Lauren Rose Soriano
 * Date   : February 13, 2019
 * Section: 511
 * E-mail:  laurensori@tamu.edu
 *
 * This file implements all inherited functions from List221.h.
 * It also defines T Front() and T Back() which are the items 
 * at the front and back of the queue.
 *
 *************************************************************/

#ifndef QUEUE221_CPP
#define QUEUE221_CPP

#include "Queue221.h"

template <class T>
T Queue221<T>::Front()
{
    return  this->head_ptr->data;
}

template <class T>
T Queue221<T>::Back()
{
    return  this->tail_ptr->data;
}

//Inherited Functions below
template <class T>
int Queue221<T>::Size() const //Returns the size of a list
{
    if (Empty()) //Check if the queue is Empty
    {
        return 0;
    }
    else //If the queue is not empty
    {   
        int i=1;
        Node221<T>* CURSOR =  this->head_ptr; 

        while(CURSOR->next_link != NULL)
        {
            CURSOR = CURSOR->next_link;
            i++;
        }

        return i;
    }
}

template <class T>
bool Queue221<T>::Empty() const//Returns whether a list has data or not
{
    if (( this->head_ptr==NULL) && ( this->tail_ptr==NULL))
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
bool Queue221<T>::Push(T obj) //Pushes data into the list
{
    Node221<T>* INSERT = new Node221<T>;
    INSERT->data = obj;

    if(Empty()) //pushing the first item in a list
    {
        INSERT->next_link = NULL;
        INSERT->previous_link = NULL;
         this->head_ptr = INSERT;
         this->tail_ptr = INSERT;
    }
    else
    {
        this->tail_ptr->next_link = INSERT;
        INSERT->previous_link = this->tail_ptr;
        INSERT->next_link = NULL;
        this->tail_ptr = this->tail_ptr->next_link;
    }

    return true;
}

template <class T>
bool Queue221<T>::Pop() //Pops data from a list
{
    if (Empty())
    {
        return false;
    }
    else if(Size()==1) //if only one element in queue
    {
        delete  this->head_ptr;
        this->head_ptr = NULL;
         this->tail_ptr = NULL;
        return true;
    }
    else
    {
         this->head_ptr = this->head_ptr->next_link;
        delete this->head_ptr->previous_link;
        this->head_ptr->previous_link = NULL;
        return true;
    }
}

template <class T>
bool Queue221<T>::Clear() //Clears a list
{
    if (Empty())
    {
        return false;
    }
    else
    {
        bool temp;
        for (int i=0; i<Size(); i++)
        {
            temp = Pop();
        }
        return true;
    }
}

#endif