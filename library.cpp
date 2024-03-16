/**
 * @file library.cpp
 * @author Daemon Bytes
 * @date 2024-03-13
 * @brief the .cpp file for the Movie Collection 
 * 
 * 
 */

#include <iostream>
#include <fstream>
#include "library.h"

using namespace std;

Library::Library(){
  Movie * head = nullptr;
  Movie * tail = nullptr;
  Movie * midpoint = nullptr;
  int number_of_movies = 0;
}


void Library::push_back(std::string Title, std::string Director_Name, int Movie_Runtime, std::string Format, float Price, int Year){
Movie * NewMovie = new Movie;
  NewMovie -> next = nullptr;
  NewMovie -> Title = New_Title;
  NewMovie -> Director_Name = New_Director_Name;
  NewMovie -> Movie_Runtime = New_Movie_Runtime;
  NewMovie -> Format = New_Format;
  NewMovie -> Price = New_Price;
  NewMovie -> Year = New_Year;
  number_of_movies++;

  if(head == nullptr)
    {
      head = NewMovie;
      midpoint = NewMovie;
      tail = NewMovie;
    }
  else
    {
      tail = head;

      //find the last Node (NewMovie) in the list and assign tail to that Node.
      while(tail->next != NULL)
	{
	  tail = tail->next;
	}
      tail -> next = NewMovie;
    }
}

void Library::push_front(std::string Title, std::string Director_Name, int Movie_Runtime, std::string Format, float Price, int Year){

}


void Library::load_from_file(std::string filename){

}

void Library::store_to_file(std::stirng filename){

}


void Library::insert_sorted(std::string Title, std::string Director_Name, int Movie_Runtime, std::string Format, float Price, int Year){

}


void Library::find_movie(std::string Query_Title){
  Movie *temp = new Movie;
  temp = head;
  if (head == NULL){
    cout<<"Library is empty! Please enter in some films"<<endl;
    return;
  }
  while (temp != NULL){
    if(
}


string Library::director_search(std::string Director_Name){

}


void Library::remove(std::string Title){

}


void Library::print(){
    entry *temp = head;
    if(head == NULL)
      {
	cout << "No Movies present in library! Please select a new file or add some fresh cinematography!" << endl;
	return;
      }
    while(temp != NULL)
      {
	cout<< temp->Title <<endl;
	cout<< temp->Director_Name <<endl;
	cout<< temp->Format <<endl;
	cout<< temp->Movie_Runtime <<endl;
	cout<< temp->Year <<endl;
	cout<< temp->Price <<endl; 
	temp = temp->next;
      }
}


Library::~Library(){
  Movie * current = head;
  while(current != NULL)
    {
      Movie * Next_To_Delete = current->next;
      delete current;
      current = Next_To_Delete;
    }
  head = nullptr;
  tail = nullptr;
  number_of_movies = 0;
}
