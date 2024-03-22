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
#include <list>
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

    };
  std::list<Movie> Movie_List; //Declares the Linked list.
  Movie * midpoint;
  int number_of_movies;
  std::list<Movie>::iterator it;

public:

/**
 * The constructor for the program
 *
 * @pre 
 * @post 
 * 
 */
  Library();

/**
 * The destructor of the program
 *
 * @pre 
 * @post 
 * 
 */
  ~Library();

/**
 * pushes movie data to the back of the list
 *
 * @param std::string New_Title Movie title
 * @param std::string New_Director_Name director name
 * @param int New_Movie_Runtime Movie Runtime in minutes
 * @param std::string New_Format Movie Format
 * @param float New_Price price of acquistion 
 * @param int New_Year year of release
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void push_back(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year);

/**
 * Pushes movie data to the front of the list
 *
 * @param std::string New_Title Movie Title
 * @param std::string New_Director_Name Director Name
 * @param int New_Movie_Runtime Movie Runtime in minutes
 * @param std::string New_Format Movie Format 
 * @param float New_Price price of acquisiton 
 * @param int New_Year year of release
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void push_front(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year);


/**
 * loads the movie list from a file full of data
 *
 * @param std::string filename String that holds a file-name
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void load_from_file(std::string filename);


/**
 * Pushes data to the file 
 *
 * @param std::string filename holds the name of the file
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void store_to_file(std::string filename);


/**
 * sorts the movie list data when a file is loaded in
 *
 * @param Movie * NewMovie 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void insert_sorted(Movie * NewMovie); //used for when loading in a file.


/**
 * sorts the movie data provided to it 
 *
 * @param std::string Sort_Title 
 * @param std::string Sort_Director_Name 
 * @param int Sort_Movie_Runtime 
 * @param std::string Sort_Format 
 * @param float Sort_Price 
 * @param int Sort_Year 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void insert_sorted(std::string Sort_Title, std::string Sort_Director_Name, int Sort_Movie_Runtime, std::string Sort_Format, float Sort_Price, int Sort_Year);


/**
 * Sorts the movie list data when a file is loaded in 
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void Insert_Sort(); //sorts the movies as it is being loaded in.


/**
 * finds the data for a movie you request by name
 *
 * @param std::string Query_Title 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void find_movie(std::string Query_Title);


/**
 * Locates movie data based off of the director you input 
 *
 * @param std::string Query_Director 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void find_director(std::string Query_Director);


/**
 * removes requested movie data from the list
 *
 * @param std::string Query_Title 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void remove(std::string Query_Title);


/**
 * Prints the movie data from the list 
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();
  

};


#endif //LIBRARY_H
