# Movie-Collection

With this program, you'll be able to create, view, load, edit, and keep track of a list of movies - containing the Movie's name, the Director's name, the runtime of the films (calculated in minutes), the date the film was first released, and the price of acquistion for the film (going off of the prompt of a Client's personal movie collection.)

# Design Decisions
**Driver(main.cpp):**
James:
Seth: The Menu was designed to work off of a system similar to those automated phone systems. The user is given a number of options for what they may want, and from there all they will need to do is either enter their selection choices into the prompt to get the outcome they wish - whether that be searching up movie details, adding a movie, or even deleting one. To save on usage space, and to streamline internal usages, these prompts all share the "input" string - specific items such as the film name, director name, film format, year of release, runtime in minutes, and the price of acquisition are only initialized when the user needs them to add a new movie to a new or existing list.

**Header:**
The header was designed to work around the std::list library so there would be no need to create a linked list from the ground up.

**Implementation:**
James: Used the std::list library to implimement the Movie List. All the decisions are within the parameters of the assignment. Most of the methods used are from the std::list and any alternative approaches are based on logical necessity for the program.

# How To Run The program

When you use the Makefile, the program will create an executable called "library." So, to run the program, you will first want to type in ./library into your terminal. From there, the UI can walk you through the process of using the program!

# Challenges

One of our biggest challenges came from the fact we misread the assignment, forcing us to restart from the ground up. After that, the main problem that came up was getting the menu input to accept strings with spaces in them - which, in the end, was easily fixed with just two short lines of code (where there was a coresponding cin for the string.)

# How we Shared our work

We mostly programed while in the same room, or discussed ideas and designs over discord DMs. When it hit us that the program that we were working on had to be remade from the ground up, James opted to remake most of the guts already present while Seth worked on making sure said guts worked with the menu and fix any errors that were still present in the code.  