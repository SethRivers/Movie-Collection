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

void Library::load_from_file(string filename)
{
  //All data (Temp variables) used when inserting the list from a file.
  ifstream File(filename);
  string Temp_Title, Temp_Director, Temp_Format = "";
  int Temp_Movie_Runtime, Temp_Year = 0;
  float Temp_Price = 0;
  //char dummy = 'i'; //DEBUGGER for the Debugging section.
  while(File >> Temp_Title >> Temp_Director >> Temp_Format >> Temp_Movie_Runtime >> Temp_Year >> Temp_Price)
    {
      Movie * NewMovie = new Movie;
      NewMovie->Title = Temp_Title;
      NewMovie->Director_Name = Temp_Director;
      NewMovie->Movie_Runtime = Temp_Movie_Runtime;
      NewMovie->Year = Temp_Year;
      NewMovie->Price = Temp_Price;
      //insert_sorted(NewMovie); //Takes the movie and automatically movie, and finds the appropriate place alphabetically to insert in the list. 



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
