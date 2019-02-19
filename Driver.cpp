/**************************************************************
 * File:    Driver.cpp
 * Project: CSCE 221 - Project 1
 * Author : Lauren Rose Soriano
 * Date   : February 13, 2019
 * Section: 511
 * E-mail:  laurensori@tamu.edu
 *
 * Sample driver file for project 1.
 *
 *************************************************************/

#include "Stack221.h"
#include "Queue221.h"
#include "Exceptions221.h"

int main(int argc, char *argv[]) 
{
    Stack221<int> *myStack = new Stack221<int>();
    Queue221<int> myQueue;
    
    
    try {
        for (int i = 0; i < 10;){
            myStack->Push(i);
            myQueue.Push(i++);
        }
    cout << "Queue size: " << myQueue.Size() << endl;
    cout << "Queue cleared = " << myQueue.Clear() << endl;
    
    }
    catch (Exceptions221 &E){
        cout << "Exception: " << E.GetMessage() << endl;
    }
    
    delete myStack;
}
