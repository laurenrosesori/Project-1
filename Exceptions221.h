/**************************************************************
 * File:    MyExceptions.h
 * Project: CSCE 221 - Project 1
 * Author : 
 * Date   : 
 * Section: 
 * E-mail:  
 *
 * MyExceptions Class definition.
 *
 *************************************************************/
#ifndef MYEXCEPTIONS_H
#define MYEXCEPTIONS_H
#include <string>

using namespace std;

class Exceptions221 
{
    public:
        /**********************************************************************
         * Name: MyExceptions (Constructor)
         * PreCondition: String containing error description.  
         * 
         * PostCondition:  Error object
         *********************************************************************/
        Exceptions221(string message): m_message(message) 
        {

        }

        /**********************************************************************
         * Name: GetMessage
         * PreCondition: None.  
         * 
         * PostCondition:  Returns error message.
         *********************************************************************/
        const string GetMessage()
        { 
            return m_message; 
        }
        
    private:
        string m_message; //Error message.
};

#endif