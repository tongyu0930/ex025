/*  Name: Tong Yu
    StudentID: 1424586
    Description: 
*/

#include "array.h"
#include <iostream>

int main(void) {
    Array array1;
    array1.display_the_array();
    std::cout << array1.find_max_min()[0] << " " << array1.find_max_min()[1];
    std::cout << std::endl;
    std::cout << array1.find_var_mean()[0] << " " << array1.find_var_mean()[1];
    std::cout << std::endl;
}



