/**
 * @file library.cpp
 * @author Daemon Bytes
 * @date 2024-03-13
 * @brief the .cpp file for the Movie Collection 
 * 
 * 
 */

#include <list>
#include <iostream>
#include <fstream>
#include "library.h"


using namespace std;

Library::Library()
{
  Movie * head = nullptr;
  Movie * tail = nullptr;
  Movie * midpoint = nullptr;
  int number_of_movies = 0;
}

Library::~Library()
{
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

void Library::push_back(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year)
{
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

void Library::load_from_file(string filename) //TODO: Fix the while loop.
{
  //All data (Temp variables) used when inserting the list from a file.
  ifstream File(filename);
  string Temp_Title, Temp_Director, Temp_Format = "";
  int Temp_Movie_Runtime, Temp_Year = 0;
  float Temp_Price = 0;
  //char dummy = 'i'; //DEBUGGER for the Debugging section.
  while(getline(File, Temp_Title)) //TODO: Fix the condition to load the file properly.
    {
      Movie * NewMovie = new Movie;
      NewMovie->Title = Temp_Title;
      NewMovie->Director_Name = Temp_Director;
      NewMovie->Movie_Runtime = Temp_Movie_Runtime;
      NewMovie->Year = Temp_Year;
      NewMovie->Price = Temp_Price;
      insert_sorted(NewMovie); //Takes the movie and automatically movie, and finds the appropriate place alphabetically to insert in the list. 



      //push_back();

      //DEBUGGING SECTION:
      // cin >> dummy;
      // cout << TempFirst << " ";
      // cin >> dummy;
      // cout << TempLast << " " ;
      // cin >> dummy;
      // cout << TempNumb << " i: " << i << endl;

      //      cout << TempFirst << ' ' << TempLast << endl;
      //cout << TempNumb << ' ' << "i: " << i;
      //i++;
    }
  File.close();
}


void Library::insert_sorted(Movie * NewMovie) {
  if (head == NULL) // If the list is empty
    { 
      head = NewMovie;
      return;
    }

  // If the new node should be inserted at the beginning
  if (NewMovie->Title < head->Title)
    {
      NewMovie->next = head;
      head = NewMovie;
      return;
    }

  Movie *prev = head;
  Movie *current = head->next;

  // Traverse the list to find the appropriate position to insert the new node
  while (current != NULL && NewMovie->Title >= current->Title)
    {
      prev = current;
      current = current->next;
    }

  // Insert the new node between prev and current
  prev->next = NewMovie;
  NewMovie->next = current;
}

void Library::find_movie(string Query_Title)
{
  string returning_movie = "";
  Movie * ptr = head;
  if(head == NULL)
    {
      cout << "List is empty! Please enter in some movies." << endl;
      return;
    }
  while(ptr != NULL)
    {
      if(ptr->Title == Query_Title)
	{
	  returning_movie = ptr->Title;
	  cout << returning_movie << endl;
	  //return;
	}
      ptr = ptr->next;
    }
}
