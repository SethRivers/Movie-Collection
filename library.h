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
 * The Constructor for the Program
 *
 * @pre 
 * @post Movie_list, midpoint, and number_of_movies will all be initialized and ready for use. 
 * 
 */
  Library();

/**
 * The Destructor for the Program
 *
 * @pre The variables midpoint and numbe_of_movies to be initialized
 * @post the variables are returned to their base values 
 * 
 */
  ~Library();

/**
 * Pushes movie data to the back of the list
 *
 * @param std::string New_Title A string to hold the name of the film
 * @param std::string New_Director_Name a string to hold the name of the film's director
 * @param int New_Movie_Runtime a integar to hold the film's runtime (in minutes)
 * @param std::string New_Format a string to hold the movie format
 * @param float New_Price a float to hold the movie price 
 * @param int New_Year a integar to hold the year the film released
 * @pre there must be data for the movie name, director name, movie runtime, movie format, movie price, and movie year
 * @return void 
 * @post new movie data is put into the back of the movie list
 * 
 */
  void push_back(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year);

/**
 * Pushes movie data to the middle of the list
 *
 * @param std::string New_Title A string to hold the name of the film
 * @param std::string New_Director_Name a string to hold the name of the film's director
 * @param int New_Movie_Runtime a integar to hold the film's runtime (in minutes)
 * @param std::string New_Format a string to hold the movie format
 * @param float New_Price a float to hold the movie price
 * @param int New_Year a integar to hold the year the film released
 * @pre there must be data for the movie name, director name, movie runtime, movie format, movie price, and movie year
 * @return void
 * @post new movie data is put into the middle of the movie list
 *
 */
  void push_middle(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year);

/**  
 * Pushes movie data to the front of the list
 *
 * @param std::string New_Title A string to hold the name of the film
 * @param std::string New_Director_Name a string to hold the name of the film's director
 * @param int New_Movie_Runtime a integar to hold the film's runtime (in minutes)
 * @param std::string New_Format a string to hold the movie format 
 * @param float New_Price a float to hold the movie price
 * @param int New_Year a integar to hold the year the film released
 * @pre there must be data for the movie name, director name, movie runtime, movie format, movie price and movie year
 * @return void
 * @post new movie data is put into the front of the movie list
 *
 */
  void push_front(std::string New_Title, std::string New_Director_Name, int New_Movie_Runtime, std::string New_Format, float New_Price, int New_Year);


/**
 * Loads data from a pre-existing file into the list
 *
 * @param std::string filename a string that holds the name of a file 
 * @pre A filename must be given through the menu in main
 * @return void 
 * @post the data inside the file should be loaded into the movie list
 * 
 */
  void load_from_file(std::string filename);


/**
 * Stores the data from a movie list into a file
 *
 * @param std::string filename a string that holds the name of a file
 * @pre there must be a movie list available to store. It can be blank, however. 
 * @return void 
 * @post Movie list data stored to the file listed in filename - maybe even making a new file in the process
 * 
 */
  void store_to_file(std::string filename);


/**
 * part 1 of the movie sorting process. It loads the data up into temp variables, and calls insert_sort
 *
 * @param std::string Sort_Title string to hold the movie title
 * @param std::string Sort_Director_Name string to hold director name
 * @param int Sort_Movie_Runtime integar to hold movie runtime(in minutes)
 * @param std::string Sort_Format string to hold movie format
 * @param float Sort_Price float to hold price of acquisition 
 * @param int Sort_Year integar to hold release year
 * @pre there must be atleast 1 movie's worth of data in the list
 * @return void 
 * @post data is pushed to insert_sort, and data is sorted
 * 
 */
  void insert_sorted(std::string Sort_Title, std::string Sort_Director_Name, int Sort_Movie_Runtime, std::string Sort_Format, float Sort_Price, int Sort_Year);


/**
 * Part 2 of the sorting process. Takes the temp data and sorts everything in the list
 *
 * @pre insert_sorted must be called and have eligible data loaded into it
 * @return void 
 * @post the sorted list is ready to be viewed, or user is notified of there being no movies
 * 
 */
  void Insert_Sort(); //sorts the movies as it is being loaded in.


/**
 * Searches the list for a movie's data via its name
 *
 * @param std::string Query_Title a string holding the name of the movie 
 * @pre The user must request a movie to search for
 * @return void 
 * @post the data of the movie is printed for the user, or the user is notified of there being no matching movie
 * 
 */
  void find_movie(std::string Query_Title);


/**
 * searches the list for a movie's data via the name of its director
 *
 * @param std::string Query_Director a string holding the name of the director
 * @pre the user must request a director to search for
 * @return void 
 * @post the Movies directed by the p.o.i. is printed for the user to view, or they are notified that there are no films by them in the list
 * 
 */
  void find_director(std::string Query_Director);
  

/**
 * removes a movie's data from the list
 *
 * @param std::string Query_Title a string that holds the name of the movie
 * @pre the user must request the deletion of a film
 * @return void 
 * @post the requested movie is removed from the list, or the user is notified that there is no movie by that name to delete
 * 
 */
  void remove(std::string Query_Title);


/**
 * prints the movie list for the user to see
 *
 * @pre there must be a list active to print, but it can be empty
 * @return void 
 * @post prints the movie list data, or lets the user know they should either load a list or make a new one
 * 
 */
  void print();
  
};


#endif //LIBRARY_H
