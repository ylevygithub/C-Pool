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
        Picture(const std::string &file);
    public :
        Picture(const Picture &);
        Picture &operator=(const Picture &);
};

#endif /*_Picture_H_*/
