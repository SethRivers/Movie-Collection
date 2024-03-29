# Movie-Collection

With this program, you'll be able to create, view, load, edit, and keep track of a list of movies - containing the Movie's name, the Director's name, the runtime of the films (calculated in minutes), the date the film was first released, and the price of acquistion for the film (going off of the prompt of a Client's personal movie collection.)

# Design Decisions

WIP

# How To Run The program

When you use the Makefile, the program will create an executable called "library." So, to run the program, you will first want to type in ./library into your terminal. From there, the UI can walk you through the process of using the program! Do note; while the initial menu has failsafes in place for if you type in something other than the numbers 1-8, you should take care when adding a new movie to a list. When it asks you for the year of release, the runtime, or the price of acquistion - typing in a letter here will cause an infinite loop and will necesitate a forced stop via ctrl + X + C.

# Challenges

One of our biggest challenges came from the fact we misread the assignment, forcing us to restart from the ground up. After that, the main problem that came up was getting the menu input to accept strings with spaces in them - which, in the end, was easily fixed with just two short lines of code (where there was a coresponding cin for the string.)

# How we Shared our work

We mostly programed while in the same room, or discussed ideas and designs over discord DMs. When it hit us that the program that we were working on had to be remade from the ground up, James opted to remake most of the guts already present while Seth worked on making sure said guts worked with the menu and fix any errors that were still present in the code.