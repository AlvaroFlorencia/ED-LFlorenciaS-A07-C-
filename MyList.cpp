/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyList.cpp
 * Author: Dell
 * 
 * Created on 11 de septiembre de 2017, 13:26
 */

#include "MyList.h"
#include <iostream>
#include <conio.h>
using namespace std;

MyList::MyList() {  //Constructor without parameters
first = NULL;
	last = NULL;
	pointer = NULL;
}

MyList::MyList(int data) { //Constructor with parameter 
    Node node =new Node(data);
        first=node;
        last=node;
        node->next=NULL;
}
//Methods
bool MyList::isEmpty() { //Method to know if first is Empty
    return first==NULL;
}
 //Is it Empty?
//Insert the first
void MyList::insertFirst(int d) {
     Node node=new Node(d);
        if(isEmpty()){
            
            //Case empty list
            first=node; //Pointing node 
        
        last=node;
        node->next=NULL;
            
        }
        else{
           node->next=first; //Case with element
           first=node;
            
        }
        
}
//Insert the final
void MyList::insertLast(int d) {
    Node node= new Node(d);
        if(isEmpty()){
            
            
            first=node; //Pointing node 
        //Case empty list
        last=node;
        node->next=NULL;
            
        }
        else{
           last->next=node; //Case with element
           last=node;
          
            
        }
    }
void MyList::deleteFirst() { //Delete the first
if(!isEmpty()){
            if(first->next==NULL){ //If the list have only a one element
                first=NULL;
                last=NULL;
            }else{
                first=first->next;
                
            }
        }
}
//Delete the final
void MyList::deleteLast() {
     if(!isEmpty()){
            if(first==last){ //If the list have only a one element  
                first=last=NULL;
            }else{//We search in the array
                pointer=first;
               
                while(pointer->next!=last){ // Scrolls the list and stops at the value of  element of the last one
                pointer=pointer->next;
                
            }
                last=pointer;
                last->next=NULL;
                pointer=NULL;
                
             
            }
        }
}
