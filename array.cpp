/*  Name: Tong Yu
    StudentID: 1424586
    Description: 
*/

#include "array.h"
#include <iostream>
#include <cstdlib>  // for the random

Array::Array() {
    srand (time(NULL));  // seeding

    for(int n = 0; n < 20; n = n +1) {
        the_array[n] = rand() % 100;  // range from 0 - 99 
    }
}

void Array::display_the_array() const {
    for(int n = 0; n < 20; n = n +1) {
        std::cout << the_array[n] << " ";
    }
    std::cout << std::endl;
}

int* Array::find_max_min() {
    int max = the_array[0];
    int min = max;
    for(int n = 1; n < 20; n = n +1) {
        if(the_array[n] > max) {
            max = the_array[n];
        } else if (the_array[n] < min) {
            min = the_array[n];
        }
    }
    min_max[1] = max;
    min_max[0] = min;
    return min_max;
}

float* Array::find_var_mean() {
    int sum = 0;
    float mean;
    float variance;
    int numerator_for_variance = 0;
    for(int n = 0; n <20; n = n +1) {
        sum += sum + the_array[n];
    }
    mean = sum / 20;
    
    for(int n = 0; n < 20; n = n +1) {
        numerator_for_variance += numerator_for_variance + (the_array[n] - mean)*(the_array[n] - mean);
    }
    variance = numerator_for_variance / 20;

    mean_vari[0] = mean;
    mean_vari[1] = variance;
    return mean_vari;
}