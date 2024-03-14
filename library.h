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
Class Library {
 private:
 struct Movie{
   std::string Title;
   std::string Director_Name;
   //calculated in minutes
   int Movie_Runtime;
   //Digital, DVD, Blu-ray, or VHS
   std::string Format;
   float Price;
   int Year; 
 }

 public:
 library();
 void push_back(std::string Title, std::string Director_Name, int Movie_Runtime, std::string Format, float Price, int Year);
 void push_front(std::string Title, std::string Director_Name, int Movie_Runtime, std::string Format, float Price, int Year);
 void load_from_file(std::string filename);
 void store_to_file(std::stirng filename);
 void insert_sorted(std::string Title, std::string Director_Name, int Movie_Runtime, std::string Format, float Price, int Year);
 std::string find_movie(std::string Title);
 std::string director_search(std::string Director_Name);
 void remove(std::string Title);
 void print();
 ~library(); 
  
}; 
  

#endif //LIBRARY_H
