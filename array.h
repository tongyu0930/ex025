/*  Name: Tong Yu
    StudentID: 1424586
    Description: 
*/

#ifndef ARRAY_H
#define ARRAY_H

class Array {
    public:
        Array();
        void display_the_array() const;
        int* find_max_min();
        float* find_var_mean();

        float mean_vari[2];
        int min_max[2];

    private:
        int the_array[20];
        

};

#endif
