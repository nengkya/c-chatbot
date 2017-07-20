#include <iostream>
#include <vector>
 
int main()
{
 //Create a vector containing integers
 std::vector <int> v{1, 2, 3, 4, 5};

 v.reserve(3); 
 // Add two more integers to vector
 v.push_back(25);
 v.push_back(13);
 
 // Iterate and print values of vector
 for (n : v)
     {std::cout << n << '\n';}
}

// cara compile --> g++ stdvector.cpp -o stdvector -std=c++11
// doesnt work  --> g++ stdvector.cpp -o stdvector -std=c++98
// warning: range-based for loop without a type-specifier only available with
// -std=c++1z or -std=gnu++1z for (n : v)

