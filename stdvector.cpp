#include <iostream>
#include <vector>
 
int main()
{
 //Create a vector containing integers
 std::vector <int> v;

 v.reserve(3); 
 // Add two more integers to vector
 v.push_back(25);
 v.push_back(13);
 
 // Iterate and print values of vector
 for (const &n : v)
     {std::cout << n << '\n';}
}
