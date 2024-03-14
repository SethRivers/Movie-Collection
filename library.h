/**
 * @file library.h
 * @author Daemon Bytes
 * @date 2024-03-13
 * @brief The .h file for the Movie Collection. 
 * 
 * 
 */

#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
class Library
{
 private:
 struct Movie
 {
   std::string Title;
   std::string Director_Name;
   //calculated in minutes
   int Movie_Runtime;
   //Digital, DVD, Blu-ray, or VHS
   std::string Format;
   float Price;
   int Year;

   Movie * next; //Points to the next movie, or to NULL.
 };
 Movie * head;
 Movie * tail;
 Movie * midpoint;
 int number_of_movies;
 
 public:
 Library();
 void push_back(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year);
 void push_front(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year);
 void load_from_file(std::string filename);
 void store_to_file(std::string filename);
 void insert_sorted(Movie * NewMovie); //used for when loading in a file.
 void insert_sorted(std::string Sort_Tile, std::string Sort_Director_Name, int Sort_Movie_Runtime, std::string Sort_Format, float Sort_Price, int Sort_Year);
 std::string find_movie(std::string Query_Title);
 std::string director_search(std::string Query_Director_Name);
 void remove(std::string Query_Title);
 void print();
 void Insert_Sort(); //sorts the movies as it is being loaded in.
 ~Library(); 
  
}; 
  

#endif //LIBRARY_H
