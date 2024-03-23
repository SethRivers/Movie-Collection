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
    cout<<"3 Write The Movie List to a file"<<endl;
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
      cout<<">Movie List Data read and ready to view!\n"<<endl;
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
      cout<<"List written to file!\n"<<endl; 
    }
    //Allows the user to search for a Movie via its name
    else if (menu == "4"){ 
      cout<<">What is the name of the film you wish to know more of?: ";
      cin.ignore();
      getline(cin, input);
      a.find_movie(input);
      cout<<endl;
    }
    //Lets the user find a movie by the director
    //note for James: we may need to set something up to check if there are multiple movies by that director 
    else if (menu == "5"){
      cout<<">Which Director would you like to search for?: ";  
      cin.ignore();
      getline(cin, input); 
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
      //push option
      int choice = 0; 
      
      cout<<">Please input the information of the film you wish to add in this order:"<<endl; 

      cin.ignore();
      cout<<"*Movie Title:\n - ";
      getline(cin, title);
      cout<<"*The Director's Name:\n - ";
      getline(cin, director);
      cout<<"*The Movie Format (Digital, DVD, Blu-ray, or VHS):\n - ";
      cin>>format;
      cout<<"*The Movie's runtime (in minutes):\n - ";
      cin>>runtime;
      cout<<"*The Year The Movie Aired:\n - ";
      cin>>year;
      cout<<"*The Cost of The Film's Acquisition:\n - ";
      cin>>price; 
      cout<<">Finally, select how you'd like your Movie be added to the list:\n*1: Auto sort.\n*2: Push To Front.\n*3: Push To Middle.\n*4: Push To Back."<<endl;
      cin>>choice;
      //auto sort
      if (choice == 1){
	a.insert_sorted(title, director, runtime, format, price, year);
	cout<<">Movie Successfully Added To The List!\n"<<endl;
      }
      //Push To Front
      else if (choice == 2){
	cout<<">Push To Front is currently WIP!\n"<<endl;
      }
      //Push To Middle
      else if (choice == 3){
	cout<<">Push To Middle is currently WIP!\n"<<endl;
      }
      //Push To Back
      else if (choice == 4){
	cout<<">Push To Back is currently WIP!\n"<<endl;
      }
      else {
	cout<<">Invalid Option! Please Try again\n"<<endl;
      }
      //note for myself/James: add a failstate. Likely a nested if statement 
    }
    //allows someone to remove a movie from the movie data 
    else if (menu == "7"){
      cout<<">Please provide the name of the movie you want to remove: ";
      cin.ignore();
      getline(cin, input);
      a.remove(input);
    }
    //if anything other than the numbers 1 - 8 are chosen, it runs this outcome instead. 

    else if (menu == "8") {
      return 0;
	}

    else{
      cout<<">Invalid Option, Please try again!\n"<<endl;
	}
   
  }
  
  return 0;
}
