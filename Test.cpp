#include "doctest.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>


#include "BinaryTree.hpp"


using namespace ariel;

 BinaryTree<int> tree_of_ints;
BinaryTree<string> tree_of_strings;

 BinaryTree<int> tree_of_ints2;
BinaryTree<string> tree_of_strings2;

TEST_CASE("add values"){
   
CHECK_NOTHROW(tree_of_ints.add_root(10));
CHECK_NOTHROW(tree_of_ints.add_left(10, 39));
CHECK_NOTHROW(tree_of_ints.add_left(39, 42));
CHECK_NOTHROW(tree_of_ints.add_right(39, 52));
CHECK_NOTHROW(tree_of_ints.add_right(10, 32).add_left(10, 2));

CHECK_NOTHROW(tree_of_strings.add_root("10"));
CHECK_NOTHROW(tree_of_strings.add_left("10", "39"));
CHECK_NOTHROW(tree_of_strings.add_left("39", "42"));
CHECK_NOTHROW(tree_of_strings.add_right("39", "52"));
CHECK_NOTHROW(tree_of_strings.add_right("10", "32").add_left("10", "2"));

 
CHECK_NOTHROW(tree_of_ints2.add_root(10));
CHECK_NOTHROW(tree_of_ints2.add_left(10, 39));
CHECK_NOTHROW(tree_of_ints2.add_left(39, 42));
CHECK_NOTHROW(tree_of_ints2.add_right(39, 52));
CHECK_NOTHROW(tree_of_ints2.add_right(10, 32).add_left(10, 2));

CHECK_NOTHROW(tree_of_strings2.add_root("10"));
CHECK_NOTHROW(tree_of_strings2.add_left("10", "39"));
CHECK_NOTHROW(tree_of_strings2.add_left("39", "42"));
CHECK_NOTHROW(tree_of_strings2.add_right("39", "52"));
CHECK_NOTHROW(tree_of_strings2.add_right("10", "32").add_left("10", "2"));



}

TEST_CASE("print"){
CHECK_NOTHROW( cout << tree_of_ints << endl);
CHECK_NOTHROW( cout << tree_of_strings << endl);

CHECK_NOTHROW( cout << tree_of_ints2 << endl);
CHECK_NOTHROW( cout << tree_of_strings2 << endl);

}
