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
  Library object;
  string file = "Movie-List.txt";
  object.load_from_file(file);
  object.print();
  object.Insert_Sort();
  object.print();
  return 0;
}
