/**
 * @file library.cpp
 * @author Daemon Bytes
 * @date 2024-03-13
 * @brief the .cpp file for the Movie Collection 
 * 
 * 
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "library.h"

using namespace std;


/**
 * 
 *
 * @pre 
 * @post 
 * 
 */
library::library();


/**
 * 
 *
 * @param std::string Title 
 * @param std::string Director_Name 
 * @param int Movie_Runtime 
 * @param std::string Format 
 * @param float Price 
 * @param int Year 
 * @pre 
 * @return void 
 * @post 
 * 
 */
void library::push_back(std::string Title, std::string Director_Name, int Movie_Runtime, std::string Format, float Price, int Year);


/**
 * 
 *
 * @param std::string Title 
 * @param std::string Director_Name 
 * @param int Movie_Runtime 
 * @param std::string Format 
 * @param float Price 
 * @param int Year 
 * @pre 
 * @return void 
 * @post 
 * 
 */
void library::push_front(std::string Title, std::string Director_Name, int Movie_Runtime, std::string Format, float Price, int Year);


/**
 * 
 *
 * @param std::string filename 
 * @pre 
 * @return void 
 * @post 
 * 
 */
void library::load_from_file(std::string filename);


/**
 * 
 *
 * @param std::stirng filename 
 * @pre 
 * @return void 
 * @post 
 * 
 */
void library::store_to_file(std::stirng filename);


/**
 * 
 *
 * @param std::string Title 
 * @param std::string Director_Name 
 * @param int Movie_Runtime 
 * @param std::string Format 
 * @param float Price 
 * @param int Year 
 * @pre 
 * @return void 
 * @post 
 * 
 */
void library::insert_sorted(std::string Title, std::string Director_Name, int Movie_Runtime, std::string Format, float Price, int Year);


/**
 * 
 *
 * @param std::string Title 
 * @pre 
 * @return string 
 * @post 
 * 
 */
string library::find_movie(std::string Title);


/**
 * 
 *
 * @param std::string Director_Name 
 * @pre 
 * @return string 
 * @post 
 * 
 */
string library::director_search(std::string Director_Name);


/**
 * 
 *
 * @param std::string Title 
 * @pre 
 * @return void 
 * @post 
 * 
 */
void library::remove(std::string Title);


/**
 * 
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void library::print();


/**
 * 
 *
 * @pre 
 * @post 
 * 
 */
library::~library();
