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
#include <string>
#include "library.h"


using namespace std;

Library::Library()
{
  midpoint = NULL;
  number_of_movies = 0;
  Movie_List = {}; //creates our list which should be empty of Nodes/Movies.
}
Library::~Library()
{
  midpoint = NULL;
  number_of_movies = 0;
  //TODO: add a destructor for the std::list<Movie> Movie_List
}

void Library::load_from_file(string filename)
{
  Movie temp;
  ifstream File(filename);
  
  while(getline(File, temp.Title))
    {
      cout << "Hi" << endl;
      getline(File, temp.Director_Name);
      getline(File, temp.Format);
      File >> temp.Movie_Runtime >> temp.Year >> temp.Price;
      Movie_List.push_back(temp);
      File.ignore();
      File.ignore();
      number_of_movies++;
    }

}
void Library::print()
{
  if(number_of_movies <= 0)
    {
      cout << "There are no movies in the list to print! Add some movies to the list!" << endl;
      return;
    }
  cout << "List of " << number_of_movies << " items" << endl;
  for(it = Movie_List.begin(); it != Movie_List.end(); it++)
    {
      cout << "List item: " << it -> Title << " - " << it -> Director_Name << " - " << it -> Format << endl;
    }
  it = Movie_List.begin(); //To avoid possible errors, we should always point to the head of the list.
}
void Library::Insert_Sort() {
  if(number_of_movies <= 0)
    {
      cout << "There are no movies in the list to sort! Add some movies to the list!" << endl;
      return;
    }
    std::list<Movie>::iterator it2;
    Movie temp;
    
    for (it = Movie_List.begin(); it != Movie_List.end(); it++) {
        it2 = it;
        it2++; // Move it2 to the next element
        
        while (it2 != Movie_List.end()) {
            if (it->Title >= it2->Title) {
                temp = *it;
                *it = *it2;
                *it2 = temp;
            }
            it2++;
        }
    }
}

void Library::remove(string Query_Title)
{
  if(number_of_movies <= 0)
    {
      cout << "There are no movies in the list to delete! Add some movies to the list!" << endl;
      return;
    }
  for(it = Movie_List.begin(); it != Movie_List.end(); it++)
    {
      if((it -> Title) == Query_Title)
	{
	  Movie_List.erase(it);
	  number_of_movies--;
	  return;
	}
    }
  
}

void Library::push_back(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year)
{
  Movie temp;
  temp.Title = New_Title;
  temp.Director_Name = New_Director_Name;
  temp.Movie_Runtime = New_Movie_Runtime;
  temp.Format = New_Format;
  temp.Price = New_Price;
  temp.Year = New_Year;
  Movie_List.push_back(temp);
  cout << "Movie added to the back of the list!" << endl;
}

void Library::push_front(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year)
{
  Movie temp;
  temp.Title = New_Title;
  temp.Director_Name = New_Director_Name;
  temp.Movie_Runtime = New_Movie_Runtime;
  temp.Format = New_Format;
  temp.Price = New_Price;
  temp.Year = New_Year;
  Movie_List.push_front(temp);
  cout << "Movie added to the front of the list!" << endl;
}

void Library::find_movie(string Query_Title)
{
  if(number_of_movies <= 0)
    {
      cout << "There are no movies in the list to find! Add some movies to the list!" << endl;
      return;
    }
  cout << "List of " << Query_Title << " " << endl;
  for(it = Movie_List.begin(); it != Movie_List.end(); it++)
    {
      if(it -> Title == Query_Title)
	{
	  cout << "List item: " << it -> Title << " - " << it -> Director_Name << " - " << it -> Format << endl;
	}
    }
  it = Movie_List.begin(); //To avoid possible errors, we should always point to the head of the list.

}

