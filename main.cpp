/**
 * @file main.cpp
 * @author Daemon Bytes
 * @date 2024-03-13
 * @brief Wip
 * 
 * 
 */


#include <iostream>
#include <list>
#include "library.h"

using namespace std;

int main() {
  Library a;
  //menu input
  string menu = "";
  //user input 
  string input = "";

  //The Menu
  cout<<"Welcome to The Daemon Bytes Movie database! Please input the corresponding number for the option you wish to use:"<<endl;
  while (menu != "8"){
    cout<<"1 Read the Movie List from a file"<<endl;
    cout<<"2 Print The Movie List"<<endl;
    cout<<"3 Write the Movie List to a file"<<endl;
    cout<<"4 Find Movie"<<endl;
    cout<<"5 Director Search"<<endl;
    cout<<"6 Add a Movie"<<endl;
    cout<<"7 Delete a Movie"<<endl;
    cout<<"8 Exit this program"<<endl<<endl;

    cin>>menu;
    //loads the file 
    if (menu == "1"){
      cout<<">Please input the name of the Movie List File you wish to use (example: MovieList.txt): ";
      cin>>input;
      a.load_from_file(input);
      cout<<">Movie List Data read and ready to view!"<<endl;
    }
    //Prints the currently loaded movie-list data out to the user
    else if (menu == "2"){
      a.print();
      cout<<endl;
    }
    //This allows the user to write the current movie list data they have on hand to an existing file. works with empty files as well
    else if (menu == "3"){
      cout<<">What file do you want to write to?(Example: MovieList.txt):";
      cin>>input;
      a.store_to_file(input);
      cout<<endl; 
    }
    //Allows the user to search for a Movie via its name
    else if (menu == "4"){ 
      cout<<">What is the name of the film you wish to know more of?: ";
      cin>>input; 
      a.find_movie(input);
      cout<<endl;
    }
    //Lets the user find a movie by the director
    //note for James: we may need to set something up to check if there are multiple movies by that director 
    else if (menu == "5"){
      cout<<">Which Director would you like to search for?: "<<endl; 
      cin>>input;
      a.find_director(input);
      cout<<endl;
    }
    //Lets the user add a movie to the Movie List Data
    else if (menu == "6"){
      //user input (varied)

      //movie name
      string title = "";
      //director name
      string director = "";
      //movie format
      string format = "";
      //movie runtime (in minutes) 
      int runtime = 0;
      //year of release
      int year= 0;
      //price of acquisition
      float price = 0.00; 
      
      cout<<">Please input the information of the film you wish to add in this order:"<<endl; 

      cout<<"*Movie Title:\n - ";
      cin>>title;
      cout<<"*The Director's Name:\n - ";
      cin>>director;
      cout<<"*The Movie Format (Digital, DVD, Blu-ray, or VHS):\n - ";
      cin>>format;
      cout<<"*The Movie's runtime (in minutes):\n - ";
      cin>>runtime;
      cout<<"*The Year The Movie Aired:\n - ";
      cin>>year;
      cout<<"*The Cost of The Film's Acquisition:\n - ";
      cin>>price; 
      a.insert_sorted(title, director, runtime, format, price, year);
      //note for myself/James: add a failstate. Likely a nested if statement 
      cout<<">Movie Successfully Added!"<<endl;
    }
    //allows someone to remove a movie from the movie data 
    else if (menu == "7"){
      cout<<">Please provide the name of the movie you want to remove: ";
      cin>>input;
      a.remove(input);
      cout<<input<<"succesfully removed!"<<endl;
    }
    //if anything other than the numbers 1 - 8 are chosen, it runs this outcome instead. 

    else if (menu == "8") {
      return 0;
	}

    else{
      cout<<"Invalid Option, Please try again!\n"<<endl;
	}
   
  }
  
  return 0;
}
