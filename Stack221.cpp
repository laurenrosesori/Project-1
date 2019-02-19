/**************************************************************
 * File:    Stack221.cpp
 * Project: CSCE 221 - Project 1
 * Author : Lauren Rose Soriano
 * Date   : February 13, 2019
 * Section: 511
 * E-mail:  laurensori@tamu.edu
 *
 * This file implements all inherited functions from the List221 
 * parent class.
 * It also has the function T Top() which returns the top item
 * in the stack, as well as Stack221(const Stack221 &a) which is
 * a copy constructor.
 *
 *************************************************************/

#ifndef STACK221_CPP
#define STACK221_CPP

#include "Stack221.h"

template <class T>
Stack221<T>::Stack221()
{
    this->head_ptr = NULL;
    this->tail_ptr = NULL;
}

template <class T>
Stack221<T>::Stack221(const Stack221 & old_stack)
{
    this->head_ptr = old_stack.head_ptr;
    this->tail_ptr = old_stack.tail_ptr;
}

template <class T>
T Stack221<T>::Top()
{
    return  this->tail_ptr->data; 
}

//Inherited Functions below
template <class T>
int Stack221<T>::Size() const //Returns the size of a list
{
    if (Empty()) //Check if the stack is Empty
    {
        return 0;
    }
    else //If the stack is not empty
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
bool Stack221<T>::Empty() const //Returns whether a list has data or not
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
bool Stack221<T>::Push(T obj) //Pushes data into the list
{
    //Node221<T>* INSERT = new Node221<T>; //Moved to the h file cause error
    INSERT->data = obj;

    if(Empty()) //pushing the first item in a list
    {
         this->INSERT->next_link = NULL;
         this->INSERT->previous_link = NULL;
         this->head_ptr =  this->INSERT;
        this-> tail_ptr =  this->INSERT;
    }
    else
    {
         this->tail_ptr->next_link =  this->INSERT;
         this->INSERT->previous_link =  this->tail_ptr;
         this->INSERT->next_link = NULL;
         this->tail_ptr =  this->tail_ptr->next_link;
    }

    return true;
}

template <class T>
bool Stack221<T>::Pop() //Pops data from a list
{
    if (Empty())
    {
        return false;
    }
    else if(Size()==1)
    {
        delete  this->head_ptr;
         this->head_ptr = NULL;
         this->tail_ptr = NULL;
        return true;
    }
    else
    {
        this->tail_ptr =  this->tail_ptr->previous_link;
        delete  this->tail_ptr->next_link;
        this->tail_ptr->next_link = NULL;
        return true;
    }
    
}

template <class T>
bool Stack221<T>::Clear() //Clears a list
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