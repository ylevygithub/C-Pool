//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Picture.hpp
//

#ifndef _Picture_H_
#define _Picture_H_

#include <iostream>
#include <string>
#include <fstream>

class Picture {
    public :
        std::string data;
    public :
        Picture();
        ~Picture();
        bool getPictureFromFile(const std::string &file);
        /*Sets data’s value to the content of file.
        If an error occurs, data must be set to “ERROR” and the function must return false.
        Otherwise, it returns true*/
        Picture(const std::string &file);/*Creates a Picture object by loading the content of file.
        If an error occurs, data must be set to “ERROR”.
        Creating a Picture without a filename as parameter sets data to an empty string.*/
};

#endif /*_Picture_H_*/
