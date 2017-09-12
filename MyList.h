/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyList.h
 * Author: Dell
 *
 * Created on 11 de septiembre de 2017, 13:26
 */

#ifndef MYLIST_H
#define MYLIST_H
#include "Node.h"
#pragma once

class MyList {
public:
    Node*first;
    Node*last;
    Node*pointer;  //Variables
    MyList();
    MyList(int data);
     bool isEmpty();
     void insertFirst(int d); //Methods
     void insertLast(int d);
       void deleteFirst();  
     void deleteLast();    
private:

};

#endif /* MYLIST_H */

