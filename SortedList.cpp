#include <iostream>
#include "SortedList.h"


using namespace SortedList;

SortedList() {
  *head = NULL;
};

bool insert(Student *s) {

  //need to come back and make sure we insert
  //in ascending order based on ID
  Listnode *temp;
  Listnode *curr;
  Listnode *newStudent;
  int studID;
  bool inserted = false;
 // temp = (Listnode*)malloc(sizeof(temp));
 // temp->student = s;

  newStudent  = (Listnode*)malloc(sizeof(temp));
  newStudent->student = s;

  studID = s->studentID;
  Student student;
  

  if(*head == NULL)
    head = temp;
    head->next = NULL;
  else if( head->next == NULL) {
	if(head->student)->studentID > studID)
  }
	  temp = head;

	do{
		
		student = temp->student;
		if(student->studentID == studID)
			return false;
		else if(student=
{
			
	}




	curr = head

    while (temp->next != NULL && !inserted){
	  currStudent = temp->student;
	  nextStudent = (temp->next)->Student;
	 if( (nextStudent->studentID) > (currStudent->studentID) ){
		temp->

	}	    
    temp->next = head;
    head = temp;
  

};

Student * find(int studentID){

	if(head == NULL){
		return NULL;
	}

  Listnode *temp;
  Student* s;
  temp = head;
  bool found = false; //may not be necessary

  do{
	s = temp->student;
  	  if(s->studentID == studentID){
		return s;
		
	}
	temp = temp->next;

  }while(temp != NULL)

/*
	
  while(!found && temp->next != NULL){
    if( temp->studentID == studentID){
      found = true;
      break;
    }
      temp = temp->next;
  }
  
*/
    return temp;

};



Student* remove(int studentID){


	if(head == NULL){
		return NULL;
	}
	
	Listnode* temp;
	Student* s;
	temp = head;
	//if first node matches
	if((temp->student)->studentID == studentID){
			head = temp->next;
	}
	else{
		while((temp->next)->studentID != studentID && temp->next != NULL){
			temp = temp->next;
		}
		if((temp->next)->studentID == studentID){
			s = (temp->next)->student;
			temp->next  = (temp->next)->next;
			return s;	
		}else{
			return NULL;
		}

	}


};



void print() const{
	curr = head;
	while(curr->next != NULL){
		cout << (curr->student)->studentID << endl;
		curr = curr->next;
	}
};
